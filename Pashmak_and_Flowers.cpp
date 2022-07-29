#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin >> n;
    vector <int> v1(n);
    for(int i=0; i<n; i++){
        cin >> v1[i];
    }
    int maximum = *max_element(v1.begin(), v1.end());
    int minimum = *min_element(v1.begin(), v1.end());
    int first = maximum-minimum;
    int count_max=0;
    int count_min=0;
    for(int i=0; i<n; i++){
        if(v1[i]==maximum){
            count_max++;
        }
        else if(v1[i]==minimum){
            count_min++;
        }
    }
    int second;
    if(minimum==maximum){
        second = (count_max*(count_max-1))/2;
    }
    else{
        second = count_max * count_min;
    }
    cout << first << " " << second << endl;
    return 0;
}

/*

1 1 1 1 1
1 1 1 2 2 3 3


*/
