#include <bits/stdc++.h>
using namespace std;
int main()
{
#define int long long int
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int r, g, b, m;
        cin >> r >> g >> b >> m;
        vector<int> red(r);
        vector<int> green(g);
        vector<int> blue(b);
        for (int i = 0; i < r; i++)
        {
            cin >> red[i];
        }
        for (int i = 0; i < g; i++)
        {
            cin >> green[i];
        }
        for (int i = 0; i < b; i++)
        {
            cin >> blue[i];
        }
        int count = 0;
        vector<int> max1;
        int r_max = *max_element(red.begin(), red.end());
        int g_max = *max_element(green.begin(), green.end());
        int b_max = *max_element(blue.begin(), blue.end());
        max1.push_back(r_max);
        max1.push_back(g_max);
        max1.push_back(b_max);
        while (count != m)
        {
            sort(max1.begin(), max1.end()); // nlogn
            if (max1[2] == 0)
            {
                break;
            }
            int n1 = log2(max1[2]);
            max1[2] = max1[2]/2;
            count++;
            
        }
        int ans = *max_element(max1.begin(), max1.end());
        cout << ans << endl;
    }
    return 0;
}

/*

43 78 127
0 0 0

5 6  6

1
4 7 3 2
2 1 2 2 - r
1 2 2 2

7 2 4 7 2 6 5
2 2 4 5 6 7 7 - g

10 5 1
1 5 10 - b

2 7 10
1 2 3

*/
