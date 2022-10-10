#include<bits/stdc++.h>
using namespace std;
int main(){
#define int long long int
int test_case;
cin >> test_case;
while(test_case--){
int n;
cin >> n;
vector<int> a(n);
vector<int> b(n);
for(int i=0; i<n;i++){
    cin >> a[i];
}
for(int i=0; i<n;i++){
    cin >> b[i];
}
int unequal = 0;
int zero_a = 0;
int zero_b = 0;
int one_a = 0;
int one_b = 0;
for(int i=0; i<n; i++){
    if(a[i]!=b[i]){
        unequal++;
    }
    if(a[i]==1){
        one_a++;
    }
    else{
        zero_a++;
    }
    if(b[i]==1){
        one_b++;
    }
    else{
        zero_b++;
    }
}
cout << min(unequal , abs(one_a-one_b)+1) << endl;
}
return 0;
}
