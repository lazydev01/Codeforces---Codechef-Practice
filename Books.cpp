#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n,t;
    cin >> n >> t;
    vector <int> books;
    int j;
    for(int i=0; i<n; i++){
        cin >> j;
        books.push_back(j);
    }
    int count = 0;
    int sum = 0;
    int pointer = 0;
    for(int i=0; i<n; i++){
        sum+=books[i];
        if(sum <=t){
            count++;
        }
        else{
            sum-= books[pointer];
            pointer++;
        }
    }
    cout << count << endl;
    return 0;
}

/*

6 10
2 3 4 2 1 1

*/