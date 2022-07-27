#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int test_case;
    cin >> test_case;
    while(test_case--){
        int size;
        cin >> size;
        vector<int> arr(size), second, sorted_arr;
        for(int i=0; i<size; i++){
            cin >> arr[i];
        }
        sorted_arr = arr;
        sort(sorted_arr.begin(), sorted_arr.end());
        int j=0; 
        for(int i=0; i<size; i++){
            if(arr[i]==sorted_arr[j]){
                j++;
            }
            else{
                second.push_back(arr[i]);
            }
        }
        if(is_sorted(second.begin(), second.end())){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
