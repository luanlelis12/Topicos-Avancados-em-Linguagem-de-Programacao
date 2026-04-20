#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;

int main() {
    fast_io
    int n;cin>>n;
    map<string,int> s;
    for (int i=0;i<n;i++) {
        int j=0;
        string m;cin>>m;
        if (s.count(m) == 1) {
            cout<<m<<s[m]<<"\n";
        } else {
            cout<<"OK\n";
        }
        s[m]++;
    }
    return 0;
}