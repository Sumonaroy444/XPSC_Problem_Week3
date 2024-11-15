
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[200][200];
    int t=1;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int total=0,cur=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               cur+=a[i][j];
               int p,q;
               p=i+1;
               q=j+1;
               while(p<n && q<m){
                cur+=a[p++][q++];
               }
               p=i+1;
               q= j-1;
               while(p<n && q>=0){
                cur+=a[p++][q--];
               }
               p=i-1;
               q=j-1;
               while(p>=0 && q>=0){
                cur+=a[p--][q--];
               }
               p=i-1;
               q=j+1;
               while(p>=0 && q<m){
                cur+=a[p--][q++];
               }
             if(total<cur){
                total = cur;
             }
             cur=0;
            }
        }
         cout<<total<<endl;
    }
    return 0;
}

