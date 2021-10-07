//
// Created by jacob on 10/6/21.
//

#ifndef SORTING_CMAKE_BUILD_DEBUG_COMPARE_SORTS_H_
#define SORTING_CMAKE_BUILD_DEBUG_COMPARE_SORTS_H_

#include <algorithm>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <map>
#include <vector>

#include "bubble_sort.h"
#include "sorter.h"
#include "timer.h"

using std::cout;
using std::endl;
using std::size_t;
using std::string;
using std::map;
using std::vector;

class CompareSorts {

  struct DataInfo {
    vector<int> data;
    vector<double> times;
  };

  using PopulateArrayFuncPtr = void (*)(vector<int> &, size_t);
  using VectorDataInfoMap = map<string, vector<DataInfo>>;
  using CompareSortsMap = map<string, VectorDataInfoMap>;
  using VectorTypeMap = map<string, PopulateArrayFuncPtr>;

 public:
  explicit CompareSorts() = default;
  explicit CompareSorts(VectorTypeMap vector_type_map,
                        const vector<size_t> &n_values)
      : vector_type_map_{vector_type_map}, n_values_{n_values} {}

  void Compare();
  void Compare(Sorter<int> *);
  void PopulateVectorTypeMap(const vector<int> &, double, const string &);
  void PrintVectorTypeMap();

 private:
  VectorDataInfoMap vector_data_info_map_;
  VectorTypeMap vector_type_map_;
  CompareSortsMap compare_sorts_map_;
  vector<size_t> n_values_;

};

#endif //SORTING_CMAKE_BUILD_DEBUG_COMPARE_SORTS_H_
