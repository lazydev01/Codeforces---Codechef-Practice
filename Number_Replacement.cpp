#include<bits/stdc++.h>
using namespace std;
int main(){
#define int long long int
int test_case;
cin >> test_case;
while(test_case--){
int n;
cin >> n;
vector<int>arr(n);
for(int i=0; i<n; i++){
    cin >> arr[i];
}
string s;
cin >> s;
map<int, char> m1;
for(int i=0; i<n; i++){
    m1[arr[i]] = s[i];
}
vector<char> ans;
for(int i=0; i<n; i++){
    ans.push_back(m1[arr[i]]);
}
string ans_string = "";
for(int i=0; i<n; i++){
    ans_string+=ans[i];
}
if(ans_string == s){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}
}
return 0;
}
