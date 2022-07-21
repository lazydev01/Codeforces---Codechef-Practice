#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        string pattern;
        cin >> pattern;
        int n;
        cin >> n;
        int patternCount = 0;
        for(int i=0; i<pattern.size(); i++){
            if(pattern[i]=='T'){
                patternCount+=2;
            }
            else{
                patternCount++;
            }
        }
        int temp = 0;
        int ans=0;
        while(temp<=n*12){
            temp+=patternCount;
            if(((12*n) - temp)>0){
                ans+= ((12*n) - temp);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
