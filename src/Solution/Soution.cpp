#include "Solution.h"
#include <iostream>


std::vector<int> Solution::searchRange(std::vector<int> &nums, int target) {
  int l = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
  int r = lower_bound(nums.begin(), nums.end(), target + 1) - nums.begin();
  if (l == r)
    return {-1, -1};
  return {l, r - 1};
}

int Solution::searchInsert(std::vector<int> &nums, int target) {
  int left = 0, right = nums.size();
  while (left < right) {
    int mid = (left + right) >> 1;
    if (nums[mid] >= target)
      right = mid;
    else
      left = mid + 1;
  }
  return left;
}

int Solution::hammingWeight(int n) {
  int ans = 0;
  while (n) {
    n &= n - 1;
    std::cout<<n<<std::endl;
    ++ans;
  }
  return ans;
}
