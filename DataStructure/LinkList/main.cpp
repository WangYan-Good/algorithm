#include <iostream>
#include "Includes/LinkList.h"
using namespace std;

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
