       /* Do it! */
      /*  OMAR  */
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int maxFree(int n, int m){
    return n - n/(m+1);
}

int main(){
//    o:
    freopen("shops.in", "r", stdin);
    ll res, l_res;
    int t, n, m, k, has;
    scanf("%i", &t);
    while(t--){
        res = LLONG_MAX;
        scanf("%i%i%i", &n, &m, &k);
        int arr[n];
        for (int i = 0; i < n; i++){
            scanf("%i", arr+i);
        }

        if(maxFree(n, m) >= k){//all free
            printf("0\n");
        }else{
            for (int i = 0; i < n; i++){//buy the rest from i shop
                has = maxFree(i, m) + maxFree(n-i-1, m);
                l_res = (ll)(k - has) * arr[i];//overflow
                res = min(res, l_res);
            }
            printf("%lld\n", res);
        }
    }
//    goto o;
    return 0;
}
