#include <stdio.h>
#define MaxSize 100
//������������ 
typedef int DataType;
typedef struct Node{
    DataType data;
    struct Node *next;
}ListNode,*LinkList;

//��ʼ�������� 
void InitList(LinkList *head){
    if((*head=(LinkList)malloc(sizeof(ListNode)))==NULL){
        //Ϊͷ������洢�ռ�
        exit(-1);
    }
    (*head)->next = NULL; //���������ͷ���ָ������Ϊ��
}
