#include <iostream>
#include "LinkList.h"

using namespace std;

void CreateLinkList(LNode *Header)
{
    ElemType data;
    printf("input data:");
    scanf("%d",&data);
    LNode *p;
    p = new LNode;
    p->data = data;
    p->next = NULL;
    Header ->next = p;
    printf("success!\n");
}

int main()
{
    // Define List A and List B
    LNode *A;
    LNode *B;

    // Init List A and List B
    InitList(A);
    InitList(B);

    //Create List A And List B
    CreateLinkList(A);
    CreateLinkList(B);

    //Destroy list A and List B
    DestroyList(A);
    DestroyList(B);

    return 0;
}
