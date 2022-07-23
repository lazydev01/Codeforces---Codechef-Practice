#include<bits/stdc++.h>
using namespace std;
int main(){
int test_case;
cin >> test_case;
while(test_case--){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    multiset<int> available;
    available.insert(1);
    for(int i=0; i<n; i++){
        auto it = available.upper_bound(arr[i]);
        if(it==available.begin()){
            available.insert(2);
        }
        else{
            int new_index = *available.begin() + 1;
            available.erase(available.begin());
            available.insert(new_index);
        }
    }
    cout << (int)available.size() << endl;
}
return 0;
}
