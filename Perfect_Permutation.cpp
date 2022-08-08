#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n; 
    cin >> n;
    if(n%2!=0){
        cout << -1 << endl;
    }
    else{
        vector <int> ans;
        for(int i=1; i<((n/2)+1); i++){
            ans.push_back(2*i);
            ans.push_back((2*i)-1);
        }
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
    }
    return 0;
}