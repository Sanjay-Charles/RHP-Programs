#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int n = s1.length();
    int m = s2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int maxL = 0;
    int endI = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxL) {
                    maxL = dp[i][j];
                    endI = i;
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }
    if (maxL == 0) {
        cout << "No common substring found." << endl;
    } else {
        string longestSubstring = s1.substr(endI - maxL, maxL);
        cout << "Length: " << maxL << endl;
        cout << "Longest Common Substring: " << longestSubstring << endl;
    }
    return 0;
}
