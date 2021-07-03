#include<stdio.h>
#define ElemType int
#define Status   bool
#define OK       1
#define False    0

typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

Status InitList(LinkList &L)
{
    L = new LNode;
    L->next = NULL;
    printf("finish!\n");
    return OK;
}

Status DestroyList(LinkList &L)
{
    LNode *p = L;
    LNode *aft = p->next;
    while(p->next != NULL)
    {
        delete(p);
        p = aft;
        aft = aft->next;
    }
    printf("LinkList destroy success !\n");
}
