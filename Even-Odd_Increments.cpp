#include<bits/stdc++.h>
using namespace std;
int main(){
#define int long long int
int test_case;
cin >> test_case;
while(test_case--){
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    int sum = 0;
    int even = 0;
    int odd = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum+=arr[i];
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    vector<pair<int, int>> vp;
    for(int i=0; i<q; i++){
        int a, b;
        cin >> a >> b;
        pair<int, int> p;
        p = make_pair(a, b);
        vp.push_back(p);
    } 
    for(int i=0; i<q; i++){
        if(vp[i].second%2==0){
            if(vp[i].first%2==0){
                sum+=even*vp[i].second;
            }
            else{
                sum+=odd*vp[i].second;
            }
        }
        else{
            if(vp[i].first%2==0){
                sum+=even*vp[i].second;
                odd+=even;
                even=0;
            }
            else{ 
                sum+=odd*vp[i].second;
                even+=odd;
                odd = 0;
            }
        }
    cout << sum << endl;
    }
}
return 0;
}
