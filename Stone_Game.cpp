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
        int maximum = *max_element(arr.begin(), arr.end());
        int left = 0;
        int left1;
        int left2;
        int right = 0;
        int right1;
        int right2;
        int min_left = 0;
        int min_right = 0;
        for(int i=0; i<n; i++){
            if(arr[i]==minimum){
                left1 = i+1;
            }
            else if(arr[i]==maximum){
                left2 = i+1;
            }
        }
        left = max(left1, left2);
        right1 = n - left1 + 1;
        right2 = n - left2 + 1;
        right = max(right1, right2);
        min_left = left1 + right2;
        min_right = left2 + right1;
        int ans1 = min(left, right);
        int ans2 = min(min_left, min_right);
        int ans = min(ans1, ans2);
        cout << ans << endl;


    }
    return 0;
}
