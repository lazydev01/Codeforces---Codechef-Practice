#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count = 1;
    int ans = 1;
    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1]){
            count++;
        }
        else{
            ans = max(ans, count);
            count = 1;
        }
    }
    ans = max(ans, count);
    cout << ans << endl;
    return 0;
}
