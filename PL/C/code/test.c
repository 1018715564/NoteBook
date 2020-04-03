#include <stdio.h>
#include <stdlib.h>

//������������ 
typedef int DataType;
typedef struct Node{
    DataType data;//���������� 
    struct Node *next;//����ָ���� 
}LinkList;

LinkList * InitList(LinkList *p){
	p = (LinkList *)malloc(sizeof(LinkList));
	if(!p){
		exit(-1);//exit�������˳�����
	}
	p->next = NULL;
	return p;
}

LinkList * CreateList(){ //��������ֵΪLinkList * ���͡�
	int len, i, x;
	//LinkList *p = (LinkList *)malloc(sizeof(LinkList));
	LinkList *p,*q;
	p = InitList(q);
	LinkList * r = p; //����βָ��ָ��β�ڵ�
	r->next = NULL;
 
	printf("����������Ľڵ������len = ");
	scanf("%d", &len);
 
	for (i=0; i<len; ++i){
		printf("�������%d���ڵ��ֵ��", i+1);
		scanf("%d", &x);
 
		LinkList *q = (LinkList *)malloc(sizeof(LinkList)); //����Ĳ����������������ڴ�ռ��ڲ��ϵ�һ��������
		if (!q){
			printf("����ռ�ʧ�ܣ�������ֹ��\n");
			exit(-1);
		}
		q->data = x;
		r->next = q;
		q->next = NULL;
		r = q; //�ݹ�
	}
	return p;
}

void PrintList(LinkList * p){//�������
	LinkList *q;
	if (ListEmpty(p)){
		printf("����Ϊ�գ�\n");
	}else{
		q = p->next; //ʹָ��ָ����һ���ڵ�
		printf("�����е�����Ϊ��\n");
		while (q){//q!=NULL
			//printf("%d ", q->data);
			if(q->next){
				printf("%d->", q->data);
			}else{
				printf("%d", q->data);
			}
			q = q->next;
		}
		printf("\n");
	}
}

int InsertList(LinkList *head,int i,DataType e){
    LinkList *pre,*p;//�����i��Ԫ�ص�ǰ�����ָ��pre���������ָ��p
    int j = 0;
    pre = head; //ָ��preָ��ͷ���
    while(pre->next != NULL && j < i-1){ //ѭ��ֱ��ֱ��iԪ��ǰ�����
        pre = pre->next;
        j++;
    }
    if(j != i-1)//���û�ҵ�������λ�ó���
        return 0;
    //����һ�����
    p = (LinkList *)malloc(sizeof(LinkList));
    if(!p){
        exit(-1);
    }
    p->data =e; //��e��ֵ������������
    p->next = pre->next;
    pre->next =p;
    return 1;
}
 
 int DeleteList(LinkList *head,int i,DataType *e){
    LinkList *pre,*p;
    int j = 0;
    pre = head;
    while(pre->next!=NULL && pre->next->next != NULL && j<i-1){
        pre = pre->next;    
        j++;
    }
    if(j!=i-1){
        return 0;
    }
    //ָ��pָ�������еĵ�i�����,�����ý��������ֵ��ֵ��e
    p = pre->next;
    *e =p->data;
    //��ǰ������ָ����ָ��Ҫɾ��������һ�����
    pre->next =p->next;
    free(p);//�ͷ�pָ��Ľ��
    return 1; 
}

//����Ų��ҵ������е�i�����
LinkList *GetElem(LinkList *head,int i){
    LinkList *p;
    int j = 0;
    if(ListEmpty(head)||i<1){ //�������Ϊ��
        return NULL;
    }
    p = head;
    while(p->next !=NULL && j<i-1){//��֤p���¸���㲻Ϊ��
        p = p->next;
        j++;
    }
    if(j==i-1)//�ҵ���i�����
        return p;
    else
        return NULL;
}
 
//�����ݲ��ҵ�������Ԫ��ֵΪe��Ԫ��
int LocateElem(LinkList *head,DataType e){
	int flag = 0;
    LinkList *p;
    p = head->next; //ָ��pָ���һ�����
    while(p){
        if(p->data != e){
            p=p->next;//������һ��
        }else{
        	flag = 1;
            break;
        }
    }
    return flag;
}

int LocatePos(LinkList *head,DataType e){
    LinkList *p;//����һ��ָ������Ľ���ָ��p
    int i;
    if(ListEmpty(head))//�ǿ��ж�
        return 0;
    p = head->next;//ָ��pָ��һ�����
    i =1;
    while(p){
        if(p->data==e)
            return i;
        else
        {
            p=p->next;//ָ����һ�����
            i++;
        }
    }
    if(!p)//���û���ҵ���e��ȵ�Ԫ��
         return 0;
} 

int ListEmpty(LinkList *p){
	int flag = 0;
	if(!p){
		flag = 1;
	}
	return flag;
}

int main(){
	LinkList *p; //����ͷָ�룬�������ͷ���ĵ�ַ��
	p = CreateList(); //CreateList()������̬������������ͷ���ĵ�ַ��
	
	PrintList(p); //��ӡ���������� 
	InsertList(p, 1, 23);
    PrintList(p); //��ӡ���������� 
    int x;
    DeleteList(p,2,&x);
    PrintList(p); //��ӡ���������� 
    printf("ɾ�� %d\n",x);
    LinkList *q;
	q = GetElem(p,2);
	printf("���ҵ�%d\n",q->data);
	if(LocateElem(p,23)==1){
		printf("�ҵ�\n"); 
	}
	int i = LocatePos(p,23);
	printf("%d\n",i);
	return 0;
}
 

 

