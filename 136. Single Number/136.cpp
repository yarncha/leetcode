#include <stdio.h>
#include <vector>
using namespace std;

// 모든 원소들이 하나를 제외하고는 다 쌍을 이루는 문제
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int res = nums[0];

		for (int i = 1; i < nums.size(); i++)
		{
			res ^= nums[i];
		}
		// 모든 값들을 XOR하면, XOR연산의 특징에 의해 (a^b^b=a)
		// 쌍을 이루는 것을 제외하고 하나만 남게 된다.

		return res;
	}
};

int main(void) {
	Solution sol = Solution();
	vector<int> nums = { 4,2,1,2,1 };

	int a = sol.singleNumber(nums);
	return 0;
}