#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main() {
    fast_io
    ll t, custo=0;cin>>t;
    for (int i=0;i<t;i++) {
        map<ll, ll> m;
        ll n,c;cin>>n;cin>>c;
        for (int j=0;j<n;j++) {
            ll a;cin>>a;
            m[a]++;
        }
        for (auto p:m) {
            if (p.second>c) {
                custo+=c;
            } else {
                custo+=p.second;
            }
        }
        cout<<custo<<"\n";
        custo=0;
    }
}