#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];  
        }
        set<int> s; 
        int l = n;  
        for (int i = n - 1; i >= 0; i--) {
            if (s.count(a[i])) {
                break; 
            }
            s.insert(a[i]);
            l--; 
        }
        cout << l << endl; 
    }
}



