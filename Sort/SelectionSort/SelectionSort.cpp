#include <SelectionSort.h>

template<typename ElemType>
void selection_sort( std::vector<ElemType> & array, int length )
{
    ElemType min;
    for( int i = 0; i < length - 1; i++ ) // n-1 times
    {
        min  = i;
        for( int j = i + 1; j < length; j++  )
        {
            if( array[j] < array[min] )
            {
                min = j;
            }
        }
        if( min != i ) std::swap( array[min], array[i] );
    }
}