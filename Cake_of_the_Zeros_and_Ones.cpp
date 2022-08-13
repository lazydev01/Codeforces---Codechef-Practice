#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin >> n;
    string s;
    cin >> s;
    int zeros = 0;
    int ones = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            zeros++;
        }
        else{
            ones++;
        }
    }
    cout << abs(zeros-ones) << endl;
    return 0;
}