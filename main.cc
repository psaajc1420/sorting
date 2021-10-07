#include "compare_sorts.h"

using namespace std;

void PopulateArrayAscending(vector<int> &, size_t size);
void PopulateArrayDescending(vector<int> &, size_t size);
void PopulateArrayRandom(vector<int> &, size_t size);
void Run();

int main() {

  Run();

  return 0;
}

void Run() {
  const size_t kNumSortingAlgorithms = 1;

  BubbleSort<int> bubble_sort;
  Sorter<int> *sorters[kNumSortingAlgorithms] = {&bubble_sort};

  vector<size_t> values = {100, 1000, 10000, 100000};
  map<string, void (*)(vector<int> &, size_t)> vector_type_map = {
      {"asc", &PopulateArrayAscending},
      {"desc", &PopulateArrayDescending},
      {"rand", &PopulateArrayRandom}
  };
  CompareSorts compare_sorts(vector_type_map, values);
  for (auto sorter: sorters) {
    compare_sorts.Compare(sorter);
  }
}

void PopulateArrayAscending(vector<int> &data, size_t size) {
  for (int i = 0; i < size; i++) data[i] = i;
}

void PopulateArrayDescending(vector<int> &data, size_t size) {
  for (int i = size; i > 0; i--) data[size - i] = i;
}

void PopulateArrayRandom(vector<int> &data, size_t size) {
  srand(time(nullptr));
  for (int i = 0; i < size; i++) data[i] = rand() % size;
}

