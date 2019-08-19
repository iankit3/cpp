/**
 * @copyright : Ankit
 * 
*/

#include "Insertion.h"
using std::cout , std::endl , std::vector;

// #define NULL __null : in c++
#define __null 0

vector<int>* insertion_sort(vector<int>* unsorted_vec) {
    vector<int> vec(0);
    for (int i=0; i < unsorted_vec->size(); i++) {
        if (i == 0) {
            vec.push_back(unsorted_vec->at(i));
        } else {
            int j = 0;
            while (unsorted_vec->at(i) > vec[j] && j < vec.size()) {
                j++;
            }
            // vec.push_back(unsorted_vec->at(i));
            vec.insert(vec.begin()+j, unsorted_vec->at(i));
        }
    }

    *unsorted_vec = vec;

    return unsorted_vec;
}
