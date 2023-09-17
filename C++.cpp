#include <bits/stdc++.h>
#include <iostream>
#include <time.h>

using namespace std;

void fun() {
  int array[] = {1, 9, 7, 4, 8};
  cout << "The elements are: { ";
  int cbm = 0;
  int count = sizeof(array) / sizeof(array[0]);
  for (auto zebra : array) {
    if (cbm != count - 1) {
      cout << array[cbm] << ", ";
      cbm++;
    }
  }
  cout << array[count - 1] << " "
       << "}" << endl;

  int cnt = (count - 1) / 2;
  cout << array[cnt];
}
int main() {
  struct timespec start, end;

  // start timer.
  // clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &start);
  // clock_gettime(CLOCK_REALTIME, &start);
  clock_gettime(CLOCK_MONOTONIC, &start);

  // unsync the I/O of C and C++.
  ios_base::sync_with_stdio(false);

  fun();

  // stop timer.
  // clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);
  // clock_gettime(CLOCK_REALTIME, &end);
  clock_gettime(CLOCK_MONOTONIC, &end);

  // Calculating total time taken by the program.
  double time_taken;
  time_taken = (end.tv_sec - start.tv_sec) * 1e9;
  time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9;

  cout << "Time taken by program is : " << fixed << time_taken
       << setprecision(9);
  cout << " sec" << endl;
  return 0;
}
