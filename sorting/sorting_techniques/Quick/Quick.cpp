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
    // choose the first elem as pivot
    int pivot = vec->at(start);
    // track the pivot
    int i = start;

    for (int j = start; j < end; j++) {
        /* cout << "Pivot="<< pivot <<", i="<< i << ", vec.at(j)=" */
        /* cout << vec->at(j) << endl;*/
        // SWAP to insert vec[j] after pivot
        if (vec->at(j) < pivot) {
            i++;
            swap(vec, i, j);
        }
    }
    // SWAP the last smallest elem (vec[i]) with pivot
    swap(vec, i, start);
    /* print_vec(*vec); */

    return i;
}

void quick_sort(vector<int>* unsorted_vec, int start, int end) {
    if (start < end) {
        int pivot_index = partition(unsorted_vec, start, end);
        /* cout << "Pivot index= " << pivot_index << endl; */
        // vec.slice, Excluding pivot elem
        quick_sort(unsorted_vec, start, pivot_index);
        // vec.slice, Excluding pivot elem
        quick_sort(unsorted_vec, pivot_index+1, end);
    }
}
