//
// Created by jacob on 10/6/21.
//

#include "compare_sorts.h"

void CompareSorts::Compare(Sorter<int> *sorter) {

  Timer timer;
  for (auto size: n_values_) {
    vector<int> data(size);

    for (auto &it: vector_type_map_) {

      PopulateArrayFuncPtr populate = it.second;
      populate(data, size);
      int dataArray[size];

      std::copy(data.begin(), data.begin(), dataArray);
      timer.Start();
      sorter->Sort(dataArray, size);
      timer.Stop();

      PopulateVectorTypeMap(data, timer.ElapsedSeconds(), it.first);
    }
  }
  PrintVectorTypeMap();

}

void CompareSorts::PopulateVectorTypeMap(
    const vector<int> &data,
    double time,
    const string &type) {

  DataInfo info;
  info.data = data;
  auto it = vector_data_info_map_.find(type);
  if (it == vector_data_info_map_.end()) {
    vector_data_info_map_[type] = vector<DataInfo>();
    info.times = vector<double>();
  }
  info.times.push_back(time);
  vector_data_info_map_[type].push_back(info);

}

void CompareSorts::PrintVectorTypeMap() {
  for (auto &it: vector_data_info_map_) {
    cout << it.first;
    for (const auto &data_info: it.second) {
      for (auto n_values: data_info.times) {
        cout << "," << n_values;
      }
    }
    cout << endl;

  }
}




