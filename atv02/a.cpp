#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, k, p=0;
    cin>>m>>k;
    int a[m];
    for (int i=0; i<m; i++) {
        cin>>a[i];
    }
    for (int i=0; i<m; i++) {
        if (((i+1)<=k | a[i] == a[k-1]) & a[i]>0) {
            p++;
        }
    }
    cout<<p;
    return 0;
}