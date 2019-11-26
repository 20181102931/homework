#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}Node;
//创建一个结点
Node* Creatlist()
{
    Node *p = (Node *)malloc(sizeof(Node));
    //p->data = data;
    p->next = NULL;
    return p;
}
//插入结点
void Insert(Node *p,int x)//头插法
{
    int n;
    scanf("%d",&n);
    Node *head =(Node *)malloc(sizeof(Node));
    head->data = 2;
    head->next=NULL;//头结点
    for(int i=0;i<n;i++)
    {
        Node *t =(Node *)malloc(sizeof(Node));
        t->data =x;
        t->next =head->next ;
        head->next =t;
    }
    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }
}
void Insert2(Node*p,int x)//尾插法
{
    int n;
    scanf("%d",&n);
    Node* tmp;//指向结尾的指针；
    Node *head =(Node *)malloc(sizeof(Node));
    head->next=NULL;//头结点
    tmp = head;
    for(int i=0;i<n;i++)
    {
        Node *t =(Node *)malloc(sizeof(Node));
        t->data =x;
        tmp->next=t;
        tmp=t;
    }
    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }
    
}
//遍历打印输出链表


int main()
{
    Node* s =Creatlist();

    Insert2(s,3);
    //Insert2(s,2);
    return 0;
}
