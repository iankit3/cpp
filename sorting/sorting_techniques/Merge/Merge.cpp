/**
 * @copyright : Ankit
 * 
*/

#include "Merge.h"
using std::cout , std::endl , std::vector, std::floor;

// #define NULL __null : in c++
#define __null 0

vector<int> vec{};
vector<int>* merge(const vector<int>& vec1, const vector<int>& vec2) {
    vec.clear();
    int i = 0, j = 0;
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
    // cout << "***************Merged vector******************" << endl;
    print_vec(vec);
    // cout << "---------------MERGE PRINT END-----------------" << endl;

    return &vec;
}


auto vec1 = {10, 20};
auto vec2 = {3};


vector<int>* merge_sort(vector<int>* unsorted_vec) {
    // print_vec(*unsorted_vec);
    if (unsorted_vec->size() == 1) {
        return unsorted_vec;
    }

    // Find LEFT and RIGHT their length becomes 1
    // Merge LEFT and RIGHT
    int mid = floor(unsorted_vec->size() / 2);

    vector<int> vec1(unsorted_vec->begin(), unsorted_vec->begin() + mid);
    vector<int> vec2(unsorted_vec->begin()+mid, unsorted_vec->end());

    return merge(*merge_sort(&vec1), *merge_sort(&vec2));

/*
    auto v = merge(vec1, vec2);
    print_vec(*v);
*/
    // return unsorted_vec;
}
