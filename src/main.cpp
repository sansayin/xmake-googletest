#include "Solution.h"
#include <chrono>
#include <iostream>
#include <vector>

using namespace std::chrono;
using namespace std;

#define LOG(s, r) std::cout << s << ": " << r << std::endl;

int find(vector<int> &nums, int target) {
  int left = 0, right = nums.size();
  if (target < nums[left] || target > nums[right]) {
    return -1;
  }
  while (left < right) {
    int mid = (left + right) >> 1;
    if (target <= nums[mid])
      right = mid;
    else
      left = mid + 1;
  }
  return left;
}

void timeit(vector<int> &nums, int &target, int (*fnptr)(vector<int> &, int),
            int times) {
  auto start = high_resolution_clock::now();
  auto result = -1;
  for (int i = 0; i < times; i++)
    result = fnptr(nums, target);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  cout << "Result: " << result << "\t" << times
       << " times\tDuration: " << duration.count() << "ms" << endl;
}

int main(int argc, char **argv) {
  Solution solution;
  vector<int> nums = {1, 2, 2, 3, 4, 4, 4, 5};
  int target = 1;
  vector<int> result = solution.searchRange(nums, target);
  cout << result[0] << result[1] << endl;
  timeit(nums, target, find, 10000);
  LOG("Bits",solution.hammingWeight(3));
  return 0;
}
