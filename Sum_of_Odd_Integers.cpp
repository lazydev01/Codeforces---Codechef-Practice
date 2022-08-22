#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n, k;
        cin >> n >> k;
        int sqr = k * k;
        if(n<sqr){
            cout << "NO" << endl;
        }
        else{
            if((n%2==0 && k%2==0) || (n%2==1 && k%2==1)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

/*

241 23

*/