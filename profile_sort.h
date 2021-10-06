//
// Created by jacob on 10/6/21.
//

#ifndef SORTING__PROFILE_SORT_H_
#define SORTING__PROFILE_SORT_H_

#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <vector>

#include "sorter.h"
#include "timer.h"

using std::cout;
using std::endl;
using std::size_t;
using std::setprecision;
using std::fixed;
using std::vector;
using std::map;

template<typename T>
class ProfileSort {
  using VectorMap = map<size_t, vector<T *>>;

 private:
  Sorter<T> *sorter_;
 public:
  explicit ProfileSort(Sorter<T> *sorter) : sorter_{sorter} {}
  void CalculateTimes(VectorMap &);
};

template<typename T>
void ProfileSort<T>::CalculateTimes(VectorMap &vector_map) {
  Timer timer;

  for (auto it = vector_map.begin(); it != vector_map.end(); ++it) {
    for (auto vec: it->second) {
      timer.Start();

      sorter_->Sort(it->second, size);
      timer.Stop();

    }
  }

}

#endif //SORTING__PROFILE_SORT_H_
