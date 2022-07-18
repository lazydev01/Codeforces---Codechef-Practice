#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n, m;
    cin >> n >> m;
    if(__gcd(n, m)==1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO " << (n/__gcd(n, m)) << endl;
    }
}
return 0;
}
