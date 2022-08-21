#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int test_case;
    cin >> test_case;
    while(test_case--){
        int a, b;
        cin >> a >> b;
        if(a==0){
            cout << 1 << endl;
        }
        else{
            cout << ((a+(2*b))+1) << endl;
        }
    }
    return 0;
}
/*

1 2 2 2 2
1 1 1 1 2
*/