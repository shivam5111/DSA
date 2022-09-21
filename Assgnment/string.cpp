#include <iostream>
#include <string>
using namespace std;
int main() {
    
    string a,b;
    cin >> a >> b ;
    
    int p = a.size();
    int q = b.size();
    cout << p <<" "<< q << endl;
    cout << a << b << endl;
    char ch = a[0];
    char chh = b[0];
    a[0] = chh;
    b[0] = ch;
    cout << a <<" "<<b;
    return 0;
}
