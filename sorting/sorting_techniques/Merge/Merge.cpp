/**
 * @copyright : Ankit
 * 
*/

#include "Merge.h"
#include "../Bubble/Bubble.h"
using std::cout , std::endl , std::vector;

// #define NULL __null : in c++
#define __null 0

vector<int>* merge(const vector<int>& vec1, const vector<int>& vec2) {
    // Size of the smallest vec
    int max_size = vec1.size() > vec2.size() ? vec1.size() : vec2.size();
    vector<int> vec{};
    //INCORRECT
    for ( int i = 0, j = 0; i < max_size && j < max_size ; ) {
        if (vec1.at(i) <= vec2.at(j)) {
            vec.push_back(vec1.at(i));
            i++;
        } else {
            vec.push_back(vec2.at(j));
            j++;
        }
        print_vec(vec);
    }

}

vector<int>* merge_sort(vector<int>* unsorted_vec) {
    // Find LEFT and RIGHT their length becomes < 2
    // Merge LEFT and RIGHT
    auto vec1 = {1, 3, 5};
    auto vec2 = {2};

    merge(vec1, vec2);

    return unsorted_vec;
}
