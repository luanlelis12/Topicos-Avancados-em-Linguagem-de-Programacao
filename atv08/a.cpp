#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;cin>>n;
    vector<pair<ll,ll>> v;
    for (ll i=0;i<n;i++){
        ll b,c;
        cin>>b>>c;
        v.push_back({b,c});
    }

    sort(v.begin(),v.end());

    ll ans=0, d=0;
    for(ll i=0;i<n;i++){
        d+=v[i].first;
        ans+=v[i].second-d;
    }
    cout<<ans;
    
    return 0;
}