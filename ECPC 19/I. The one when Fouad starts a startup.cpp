       /* Do it! */
      /*  OMAR  */
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
//    o:
    freopen("startup.in", "r", stdin);
    int t, n, k, a, b, d, c;
    scanf("%i", &t);
    while(t--){
        c = 0;
        scanf("%i%i", &n, &k);
        scanf("%i%i", &a, &b);
        d = abs(a-b);
        for (int i = 0; i < n-1; i++){
            scanf("%i%i", &a, &b);
            if(abs(a-b) > d)
                c++;
        }
        printf(c >= k ? "no\n" : "yes\n");
    }
//    goto o;
    return 0;
}