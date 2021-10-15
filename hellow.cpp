#include <iostream>

using namespace std;

int main() {
    int a;
    int* pA;

    a = 5;
    pA = &a;

    cout << a << '\n';
    cout << &a << '\n';
    cout << pA << '\n';
    
    return 0;
}
