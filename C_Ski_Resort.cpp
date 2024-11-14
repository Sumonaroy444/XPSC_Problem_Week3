
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,q;
        cin >>n>>k>> q;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        } 
        ll ans = 0;
        ll cons_val = 0;
        for(int i = 0; i < n; i++){
            if(a[i] <= q) {
                cons_val++;
            }
            if(i == n - 1 || a[i + 1] > q){
                if(cons_val >= k){
                    ll x = cons_val - k + 1;
                    ll sum = (x * (x + 1)) / 2;
                    ans += sum;
                }
                cons_val = 0;
            }
        }
        cout << ans << endl; 
    }
}


