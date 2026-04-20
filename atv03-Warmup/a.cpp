#include <bits/stdc++.h>
using namespace std;

int main() {
    string pal, palN ="";
    cin>>pal;
    for(char &c : pal ) {
        c = (char) tolower(c);
        if (c == 'a' | c == 'o' | c == 'y' | c == 'e' | c == 'u' | c == 'i') {
            palN+="";
        } else {
            palN= palN+"."+c;
        }
    }
    cout<<palN;
    return 0;
}