#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n, w, wr;
        cin >> n >> w >> wr;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int remaining = w-wr;
        map<int, int> freq;
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        int available = 0;
        for(auto i:freq){
            available += (((i.second/2) * (i.first))*2);
        }
        cout << available << endl;
        if(available >= remaining){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
return 0;
}