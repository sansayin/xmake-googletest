#ifndef SOLUTION_H
#define SOLUTION_H
#include <vector>
class Solution {
public:
  std::vector<int> searchRange(std::vector<int> &nums, int target);
  int searchInsert(std::vector<int> &nums, int target);
  int hammingWeight(int n);
};

#endif // !SOLUTION_H
