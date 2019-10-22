#include <stdio.h>
#include <stdlib.h>
typedef char ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};
BinTree CreatBinTree(); /* 实现细节忽略 */
void InorderTraversal( BinTree BT );
void PreorderTraversal( BinTree BT );
void PostorderTraversal( BinTree BT );
void LevelorderTraversal( BinTree BT );

int main()
{
    BinTree BT = CreatBinTree();
    printf("Inorder:");    InorderTraversal(BT);    printf("\n");
    printf("Preorder:");   PreorderTraversal(BT);   printf("\n");
    printf("Postorder:");  PostorderTraversal(BT);  printf("\n");
    printf("Levelorder:"); LevelorderTraversal(BT); printf("\n");
    return 0;
}
void InorderTraversal( BinTree BT )//中序遍历
{
    if (BT!=NULL)
    {
        InorderTraversal(BT->Left);
        printf("%d ",BT->Data);
        InorderTraversal(BT->Right);
    }
    
}
void PreorderTraversal( BinTree BT )//先序遍历
{
    if(BT!=NULL)
    {
        printf("%d ",BT->Data);
        PreorderTraversal(BT->Left);
        PreorderTraversal(BT->Right);
    }
    
}
void PostorderTraversal( BinTree BT )//后序遍历
{
    if(BT!=NULL)
    {
        PostorderTraversal(BT->Left);
        PostorderTraversal(BT->Right);
        printf("%d ",BT->Data);
    }
}
typedef int Position;
typedef struct QNode *PtroToQNode;
struct QNode
{
    char *Data;
    Position Front,Rear;
    int MaxSize;
};
typedef PtroToQNode Queue;
Queue CreatBinTree()
{
    Queue Q=(Queue)malloc(sizeof(struct QNode));
    Q->Data=(char*)malloc(MaxSize*sizeof(char));
    Q->Front=Q->Rear=0;
    Q->MaxSize=MaxSize;
    
}
void LevelorderTraversal( BinTree BT )//层序遍历
{
    Queue Q;
    BinTree T;
    Q=CreatBinTree();
    if(BT==NULL)
    {
        return;
    }else
    {
        AddQ(Q,BT);
        while(Q!=NULL)
        {
            T=Delete(Q);
            printf("%d ",T->Data);
            if(T->Left)
                Adda(Q,T->Left);
             if(T->Right)
                Adda(Q,T->Right);
        }
        
        
    }
}
Queue CreatBinTree()
{
    Queue Q=(Queue)malloc(sizeof(struct QNode));
    
}
