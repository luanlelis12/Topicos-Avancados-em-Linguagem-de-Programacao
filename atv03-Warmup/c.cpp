#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, val=0;
    cin>>n>>h;
    for (int i=0; i<n; i++) {
        int nh;
        cin>>nh;
        if(nh>h) val+=2;
        else val++;
    }
    cout<<val;
    return 0;
}