#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int test_case;
    cin >> test_case;
    while(test_case--){
        int l, r;
        cin >> l >> r;
        if((2*l)>=l && (2*l)<=r){
            cout << l << " " << 2*l << endl; 
        }
        else{
            cout << -1 << " " << -1 << endl;
        }
    }
    return 0;
}
