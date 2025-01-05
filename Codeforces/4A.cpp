using namespace std;
#include <iostream>
#define ci(n) cin>>n;
#define CY cout<<"YES";
#define CN cout<<"NO";
#define exit return 0;

int main() {
  int n;
  ci(n);

  if (n <= 2) {
    CN;
    exit;
  }

  if (n % 2 == 0) {
    CY;
    exit;
  }

  CN;
  exit;
}