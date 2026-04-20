#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;

int main() {
    fast_io
    ll n;cin>>n;
    ll count = 0;
    map<string,ll> k, d;
    for (ll i=0;i<n;i++) {
        string r;cin>>r;
        d[r]++;
    }
    for (ll i=0;i<n;i++) {
        string r;cin>>r;
        k[r]++;
    }
    for (auto p:d) {
        if (p.second == k[p.first]) {
            count+=p.second;
        } else {
            if (p.second < k[p.first]) {
                count+=p.second;
            } else {
                count+=k[p.first];
            }
        }
    }
    cout<<count;
    return 0;
}