#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int test_case;
    cin >> test_case;
    while(test_case--){
        int a, b, c;
        cin >> a >> b >> c;
        int diff = abs(a-b);
        if(min(a,b)>diff || c>(2*diff)){
            cout << -1 << endl;
        }
        else{
            if(c<=diff){
                cout << (c + diff) << endl;
            }
            else{
                cout << (c - diff) << endl;
            }
        }
    }
    return 0;
}