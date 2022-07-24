#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    string str;
    cin >> str;
    vector<char> v1 = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    vector<int> v2;
    for(int i=0; i<str.size(); i++){
        for(int j=0; j<v1.size(); j++){
            if(str[i]==v1[j]){
                v2.push_back(j);
                break;
            }
        }
    }
    string ans = "";
    if(ch=='R'){
        for(int i=0; i<v2.size(); i++){
            ans+=v1[v2[i]-1];
        }
    }
    else{
        for(int i=0; i<v2.size(); i++){
            ans+=v1[v2[i]+1];
        }
    }
    cout << ans << endl;
    return 0;
}
