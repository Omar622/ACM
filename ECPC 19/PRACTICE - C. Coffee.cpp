       /* Do it! */
      /*  OMAR  */
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void init(){
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(false);
}

struct lst{
    int s, m, l;
};

int main(){
//    o:
    init();
    freopen("coffee.in", "r", stdin);
    string coff, name, siz;
    int t, nc, nn, xs, xm, xl, fee;
    cin>>t;
    while(t--){
        cin>>nc>>nn;
        fee = 100/nn;
        map<string, lst>mp;
        int res;
        for (int i = 0; i < nc; i++){
            cin>>coff>>xs>>xm>>xl;
            mp[coff].l = xl;
            mp[coff].s = xs;
            mp[coff].m = xm;
        }

        for (int i = 0; i < nn; i++){
            cin>>name>>siz>>coff;
            res = fee + (siz == "small" ? mp[coff].s : (siz == "medium" ? mp[coff].m : mp[coff].l));

            if((res+1) % 5 == 0)
                res++;
            else if((res-1) % 5 == 0)
                res--;

            cout<<name<<" "<<res<<"\n";
        }

    }
//    goto o;
    return 0;
}
