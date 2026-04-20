#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;

int main() {
    fast_io
    string n,m="";cin>>n;
    for (int i=0;i<n.size();i++) {
        if (m[m.size()-1] != n[i]) {
            m+=n[i];
        } 
    }
    cout<<m;
    return 0;
}