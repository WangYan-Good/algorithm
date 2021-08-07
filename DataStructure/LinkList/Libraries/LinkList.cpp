#include "../Includes/LinkList.h"

Status CreateLinkList(LNode *Header)
{
    ElemType data;
    printf("input data:");
    scanf("%d",&data);
    LNode *p;
    p = new LNode;
    if( p == nullptr ) {
      return False;
    }
    p->data = data;
    p->next = NULL;
    Header ->next = p;
    printf("success!\n");
    return OK;
}

Status InitList(LinkList &L)
{
    L = new LNode;
    L->next = NULL;
    printf("InitList finish!\n");
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
