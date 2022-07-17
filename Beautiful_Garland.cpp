#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int red = 0;
        int green = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='R'){
                red++;
            }
            else{
                green++;
            }
        }
        int count = 0;
        if(red!=green){
            cout << "no" << endl;
        }
        else{
            for(int i = 0; i<s.size()-1; i++){
                if(s[i]=='R' && s[i+1]=='R'){
                    count++;
                }
                else if(s[i]=='G' && s[i+1]=='G'){
                    count++;
                }
            }
            if(s[0] == s[s.size()-1]){
                count++;
            }
            if(count == 2 || count == 0 ){
                cout << "yes" << endl;
            }
            else{
                cout << "no" << endl;
            }
        }
    }
return 0;
}
