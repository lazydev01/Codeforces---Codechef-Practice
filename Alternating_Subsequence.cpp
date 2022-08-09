#include<bits/stdc++.h>
using namespace std;
int main(){
#define int long long int
int test_case;
cin >> test_case;
while(test_case--){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int i=1;
    int ans = 0;
    int temp = arr[0];
    bool pos = false;
    if(arr[0]>=0){
        pos = true;
    }
    while(i<n){
        if(arr[i]>=0){
            if(pos){
                temp = max(temp, arr[i]);
            }
            else{
                ans += temp;
                temp = INT_MIN;
                pos = true;
                temp = max(temp, arr[i]);
            }
        }
        else{
            if(pos){
                ans+=temp;
                temp = INT_MIN;
                pos = false;
                temp = max(temp, arr[i]);
            }
            else{
                temp = max(temp, arr[i]);
            }
        }
        // cout << i << endl;
        // cout << temp << endl;
        // if(pos){
        //     cout << "true" << endl;
        // }
        // else{
        //     cout << "false" << endl;
        // }
        i++;
        // cout << ans << endl;
    }
    ans+=temp;
    cout << ans << endl;
}
return 0;
}

/*

5
1 2 3 -1 -2

*/