#include <vector>
#include <random>
#include <iostream>
#include <algorithm>
#include <map>
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
    vi a = rng(N, 1, N);
    map<int, int> dh; // diff hash
    int v;
    cin >> v;

    for (int i = 0; i < N; i++) {
        if (a[i] > v) {
            continue;
        }
        int lookup = v - a[i];
        if (auto search = dh.find(lookup); search != dh.end()) {
            cout << "a = " << search->first << "; b = " << a[i] << endl;
            return 0;
        }
        dh[a[i]] = lookup;
    }

    cout << "no such a, b exists" << endl;
    return 0;
}