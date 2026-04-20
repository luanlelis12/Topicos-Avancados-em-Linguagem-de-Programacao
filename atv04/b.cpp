#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;cin>>t;
    for (int i=0;i<t;i++) {
        int n;cin>>n;
        vector<int> sum, adv, aux;
        for (int j=0;j<n;j++) {
            int s;cin>>s;
            sum.push_back(s);
            aux.push_back(s);
        }
        sort(aux.begin(), aux.end(), greater<int>());
        for (int j=0;j<n;j++) {
            if (sum[j] == aux[0]) {
                adv.push_back(sum[j]-aux[1]);
            } else {
                adv.push_back(sum[j]-aux[0]);
            }
            cout<<adv[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}