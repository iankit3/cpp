/**
 * @copyright : Ankit
 * 
*/

#include "Selection.h"
using std::cout , std::endl , std::vector;

vector<int>* selection_sort(vector<int>* unsorted_vec) {
    int vec_size = unsorted_vec->size();
    vector<int> vec(0);

    for (int i=0; i < vec_size; i++) {
        int min = unsorted_vec->at(0);
        int indexOfMin = 0;
        for (int j=0; j < unsorted_vec->size(); j++) {
            // Keep finding min/max
            if (unsorted_vec->at(j) < min) {
                min = unsorted_vec->at(j);
                indexOfMin = j;
            }
        }
        vec.push_back(min);
        unsorted_vec->erase(unsorted_vec->begin()+indexOfMin);
    }

    *unsorted_vec = vec;

    return unsorted_vec;
}
