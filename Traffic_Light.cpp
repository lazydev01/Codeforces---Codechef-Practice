#include<bits/stdc++.h>
using namespace std;
int main(){
#define int long long int
int test_case;
cin >> test_case;
while(test_case--){
    int n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    vector<int> arr;
    vector<int> green;
    string temp = "";
    if(c=='g'){
        cout << 0 << endl;
    }
    else{
        for(int i=0; i<n; i++){
            if(s[i]==c){
                arr.push_back(i);
            }
        }
        temp+=s;
        temp+=s;
        for(int i=0; i<2*n; i++){
            if(temp[i]=='g'){
                green.push_back(i);
            }
        }
        vector<int>::iterator lower;
        vector<int> ans;
        for(int i=0; i<arr.size(); i++){ 
            lower = lower_bound(green.begin(), green.end(), arr[i]);
            ans.push_back(*lower - arr[i]);
            // cout << lower - green.begin() + 1 << endl;
            // cout << *lower << endl;
        }
        cout << *max_element(ans.begin(), ans.end()) << endl;
    }
}
return 0;
}
