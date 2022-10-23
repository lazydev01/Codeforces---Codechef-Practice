#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int question = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='Q'){
            question++;
        }
        else if(s[i]=='A'){
            question--;
            if(question<0){
                question = 0;
            }
        }
    }
    if(question==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
return 0;
}
