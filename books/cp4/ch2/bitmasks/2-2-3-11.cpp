/*
    Using bitmask manipulation:
    Obtain the remainder (modulo) of \( S \) when it is divided by \( N \) (\( N \) is a power of 2)  
    e.g., \( S = (7)_{10} \% (4)_{10} = (111)_2 \% (100)_2 = (11)_2 = (3)_{10} \).
*/
#include <iostream>
#include <cmath>
#include <bit>
#include <bitset>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    int k = __builtin_ctz(n);
    cout << ((1 << k) - 1 & s);
    return 0;
}