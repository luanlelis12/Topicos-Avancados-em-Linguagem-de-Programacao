#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, ant, t;
  string j = "Jolly\n";
  vector<int> p;
  while (cin>>n) {
    for (int i=0;i<n;i++) {
      int m;cin>>m;
      if (i!=0) {
        t = abs(m-ant);
        p.push_back(t);
      }
      if (i!=0 && !(t>=1 && t<n)) {
        j = "Not jolly\n";
      }
      ant=m; 
    }
    sort(p.begin(), p.end());
    for (int k=0;k<p.size();k++) {
      if (p[k]!=(k+1)) {
        j = "Not jolly\n";
      }
    }
    cout<<j;
    j = "Jolly\n";
    p.clear();
  }
  return 0;
}