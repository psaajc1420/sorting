//
// Created by jacob on 10/5/21.
//

#ifndef SORTING__BUBBLE_SORT_H_
#define SORTING__BUBBLE_SORT_H_

#include "sorter.h"

using std::swap;

template<typename T>
class BubbleSort : public Sorter<T> {
public :
  explicit BubbleSort() {}
  virtual void Sort(T *, int);

};

template<typename T>
void BubbleSort<T>::Sort(T *data, int n) {
  for (int i = 0; i < n-1; i++)
    for (int j = 0; j < n-i-1; j++)
      if (data[j] > data[j+1])
        swap(data[j], data[j+1]);
}

#endif //SORTING__BUBBLE_SORT_H_
