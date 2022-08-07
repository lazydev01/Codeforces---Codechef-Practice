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
        int minimum = *min_element(arr.begin(), arr.end());
        int ans = 0;
        for(int i=0; i<n; i++){
            ans += (arr[i]-minimum);
        }
        cout << ans << endl;
    }
    return 0;
}