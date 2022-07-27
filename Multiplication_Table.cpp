#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long int
    int n, x;
    cin >> n >> x;
    int count = 0;
    for(int i=1; i<=n; i++){
        if(x%i==0 && i<=n && (x/i)<=n){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
