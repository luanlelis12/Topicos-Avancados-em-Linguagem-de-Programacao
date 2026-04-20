#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a[t],b[t];
    for (int i=0; i<t; i++) {
        cin>>a[i]>>b[i];
        if ((a[i]%b[i]) != 0) {
            cout<<b[i]-(a[i]%b[i])<<'\n';
        } else {
            cout<<0<<'\n';
        }
    }
    return 0;
}