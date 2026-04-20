#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main() {
    fast_io
    int n,ans=0;cin>>n;
    vector<pair<int,int>> v;
    for (int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        v.push_back({b,a});
    }
    sort(v.begin(), v.end());
    int m=0;
    for (int i=0;i<n;i++){
        if(m<v[i].first && m<=v[i].second){
            ans++;
            m=v[i].first;
        }
    }
    cout<<ans;
    return 0;
}