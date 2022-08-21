#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n;
        cin >> n;
        int ans = 0;
        for(int i=0; i<n/2; i++){
            ans += (int)(8*(i+1)*(i+1));
        }
        cout << ans << endl;
    }
    return 0;
}
/*

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

1 1 1
1 1 1
1 1 1

1 1 1 1 1
1 1 1 1 1
1 1 1 1 1

1 1 1 1 1
1 1 1 1 1





*/