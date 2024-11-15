#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll sum=0,operation =0;
        bool Neg_val =false;
        for(int i=0;i<=n;i++){
                 if(i<n){
                   sum+=abs(a[i]);
            }
            if(Neg_val){
                if(i==n || a[i]>0){
                    operation++;
                    Neg_val = false;
                }
            }
            else{
                if(a[i]<0){
                    Neg_val = true;
                }
            }
        }
        cout<<sum<<" "<<operation<<endl;
    }
}
