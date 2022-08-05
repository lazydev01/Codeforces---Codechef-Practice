#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int test_case;
    cin >> test_case;
    while(test_case--){
        string s;
        cin >> s;
        transform(s.begin(), s.end(),s.begin(), ::toupper);
        if(s=="YES"){
            cout << s << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}