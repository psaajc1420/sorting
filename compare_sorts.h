//
// Created by jacob on 10/6/21.
//

#ifndef SORTING_CMAKE_BUILD_DEBUG_COMPARE_SORTS_H_
#define SORTING_CMAKE_BUILD_DEBUG_COMPARE_SORTS_H_
#include <ctime>
#include <iostream>
#include <iomanip>
#include <vector>

#include "bubble_sort.h"
#include "sorter.h"
#include "timer.h"
#include "profile_sort.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

class CompareSorts {
 public:
  void Print(int[], size_t);
  void Run();
  void PopulateArrayAscending(int *data, size_t size);
  void PopulateArrayDescending(int *data, size_t size);
  void PopulateArrayRandom(int *data, size_t size);
};

#endif //SORTING_CMAKE_BUILD_DEBUG_COMPARE_SORTS_H_
