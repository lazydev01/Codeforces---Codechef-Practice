#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n, m;
    cin >> n >> m;
    vector <string> first(m);
    vector <string> second(m);
    vector <string> professor(n);
    for(int i=0; i<m; i++){
        cin >> first[i];
        cin >> second[i];
    }
    for(int i=0; i<n; i++){
        cin >> professor[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(professor[i]==first[j]){
                if(first[j].size()<=second[j].size()){
                    cout << first[j] << " ";
                }
                else{
                    cout << second[j] << " ";
                }
                break;
            }
            
        }
    }
    return 0;
}