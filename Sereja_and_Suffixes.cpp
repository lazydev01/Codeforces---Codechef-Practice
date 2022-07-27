#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    map<int, int> freq;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    int total_count = freq.size();
    int count = total_count;
    vector <int> arr2(n);
    for(int i=0; i<n; i++){
        freq[arr[i]]--;
        arr2[i] = count;
        if(freq[arr[i]]==0){
            count--;
        }
        
    }
    // for(int i=0; i<arr2.size(); i++){
    //     cout << arr2[i] << endl;
    // }
    for(int i=0; i<m; i++){
        int m1;
        cin >> m1;
        cout << arr2[m1-1] <<endl;
    }
    return 0;
}
