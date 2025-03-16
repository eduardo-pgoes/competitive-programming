#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

void merge(vi &v, int p, int q, int r) {
    // first step: copy to l, r
    int low = q - p + 1;
    int high = r - q;
    vi left = vi(low);
    vi right = vi(high);
    // populate l, r
    for (int i = 0; i < low; i++) {
        left[i] = v[p+i];
    }
    for (int i = 0; i < high; i++) {
        right[i] = v[q+i+1];
    }
    int i = 0, j = 0, k = p;
    while (i < low && j < high) {
        if (left[i] <= right[j]) {
            v[k] = left[i];
            i++;
        } else {
            v[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < low) {
        v[k] = left[i];
        k++;
        i++;
    }

    while (j < high) {
        v[k] = right[j];
        k++;
        j++;
    }
}

void mergeSort(vi &v, int p, int q) {
    if (p >= q) {
        return;
    }

    int mid = (p + q) / 2;
    mergeSort(v, p, mid);
    mergeSort(v, mid+1, q);
    merge(v, p, mid, q);
    return;
}

int main() {
    vi v = { 3, 4, 5, 2 };
    mergeSort(v, 0, 3);
    printf("[");
    for (int i = 0; i < 4; i++) {
        printf("%d", v[i]);
        if (i != 3) {
            printf(", ");
        }
    }
    printf("]\n");
}