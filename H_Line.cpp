#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
    int n;
    cin>>n;
    string line;
    cin>>line;
    ll initial_val =0;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        if(line[i] == 'L'){
            initial_val += i;
            v[i] = (n-i-1)-i;
        }
        else{
            initial_val +=(n-i-1);
            v[i]=i-(n-i-1);
        }
    }
    sort(v.begin(),v.end(),greater<ll>());

    vector<long long> res(n);
    long long max_val = initial_val;

    for (int k = 0; k < n; ++k) {
        if (v[k] > 0) max_val += v[k];
        res[k] = max_val;
    }

    for (int k = 0; k < n; ++k) {
        cout << res[k] << " ";
    }
    cout << endl;

}
int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;

}
