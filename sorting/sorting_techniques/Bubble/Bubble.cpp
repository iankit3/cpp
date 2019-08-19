/**
 * @copyright : Ankit
 * 
*/

#include "Bubble.h"
using std::cout , std::endl , std::vector;

// #define NULL __null : in c++
#define __null 0

void print_vec(const vector<int> &vec) {
    cout << "[";
    // vector<int>::iterator it;
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        if (*it != vec.back()) {
            cout << *it << ", ";
        } else {
            cout << *it;
        }
    }
    cout << "]" << endl;
}

vector<int>* bubble_sort(vector<int>* unsorted_vec) {
    for (int i=0; i < unsorted_vec->size(); i++) {
        for (int j=0; j < unsorted_vec->size(); j++) {
            if (unsorted_vec->at(i) < unsorted_vec->at(j)) {
                // swap
                auto temp = unsorted_vec->at(i);
                unsorted_vec->at(i) = unsorted_vec->at(j);
                unsorted_vec->at(j) = temp;
            }
        }
    }


    return unsorted_vec;
}
