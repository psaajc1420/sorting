//
// Created by jacob on 10/5/21.
//

#ifndef SORTING__SORTER_H_
#define SORTING__SORTER_H_

template<typename T>
class Sorter {
public:
  virtual void Sort(T *, int) = 0;
};

#endif //SORTING__SORTER_H_
