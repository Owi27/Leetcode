#pragma once
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int minMoves2(vector<int>& nums)
{
	if (nums.size() == 0) return 0;

	sort(nums.begin(), nums.end());

	int accumulator = nums[nums.size() / 2], min = 0;

	for (auto& n : nums)
	{
		min += abs(accumulator - n);
	}

	return min;
}