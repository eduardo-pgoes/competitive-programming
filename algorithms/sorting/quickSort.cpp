#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;
int partition(vi &a, int p, int r) {
    int x = a[r];
    int i = p-1;
    for (int j = p;j<r;j++) {
        if (a[j]<=x) {
            i++;
            int temp = a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int rr = i+1;
    int temp = a[rr];
    a[rr]=a[r];
    a[r]=temp;
    return rr;
}

void qs(vi &a, int p, int r) {
    if (p >= r) return;s

    int q = partition(a, p, r);
    qs(a, p, q-1);
    qs(a, q+1, r);
}

int main() {
    vi vec = { 6, 5, 3, 7, 9 };
    qs(vec, 0, 4);
    for (int i : vec) {
        cout << i << " ";
    }
}