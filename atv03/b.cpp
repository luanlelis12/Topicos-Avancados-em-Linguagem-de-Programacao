#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, g=0;cin>>n;
    int m[n][n];
    for(int i=0; i<n; i++) {
        for (int j=0;j<n;j++) {
            cin>>m[i][j];
        }
    }
    int somaL=0, somaC=0;
    for(int i=0; i<n; i++) {
        for (int j=0;j<n;j++) {
            for(int k=0;k<n;k++) {
                somaL+=m[i][k];
                somaC+=m[k][j];
            }
            if (somaC>somaL) {
                g++;
            }
            somaC=0;somaL=0;
        }
    }
    cout<<g;
    return 0;
}