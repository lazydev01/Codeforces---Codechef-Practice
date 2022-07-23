#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int test_case;
    cin >> test_case;
    while(test_case--){
        int x, y;
        cin >> x >> y;
        int a, b;
        cin >> a >> b;
        int count_a, count_b;
        int single;
        if(x>=0 && y>=0){
            int minimum = min(x, y);
            int maximum = max(x, y);
            count_b = minimum;
            count_a = maximum - minimum;
            single = maximum + minimum;
        }
        else if(x<0 && y<0){
            int minimum = min(x, y);
            int maximum = max(x, y);
            count_b = maximum;
            count_a = maximum - minimum;
            single = -1 * (maximum + minimum);
        }
        else{
            int minimum = min(x, y);
            int maximum = max(x, y);
            count_b = 0;
            count_a = maximum - minimum;
            single = INT_MAX;
        }
        int optimum = (a*count_a) + (b*count_b);
        int single_ans = single * a;
        cout << min(optimum, single_ans) << endl;
    }
    return 0;
}
