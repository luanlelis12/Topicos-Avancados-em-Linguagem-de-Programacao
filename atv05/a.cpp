#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main() {
    fast_io
    int n;cin>>n;
    set<int> t;
    for (int i=0;i<n;i++) {
        int x;cin>>x;
        t.insert(x);
    }
    cout<<t.size();
    return 0;
}