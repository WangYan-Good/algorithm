#ifndef _BUBBLE_SORT_H_
#define _BUBBLE_SORT_H_

#include <iostream>
#include <vector>

template<typename ElemType>
void bubble_sort( std::vector<ElemType> & array, int length );

template<typename ElemType>
void bubble_sort( ElemType array[], int length );

#endif