#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll desc=0;
    int n;cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++) {
        int p;cin>>p;
        v.push_back(p);
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i=2;i<n;i+=3) {
        desc+=v[i];
    }
    cout<<desc;
  return 0;
}