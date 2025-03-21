#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> v, int n) {
    int high = v[v.size() - 1];
    int low = v[0];
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (v[mid] == n) {
            return mid;
        }
        if (v[mid] > n) {
            high = mid - 1;
        }
        if (v[mid] < n) {
            low = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = binarySearch(v, 3);
    printf("%d", n);
    return 0;
}