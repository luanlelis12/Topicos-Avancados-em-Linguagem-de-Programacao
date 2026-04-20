#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;

int main() {
    fast_io
    int n,m;cin>>n;cin>>m;
    vector<int> v;
    for (int i=0;i<n;i++) {
        int a;cin>>a;
        v.push_back(a);
    }
    int quant=0;
    sort(v.begin(), v.end(), greater<int>());
    for (int a:v) {
        m-=a;
        quant++;
        if (m<= 0) {
            break;
        }
    }
    cout<<quant;
    return 0;
}