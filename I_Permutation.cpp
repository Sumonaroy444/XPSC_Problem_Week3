#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<ll,ll>mp;
        int cnt =0;
        for(auto it :v){
            if(it != 0 && mp.find(it) == mp.end()){
                mp[it]++;
                cnt++;
            }
        }
        if(cnt<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
