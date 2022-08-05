#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const tuple<int, int, string>& a,
               const tuple<int, int, string>& b)
{
    return (get<1>(a) > get<1>(b));
}

int main(){
    #define int long long int
    int n, m;
    cin >> n >> m;
    vector <int> special_friends(n);
    for(int i=0; i<n; i++){
        cin >> special_friends[i];
    }
    vector<tuple<int, int, string>> normal_posts;
    vector<tuple<int, int, string>> special_posts;
    for(int i=0; i<m; i++){
        tuple<int, int, string> post;
        int a;
        int b;
        string c;
        cin >> a >> b >> c;
        bool flag = false;
        post = make_tuple(a, b, c);
        for(int i=0; i<n; i++){
            if(a==special_friends[i]){
                flag = true;
                special_posts.push_back(post);
                break;
            }
        }
        if(!flag){
            normal_posts.push_back(post); 
        }   
    }
    sort(special_posts.begin(), special_posts.end(), sortbysec);
    sort(normal_posts.begin(), normal_posts.end(), sortbysec);
    for(auto it= special_posts.begin(); it!=special_posts.end();++it){
        cout << get<2>(*it) << endl;
    }
    for(auto it= normal_posts.begin(); it!=normal_posts.end();++it){
        cout << get<2>(*it) << endl;
    }
    return 0;
}
