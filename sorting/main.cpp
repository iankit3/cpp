/**
 * @copyright : Ankit
 * 
*/

#include <iostream>
#include <vector>
#include "sorting_techniques/Bubble/Bubble.h"
#include "sorting_techniques/Selection/Selection.h"
#include "sorting_techniques/Insertion/Insertion.h"
#include "sorting_techniques/Merge/Merge.h"
#include "sorting_techniques/Quick/Quick.h"

using std::cout, std::vector, std::endl;

int main() {
  // vector<int> vec = {10, 20, 3, 2000, 11, 86, 36, 42};
  vector<int> vec = {10, 20, 88, 45, 3, 12};
  print_vec(vec);

  // vector<int>* vec_ptr = bubble_sort(&vec);
  // vector<int>* vec_ptr = selection_sort(&vec);
  // vector<int>* vec_ptr = insertion_sort(&vec);
  // vector<int> vec_ptr = merge_sort(vec);
  quick_sort(vec, 0, vec.size()-1);

  // print_vec(vec_ptr);
  print_vec(vec);
  return 0;
}
