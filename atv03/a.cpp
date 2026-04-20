#include <bits/stdc++.h>
using namespace std;

int main() {
    string p;int m=1, nv=0;
    cin>>p;
    for(int i=0;i<p.size();i++) {
        nv++;
        if(p[i]=='A'||p[i]=='E'||p[i]=='I'||p[i]=='O'||p[i]=='U'||p[i]=='Y') {
            if (nv>m)
                m=nv;
            nv=0;
        }
        if (i==(p.size()-1)) {
            nv++;
            if (nv>m)
                m=nv;
        }
    }
    cout<<m;
    return 0;
}