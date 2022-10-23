#include <bits/stdc++.h>
using namespace std;
int main()
{
#define int long long int
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int plus_one = 0;
        int minus_one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == -1)
                minus_one++;
            else
                plus_one++;
        }
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<pair<int, int>> vp;
            if (plus_one == minus_one)
            {
                for (int i = 1; i <= n; i++)
                {
                    pair<int, int> p;
                    p = make_pair(i, i);
                    vp.push_back(p);
                }
            }
            else
            {
                int diff = (n - 2*(min(plus_one, minus_one)))/2;
                int count = 0; 
                int maximum = max(plus_one, minus_one);
                int max_frequency;
                if (maximum == plus_one)
                    max_frequency = 1;
                else
                    max_frequency = -1;
                int temp = INT_MIN;
                vector<int> index;
                for (int i = 0; i < n - 1; i++)
                {
                    if(count==diff){
                        break;
                    }
                    if (i == temp)
                    {
                        continue;
                    }
                    if (arr[i] == max_frequency && arr[i + 1] == max_frequency)
                    {
                        index.push_back(i+1);
                        temp = i + 1;
                        count++;
                    }
                    else{

                    }
                }
                index.push_back(n+1);
                temp = INT_MIN;
                int index_j = 0;
                for (int i = 1; i <= n; i++)
                {
                    if (i == temp)
                        continue;
                    if (index[index_j]==i)
                    {
                        index_j++;
                        temp = i + 1;
                        pair<int, int> p;
                        p = make_pair(i, i + 1);
                        vp.push_back(p);
                    }
                    else
                    {
                        pair<int, int> p;
                        p = make_pair(i, i);
                        vp.push_back(p);
                    }
                }
            }
            cout << vp.size() << endl;
            for(int i=0; i<vp.size(); i++){
                cout << vp[i].first << " " << vp[i].second << endl;
            }
        }
    }
    return 0;
}
