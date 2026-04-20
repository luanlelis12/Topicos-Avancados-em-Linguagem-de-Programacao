#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n, days=0, q=1;cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++) {
        int a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), greater<int>());
    while (v.size()!=0) {
        if (v[v.size()-1] >= q) {
            q++;
            days++;
        }
        v.pop_back();
    }
    cout<<days;
    return 0;
}