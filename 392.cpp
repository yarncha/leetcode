#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	bool isSubsequence(string s, string t) {
		// 그냥 한 글자식 읽으면서 s가남은채로 끝나던가 하면 오류내면되는거아님?
		int current_s_char = 0;
		for (int i = 0; i < t.size(); i++) {
			if (s.at(current_s_char) == t.at(i)) {
				current_s_char++;
				if (current_s_char == s.size()) {
					return true;
				}
			}
		}

		if (current_s_char == s.size()) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main(void) {
	Solution sol = Solution();
	string s = "abc";
	string t = "ahbgdc";
	sol.isSubsequence(s, t);

	return 0;
}