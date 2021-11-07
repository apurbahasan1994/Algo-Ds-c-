#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int binary_search(vector<int> &nums, int target, int s, int e)
    {
        if (s <= e)
        {
            int mid = (s + e) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[mid] < target)
            {
                return this->binary_search(nums, target, mid + 1, e);
            }
            return this->binary_search(nums, target, s, mid - 1);
        }
        return s;
    }
    int searchInsert(vector<int> &nums, int target)
    {
        int s = 0;
        int e = nums.size() - 1;
        int ans = this->binary_search(nums, target, s, e);
        return ans;
    }
};
