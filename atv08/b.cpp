#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n;cin>>n;
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll med = v[(v.size())/2];
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=abs(v[i]-med);
    }
    cout<<ans;
    return 0;
}