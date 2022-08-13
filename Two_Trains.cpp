#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n;
        cin >> n;
        vector <int> arr(n-1);
        for(int i=0; i<n-1; i++){
            cin >> arr[i];
        }
        int maximum_element = *max_element(arr.begin(), arr.end());
        int ans = accumulate(arr.begin(), arr.end(), 0) + maximum_element;
        cout << ans << endl;
    }
    return 0;
}
