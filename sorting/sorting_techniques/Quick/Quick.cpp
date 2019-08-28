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

// int partition(vector<int>* vec, int start, int end) {
//     int pivot_index = start;
//     int pivot_elem = vec->at(pivot_index);

//     for (int i = start; i < end; i++) {
//         cout << vec->at(i) << " < " << vec->at(pivot_index);
//         cout << " ? " << (vec->at(i) < vec->at(pivot_index)) << endl;
//         if (vec->at(i) < pivot_elem) {
//             int temp = vec->at(i);
//             vec->at(i) = vec->at(pivot_index);
//             vec->at(pivot_index) = temp;
//             // swap(vec[i], vec[pivot_index]);
//             pivot_index = i;
//         }
//     }
//     // swap(vec, start, pivot_index-1);
//     // int temp = vec->at(start);
//     // vec->at(start) = vec->at(pivot_index - 1);
//     // vec->at(pivot_index) = temp;
//     cout << "Pivot index " << pivot_index << endl;
//     print_vec(*vec);

//     return pivot_index - 1;
// }

    int partition(vector<int>* vec, int start, int end) {
        int i = start, j = end - 1;
        int pivot = vec->at(start);
        while (true) {
            // left
            while (vec->at(i) < pivot) {
                i++;
                if(i == end) break;
            }
            //right
            while (vec->at(j) > pivot) {
                j--;
                if(j == start) break;
            }
            if(i <= j) break;
            swap(vec, i, j);
        }
        print_vec(*vec);
        swap(vec, start, j);
        print_vec(*vec);

        return j;
    }

void quick_sort(vector<int> unsorted_vec, int start, int end) {
    if (start < end) {
        int pivot_index = partition(&unsorted_vec, start, end);
        quick_sort(unsorted_vec, start, pivot_index);
        quick_sort(unsorted_vec, pivot_index, end);
    }
}