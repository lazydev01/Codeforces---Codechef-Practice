#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int test_case;
    cin >> test_case; 
    while(test_case--){
        int n, k;
        cin >> n >> k;
        vector <int> arr(n);
        int first = 0;
        int second = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        int kCount = 0;
        bool flag = false;
        for(int i=0; i<n; i++){
            if(flag){
                second+=arr[i];
                break;
            }
            if(kCount==((2*k)-1)){
                flag = true;
            }
            if(i%2==0){
                first+=arr[i];
            }
            else{
                second+=arr[i];
            }
            kCount++;
        }
        cout << max(first, second) << endl;
    }

    return 0;
}