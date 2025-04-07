#include <iostream>

using namespace std;

int count_x(char* v, char x) {
    if (v == nullptr) {
        return 0;
    }
    int count = 0;
    for (;*v!=0;v++) {
        if (*v==x) count++;
    }
    return count;
}

int main() {
    char* c = "abccc";
    int n = count_x(c, 'a');
    printf("%d", n);
    return 0;
}