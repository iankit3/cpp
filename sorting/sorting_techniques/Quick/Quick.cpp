/**
 * @copyright : Ankit
 * 
*/

#include "Quick.h"
using std::cout , std::endl , std::vector, std::floor;

// #define NULL __null : in c++
#define __null 0

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int pivot_index = 0;
vector<int> quick_sort(vector<int> unsorted_vec) {
    int i = 1;
    if (unsorted_vec.size() < 2) {
        return unsorted_vec;
    }
    // NOT WORKING
    // cout << "Pivot at " << pivot_index << " ,is "
    //     << unsorted_vec.at(pivot_index) << endl;
    auto size = unsorted_vec.size();
    for (int j=0; j < size; j++) {

        int temp = unsorted_vec.at(j);
        if (unsorted_vec.at(j) < unsorted_vec.at(pivot_index)) {
            unsorted_vec.erase(unsorted_vec.begin()+j);
            unsorted_vec.insert(unsorted_vec.begin()+pivot_index,temp);
        } else {
            unsorted_vec.erase(unsorted_vec.begin()+j);
            unsorted_vec.insert(unsorted_vec.begin()+pivot_index,temp);
        }
    }
    // swap(unsorted_vec.at(0), unsorted_vec.at(i-1));
    // pivot_index = i-1;


    print_vec(unsorted_vec);

    vector<int> lt_pivot(unsorted_vec.begin(),
        unsorted_vec.begin()+pivot_index);
    vector<int> rt_pivot(unsorted_vec.begin()+pivot_index,
        unsorted_vec.end());

    quick_sort(lt_pivot);
    quick_sort(rt_pivot);

    return unsorted_vec;
}
