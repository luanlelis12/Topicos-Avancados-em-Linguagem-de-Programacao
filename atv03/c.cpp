#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int n; cin>>n;
  int x;
  vector<int> v;
  for(int i=0;i<n;i++){
    int g;cin>>g;
    for (int j=0;j<g;j++) {
      int c;cin>>c;
      v.push_back(c);
    }
    sort(v.begin(), v.end());
    for (int j=0;j<v.size();j+=2) {
      if (v[j] != v[j+1]) {
        cout<<"Case #"<<i+1<<": "<<v[j]<<"\n";
        break;
      }
    }
    v.clear();
  }
  return 0;
}