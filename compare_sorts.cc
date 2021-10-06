//
// Created by jacob on 10/6/21.
//

#include "compare_sorts.h"

void CompareSorts::Run() {
  const size_t kNumSortingAlgorithms = 1;
  const size_t kNumValues = 5;

  BubbleSort<int> bubble_sort;
  vector<size_t> values = {100, 1000, 10000, 100000, 100000};

  Sorter<int> *sorters[kNumSortingAlgorithms] = {&bubble_sort};

  for (auto sorter: sorters) {
    ProfileSort<int> profile_sort(sorter);

    profile_sort.CalculateTimes(, values);
  }

}

void CompareSorts::PopulateArrayAscending(int *data, size_t size) {
  for (int i = 0; i < size; i++) {
    data[i] = i;
  }
}

void CompareSorts::PopulateArrayDescending(int *data, size_t size) {
  for (int i = size; i > 0; i--) {
    data[size - i] = i;
  }
}

void CompareSorts::PopulateArrayRandom(int *data, size_t size) {
  srand(time(nullptr));
  for (int i = 0; i < size; i++) {
    data[i] = rand() % size;
  }
}

void CompareSorts::Print(int *data, size_t size) {
  for (int i = 0; i < size; i++) {
    cout << data[i] << " ";
  }
  cout << endl;
}


