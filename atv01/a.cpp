#include <bits/stdc++.h>
using namespace std;

int main() {
    int qt, t, num=0;
    cin>>qt;
    for(int i=0;i<qt;i++){
        cin>>t;
        if (t<0) {
            num++;
        }
    }
    cout<<num;
    return 0;
}