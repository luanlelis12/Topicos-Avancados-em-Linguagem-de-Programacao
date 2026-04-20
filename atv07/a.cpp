#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main() {
    fast_io
    int ans=0,n,x;cin>>n;cin>>x;
    vector<int> a;
    for (int i=0;i<n;i++) {
        int ai;cin>>ai;
        a.push_back(ai);
    }
    sort(a.begin(), a.end());
    for (int i=0;i<n;i++) {
        if((x-a[i])<0) {
            break;
        }
        ans++;
        x-=a[i];
    }
    cout<<ans;
    return 0;
}