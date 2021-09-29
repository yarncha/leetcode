#include <iostream>
#include <string>
using namespace std;

/*

*/

class Solution {
public:
    string freqAlphabets(string s) {
        // 한글자씩 읽으면서 아스키코드 참고해서 바꿔주기
        string result = "";

        for (int i = 0; i < s.size(); i++)
        {
            int integer_value = s[i] - 47;
            if (integer_value<10) {
                result += to_string(integer_value);
            }
            else {
                result += to_string(integer_value);
                result += "#";
            }
        }

        return result;
    }
};

int main(void) {
	Solution sol = Solution();

	sol.freqAlphabets("");

	return 0;
}