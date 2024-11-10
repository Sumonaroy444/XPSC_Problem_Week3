
#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, z;
    cin>>x>>y>>z;

    double point1 = x * 1.0 + y * 0.5;
    
    int remain_point = 4 - (x+y+z);
    double point2 = z * 1.0 + y * 0.5;

    if (point1 + remain_point > point2) {
        cout << "Yes" << endl;
    } 
    else {
        cout << "No" << endl;
    }
}


