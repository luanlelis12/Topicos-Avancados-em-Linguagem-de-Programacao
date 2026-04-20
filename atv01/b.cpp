#include <bits/stdc++.h>
using namespace std;

int main() {
  int k,n,w,val=0;
  cin>>k>>n>>w;
  if (w==0)
    cout<<0;
  else {
    for(int i=0; i<=w; i++){
      val+=k*i;
    }
    if(val>=n)
        cout<<val-n;
    else
        cout<<0;
  }
  return 0;
}