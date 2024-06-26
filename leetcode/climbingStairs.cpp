// 70. Climbing Stairs
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<int>ways(n+1,0);
        ways[0] = 1;
        for(int i = 1 ; i <= n ; i++){
            ways[i] = ways[i-1];
            if(i > 1) ways[i] += ways[i - 2];
        }
        return ways[n];
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    cout << s.climbStairs(n) << endl;
    return 0;
}