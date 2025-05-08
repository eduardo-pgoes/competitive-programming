#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct frac {
    int numerator;
    int denominator;
};

bool cmp(const frac &a, const frac &b) {
    if (a.denominator == b.denominator) {
        return a.numerator > b.numerator;
    }

    return (a.numerator * b.denominator) > (b.numerator * a.denominator);
}

int main() {
    vector<frac> fractions = {
        {3, 4},
        {4, 3},
        {4, 5}
    };

    sort(fractions.begin(), fractions.end(), cmp);
    for (auto &p : fractions) {
        cout << p.numerator << "/" << p.denominator << "\n";
    }
}