/**
 * @copyright : Ankit
 * 
*/

#include "Radix.h"
using std::cout , std::endl , std::vector, std::floor;

// #define NULL __null : in c++
#define __null 0

void counting_sort(vector<int>) {
    // for single digit nums OR things mapped to single digit
    // create a hash/map of all the digits [0....9]
    // fill the map with count of occurances of those numbs
    // arr below means, Array of values of all the keys
    // do [1, 4, 6...] [1, 1+4, 4+6..] (accumulate alternate elems)
    // right shift 1     [2,4,6] >> [6,2,4]

    // now create a new vec vec1(vec), loop over vec
    // vec1[ map.get(vec[i]) ] = vec[i]
    // DONE
}

vector<int> radix_sort(vector<int> unsorted_vec) {
    // IMPL
    // keep count-sorting based on least significant
    // digit to most significant digit
    return unsorted_vec;
}
