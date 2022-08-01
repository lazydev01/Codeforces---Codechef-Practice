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
        map<int, int> m1;
        for(int i=0; i<n; i++){
            m1[arr[i]]++;
        }
        cout << m1.size() << endl;
    }
    return 0;
}
