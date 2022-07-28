#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    string str;
    while(cin>> str){
        int team_a = 0;
        int team_b = 0;
        int remaining_goals_a = INT_MAX;
        int remaining_goals_b = INT_MAX;
        int remaining_rounds_a = INT_MAX;
        int remaining_rounds_b = INT_MAX;
        bool a_won = false;
        bool b_won = false;
        int min_rounds = 0;
        for(int i=0; i<10; i++){
            if(i%2==0){
                if(str[i]=='1'){
                    team_a++;
                }
                remaining_rounds_a = 5 - (i/2) - 1;
            }
            else{
                if(str[i]=='1'){
                    team_b++;  
                }
                remaining_rounds_b = 5 - (i/2) - 1;
            } 
            remaining_goals_a = team_b - team_a;
            if(remaining_goals_a<0){
                remaining_goals_a = 0;
            }
            if(remaining_goals_a>remaining_rounds_a){
                b_won = true;
                min_rounds = i + 1;
                break;
            }
            remaining_goals_b = team_a - team_b;
            if(remaining_goals_b<0){
                remaining_goals_b = 0;
            }
            if(remaining_goals_b>remaining_rounds_b){
                a_won = true;
                min_rounds = i + 1;
                break;
            }
        }
        if(a_won){
            cout << "TEAM-A " << min_rounds << endl;
        }
        else if(b_won){
            cout << "TEAM-B " << min_rounds << endl;
        }
        else{
            for(int i=0; i<5; i++){
                if(str[10+(2*i)]=='1' && str[10+((2*i)+1)]=='0'){
                    a_won = true;
                    min_rounds = 10 + 2*(i+1);
                    break;
                }
                else if(str[10+(2*i)]=='0' && str[10+((2*i)+1)]=='1'){
                    b_won = true;
                    min_rounds = 10 + 2*(i+1);
                    break;
                }
            }
            if(a_won){
                cout << "TEAM-A " << min_rounds << endl;
            }
            else if(b_won){
                cout << "TEAM-B " << min_rounds << endl;
            }
            else{
                cout << "TIE" << endl;
            }
        }
    }
    return 0;
}

/*

0101110111 0110101111
team_a = 0
rra = 5
rga = 0

team_b = 1;
rrb  = 5
rgb = 0

team_a = 0
rra = 4
rga = 1

*/
