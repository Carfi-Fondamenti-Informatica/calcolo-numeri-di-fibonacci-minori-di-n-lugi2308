#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin >> n;

    int a=0;
    int b=1;
    int c=0;

    cout << b << endl;
    for (c=0;c<n;c++){

    c=a+b;
    cout << c << endl;
    a=b;
    b=c;

        }
    return 0;
}
