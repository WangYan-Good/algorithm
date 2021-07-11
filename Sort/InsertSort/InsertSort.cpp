#include <InsertSort.h>

//时间复杂度 O(n2)
template <typename Type>
void insert_sort( std::vector<Type> & array, int length )
{
    if( array.empty() || length == 1 )
    {
        return;
    }

    for( int j = 2; j < length; j++ )
    {
        array[0] = array[j];
        // Insert array[j] into the sorted sequence array[1...j-1]
        int i = j -1;
        while( i > 0 && array[i] > array[0] )
        {
            array[i+1] = array[i];
            i -= 1;
        }
        array[i+1] = array[0];
    }
}