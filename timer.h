//
// Created by jacob on 10/5/21.
//

#ifndef SORTING__TIMER_H_
#define SORTING__TIMER_H_

#include <chrono>
#include <ctime>

using std::chrono::time_point;
using std::chrono::system_clock;
using std::chrono::duration_cast;
using std::chrono::nanoseconds;

class Timer {
public:
  void Start();
  void Stop();
  double ElapsedNanoSeconds();
  double ElapsedSeconds();
private:
  time_point<system_clock> start_time_;
  time_point<system_clock> end_time_;
  bool is_running_;
};

#endif //SORTING__TIMER_H_
