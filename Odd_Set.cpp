#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        int j;
        int odd = 0;
        int even = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> j;
            if (j % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (odd==even){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
