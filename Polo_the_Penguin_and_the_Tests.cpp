#include <bits/stdc++.h>
using namespace std;

struct Question
{
    int c, p, t;
};

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {  
        int n, w;
        cin >> n >> w;
        vector<Question> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i].c >> v1[i].p >> v1[i].t;
        }
        vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= w; j++)
            {
                int time = v1[i - 1].t;
                int totalScore = v1[i - 1].c * v1[i - 1].p;
                if (j >= time)
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - time] + totalScore);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        cout << dp[n][w] << endl;
    }
    return 0;
}
