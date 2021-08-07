#include<stdio.h>
#define  ElemType int
#define  Status   bool
#define  OK       1
#define  False    0
#define  IN
#define  OUT

/**
  Link List Node structure
**/
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

Status CreateLinkList( OUT LNode *Header);

Status InitList( IN LinkList &L);

Status DestroyList( IN LinkList &L);
