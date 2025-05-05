#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct tup {
    int age;
    string last_name;
    string first_name;
};

bool cmp(const tup &a, const tup &b) {
    if (a.age != b.age) return a.age < b.age;
    if (a.last_name != b.last_name) return a.last_name > b.last_name;
    return a.first_name < b.first_name;
}

int main() {
    vector<tup> tuples = {
        {18, "Joao", "das Couves"},
        {18, "Joao", "das Neves"},
        {22, "Raphael", "Veiga"}
    };

    sort(tuples.begin(), tuples.end(), cmp);
    for (auto &p : tuples) {
        cout << p.age << " " << p.first_name << " " << p.last_name << "\n";
    }
}