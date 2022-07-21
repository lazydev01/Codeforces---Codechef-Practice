#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin >> s;
int m;
cin >> m;
int a[s.size()+1];
for(int i=1; i<s.size(); i++){
    a[i] = a[i-1] + (s[i]==s[i-1]);
}
while(m--){
    int l, r;
    cin >> l >> r;
    cout << a[r-1] - a[l-1] << endl;
}
return 0;
}
