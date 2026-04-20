#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main() {
    fast_io
    ll n;cin>>n;
    map<ll, ll> m;
    for (int i=0;i<n;i++) {
        ll j;cin>>j;
        if (j == 0) {
            ll k,v;cin>>k;cin>>v;
            m[k] = v;
        } else if (j==1) {
            ll k;cin>>k;
            cout<<m[k]<<"\n";
        }
    }
}