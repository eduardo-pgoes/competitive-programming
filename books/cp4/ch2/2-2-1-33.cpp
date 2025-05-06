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
    int v;
    cin >> v;

    // enforce sorted array constraint
    sort(a.begin(), a.end());

    int i = 0;
    int j = N - 1;

    while (i < j) {
        int sum = a[i] + a[j];
        if (sum > v) {
            j--;
        }
        if (sum < v) {
            i++;
        }
        if (sum == v) {
            cout << "a = " << a[i] << "; b = " << a[j] << endl;
            return 0;
        }
    }

    cout << "no such a, b exists" << endl;
    return 0;
}