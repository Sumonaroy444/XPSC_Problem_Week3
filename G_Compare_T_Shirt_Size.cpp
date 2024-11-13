#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        if (a == b) 
        {
            cout << "=" << endl;
            continue;
        }
        if (a == "M") {
            if (b.back() == 'S') {
                cout << ">" << endl;
            } else {
                cout << "<" << endl;
            }
            continue;
        }
        if (b == "M") {
            if (a.back() == 'S') {
                cout << "<" << endl;
            } 
            else {
                cout << ">" << endl;
            }
            continue;
        }
        if (a.back() == 'S' && b.back() == 'S') 
        {
            if (a.size() < b.size()) {
                cout << ">" << endl;
            } 
            else {
                cout << "<" << endl;
            }
            continue;
        }
        if (a.back() == 'L' && b.back() == 'L') 
        {

            if (a.size() > b.size()) {
                cout << ">" << endl;
            } 
            else {
                cout << "<" << endl;
            }
            continue;
        }
        if (a.back() == 'S') {
            cout << "<" << endl;
        } 
        else {
            cout << ">" << endl;
        }
    }

    return 0;
}


