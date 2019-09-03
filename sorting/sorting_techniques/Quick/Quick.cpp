/**
 * @copyright : Ankit
 * 
*/

#include "Quick.h"
using std::cout , std::endl , std::vector, std::floor;

// #define NULL __null : in c++
#define __null 0

void swap(vector<int>* vec, int x, int y) {
    int temp = vec->at(x);
    vec->at(x) = vec->at(y);
    vec->at(y) = temp;
}

int partition(vector<int>* vec, int start, int end) {
    int pivot = vec->at(start);
    int i = start;

    for (int j = start; j < end; j++) {
        if (vec->at(j) <= pivot) {
            swap(vec, i, j);
            i++;
        }
    }

    swap(vec, i, start);

    return i;
}

void quick_sort(vector<int>* unsorted_vec, int start, int end) {
    if (start < end) {
        int pivot_index = partition(unsorted_vec, start, end);
        quick_sort(unsorted_vec, start, pivot_index-1);
        quick_sort(unsorted_vec, pivot_index+1, end);
    }
}
