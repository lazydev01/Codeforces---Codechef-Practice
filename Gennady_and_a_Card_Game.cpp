#include<bits/stdc++.h>
using namespace std;
int main(){
    string table_card;
    cin >> table_card;
    vector <string> arr(5);
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    char first_char = table_card[0];
    char second_char = table_card[1];
    bool flag = false;
    for(int i=0; i<arr.size(); i++){
        if(arr[i][0]==first_char || arr[i][1]==first_char || arr[i][0]==second_char || arr[i][1]==second_char){
            cout << "YES" << endl;
            flag = true;
            break;
        }
    }
    if(!flag){
        cout << "NO" << endl;
    }
    return 0;
}
