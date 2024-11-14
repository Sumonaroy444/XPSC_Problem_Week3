#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int>res;
    int l=0,r=0;

    while(l<n && r<m){
        if(a[l]<= b[r]){
            res.push_back(a[l]);
            l++;
        }
        else{
            res.push_back(b[r]);
            r++;
        }  
    }
    while(l<n){
        res.push_back(a[l]);
        l++;
    }
    while(r<m){
        res.push_back(b[r]);
        r++;
    }
    for (int x : res) {
        cout << x << " ";
    }
   // cout << endl;
}


