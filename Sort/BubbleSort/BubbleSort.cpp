#include <BubbleSort.h>

template<typename ElemType>
void bubble_sort( std::vector<ElemType> & array, int length )
{
    bool flag;
    for( int i = 0; i < length - 1; i++ )
    {
        flag = false;
        for ( int j = length - 1; j > i; j-- ) // 一次冒泡操作
        {
            if( array[j - 1] > array[j] ) // 从末尾开始，A[j-1] > A[j]，则元素上浮
            {
                std::swap( array[j - 1], array[j] );
                flag = true;
            }
        }
        if( flag == false )
        {
            return;
        }
    }
}

template<typename ElemType>
void bubble_sort( ElemType array[], int length );