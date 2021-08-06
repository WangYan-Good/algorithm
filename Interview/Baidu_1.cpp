// 二叉树的层次遍历
#include<iostream>
#include <queue>

typedef struct Tree {
    int value;
    Tree *LeftChild;
    Tree *RightChild;
};
void layer_print( Tree t ) {
    std::queue<Tree> tqueue;
    Tree *pre = &t;
    Tree *child = pre;
    //Tree Node;

    tqueue.push(*pre);

    //
    while( !tqueue.empty() ) {

        if( pre->LeftChild != nullptr ) {
            tqueue.push(*(pre->LeftChild));
        }
        
        if( pre->RightChild != nullptr ) {
            tqueue.push(*(pre->RightChild));
        }
        
        tqueue.pop();
    }
}

int main() {

}