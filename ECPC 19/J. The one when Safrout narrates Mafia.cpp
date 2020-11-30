       /* Do it! */
      /*  OMAR  */
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void init(){
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(0);
}

int n;
string arr[3000], mem[3000];

string dp(int i){
    if(i == n)
        return "";

    string& ret = mem[i];

    if(ret != "-")
        return ret;

    string ch = dp(i+1);
    ret = max(arr[i] + ch, ch);

    return ret;
}

int main(){
//    o:
    freopen("lex.in", "r", stdin);
    init();
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for (int i = 0; i < n; i++){
            cin>>arr[i];
            mem[i] = "-";
        }
        cout<<dp(0)<<"\n";
    }
//    goto o;
    return 0;
}
