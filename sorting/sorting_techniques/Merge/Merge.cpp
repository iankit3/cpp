/**
 * @copyright : Ankit
 * 
*/

#include "Merge.h"
using std::cout , std::endl , std::vector, std::floor;

// #define NULL __null : in c++
#define __null 0

vector<int> merge(const vector<int>& vec1, const vector<int>& vec2) {
    vector<int> vec{};
    unsigned int i = 0, j = 0;
    while (i < vec1.size() && j < vec2.size()) {
        if (vec1.at(i) < vec2.at(j)) {
            vec.push_back(vec1.at(i));
            i++;
        } else {
            vec.push_back(vec2.at(j));
            j++;
        }
    }

    if (i < vec1.size()) {
        while (i < vec1.size()) {
            vec.push_back(vec1.at(i));
            i++;
        }
    }

    if (j < vec2.size()) {
        while (j < vec2.size()) {
            vec.push_back(vec2.at(j));
            j++;
        }
    }

    return vec;
}


vector<int> merge_sort(vector<int> unsorted_vec) {
    if (unsorted_vec.size() < 2) {
        return unsorted_vec;
    }
    int mid = floor(unsorted_vec.size() / 2);

    vector<int> vec1(unsorted_vec.begin(), unsorted_vec.begin() + mid);
    vector<int> vec2(unsorted_vec.begin()+mid, unsorted_vec.end());

    return merge(merge_sort(vec1), merge_sort(vec2));
}
