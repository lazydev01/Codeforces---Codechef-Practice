#include <bits/stdc++.h>
using namespace std;
int main()
{
#define int long long int
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n, p, k;
        cin >> n >> p >> k;
        int n_mod_p = (n - 1) % p;
        int n_div_k = (n - 1) / k;
        int n_mod_k = (n - 1) % k;
        int p_mod_k = p % k;
        int p_div_k = p / k;
        int ans;
        if (p_mod_k <= n_mod_k)
        {
            int temp = ((n_div_k + 1) * p_mod_k);
            ans = temp + p_div_k + 1;
        }
        else
        {
            int temp = ((n_div_k + 1) * (n_mod_k + 1));
            ans = temp + ((p_mod_k - n_mod_k - 1) * n_div_k);
            ans+=((p/k) + 1);
        }
        cout << ans << endl;
    }

    return 0;
}

/*
n = 10
p = 6
k = 5
0 5 1 6 2 7 3 8 4 9

n = 10
p = 8
k = 6
0 6 1 7 2 8 3 9 4 5

n = 10
p = 4
k = 6
0 6 1 7 2 8 3 9 4 5

1
5 1 2
0 2 4 1 3
n = 5
p = 1
k = 2

*/
