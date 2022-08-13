#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n;
        cin >> n;
        int max_length = 0;
        string ans = "";
        for(int i=0; i<n; i++){
            string s;
            cin >> s;
            if(s[i]=='0'){
                ans+='1';
            }
            else{
                ans += '0';
            }
        }
        cout << ans << endl;
    }
    return 0;
}