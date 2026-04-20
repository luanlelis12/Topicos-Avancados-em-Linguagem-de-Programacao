#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        string a,b,c;
        bool asn=true;
        cin>>a>>b>>c;
        for (int z=0; z<a.size(); z++) {
            if ((a[z]!=b[z] && a[z]==c[z]) || ((a[z]==b[z]) && (a[z]==c[z]) ) || (a[z]!=b[z] && b[z]==c[z])) {
                asn *= true;
            } else {
                asn *= false;
            }
        }
        if (asn) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}