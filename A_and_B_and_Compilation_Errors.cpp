#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
vector <int> first;
vector <int> second;
vector <int> third;
vector <int> ans;

for(int i=0; i<n; i++){
    int j;
    cin >> j;
    first.push_back(j);
}
for(int i=0; i<n-1; i++){
    int j;
    cin >> j;
    second.push_back(j);
}
for(int i=0; i<n-2; i++){
    int j;
    cin >> j;
    third.push_back(j);
}
sort(first.begin(), first.end());
sort(second.begin(), second.end());
sort(third.begin(), third.end());
for(int i=0; i<second.size(); i++){
    if(first[i]!=second[i]){
        ans.push_back(first[i]);
        break;
    }
}
if(ans.size()==0){
    ans.push_back(first[first.size() - 1]);
}
for(int i=0; i<third.size(); i++){
    if(second[i]!=third[i]){
        ans.push_back(second[i]);
        break;
    }
}
if(ans.size()==1){
    ans.push_back(second[second.size() - 1]);
}
for(int i=0; i<ans.size(); i++){
    cout << ans[i] << endl;
}


return 0;
}
