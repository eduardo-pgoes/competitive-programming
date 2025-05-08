#include <vector>
#include <random>
#include <iostream>
#include <algorithm>
using namespace std;

typedef vector<int> vi;

// worst case
const int N = 100000;

vi rng(int n, int minVal, int maxVal) {
    vi v;
    v.reserve(n);

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(minVal, maxVal);

    for (int i = 0; i < n; ++i) {
        v.push_back(dist(gen));
    }
    return v;
}

int main() {
    vi a = rng(N, 0, N * 8);
    sort(a.begin(), a.end());
    for (int i = 1; i < N; i++) {
        if (a[i] == a[i-1]) {
            cout << "has duplicate" << endl;
            return 0;
        }
    }
    cout << "no duplicate" << endl;
    return 0;
}