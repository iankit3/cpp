/**
 * @copyright : Ankit
 * 
*/

#include "Merge.h"
using std::cout , std::endl , std::vector, std::round;

// #define NULL __null : in c++
#define __null 0

vector<int>* merge(const vector<int>& vec1, const vector<int>& vec2) {
    auto min_vec = vec1.size() < vec2.size() ? vec1 : vec2;
    auto max_vec = vec1.size() < vec2.size() ? vec2 : vec1;

    vector<int> vec{};

    int i = 0, j = 0;
    print_vec(vec1);
    print_vec(vec2);
    print_vec(min_vec);

    while (i < min_vec.size()) {
        cout << "i, j = " << i << ", " << j << endl;
        print_vec(min_vec);
        if (min_vec.at(i) < max_vec.at(j)) {
            vec.push_back(min_vec.at(i));
            i++;
        } else {
            vec.push_back(max_vec.at(j));
            j++;
        }
    }

    if (vec.size() < (vec1.size() + vec2.size())) {
        while (j < max_vec.size()) {
            vec.push_back(max_vec.at(j));
            j++;
        }
    }

    return &vec;
}


auto vec1 = {1};
auto vec2 = {2};


vector<int>* merge_sort(vector<int>* unsorted_vec) {
    // print_vec(*unsorted_vec);
    // if (unsorted_vec->size() == 1) {
    //     cout << "SIZE is 1 " << unsorted_vec->at(0) << endl;
    //     return unsorted_vec;
    // }
    // /* else if (unsorted_vec->size() == 2) {
    //     cout << "SIZE is 2 " << unsorted_vec->at(1) << endl;
    //     if (unsorted_vec->at(0) < unsorted_vec->at(1)) {
    //         auto temp = unsorted_vec->at(0);
    //         unsorted_vec->at(0) = unsorted_vec->at(1);
    //         unsorted_vec->at(1) = temp;
    //     }

    //     return unsorted_vec;
    // }*/

    // // Find LEFT and RIGHT their length becomes 1
    // // Merge LEFT and RIGHT
    // int mid = round(unsorted_vec->size() / 2);

    // vector<int> vec1(unsorted_vec->begin(), unsorted_vec->begin() + mid);
    // vector<int> vec2(unsorted_vec->begin()+mid, unsorted_vec->end());
    // // print_vec(vec1);
    // // print_vec(vec2);

    // merge(*merge_sort(&vec1), *merge_sort(&vec2));
    merge(vec1, vec2);
    ///return unsorted_vec;
}
