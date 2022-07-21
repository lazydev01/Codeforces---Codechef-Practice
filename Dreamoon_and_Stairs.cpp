#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int minSteps = n/2;
    if(n%2==1){
        minSteps++;
    }
    int maxSteps = n;
    bool flag = false;
    int temp;
    for(int i=minSteps; i<=maxSteps; i++){
        if(i%m==0){
            flag = true;
            temp = i;
            break;
        }
    }
    if (flag){
        cout << temp << endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}
