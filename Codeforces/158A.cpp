using namespace std;
#include <bits/stdc++.h>
#define ci(n) cin>>n
#define ff(i,a,b) for(int i=a; i<b; i++)
#define pb(v,x) v.push_back(x)
#define vi vector<int>
#define r(x) cout<<x
#define exit return 0

int main() {
  int n,i=0,k;
  ci(n);
  ci(k);
  vi v;
  ff(i,0,n) {
    int x=0;
    ci(x);
    if(i == 0 && x == 0){
      r(0);
      exit;
    }
    pb(v,x);
  }
  int c=0;
  ff(i,0,n) {
    if (v[i] < v[k]) {
      break;
    }
    c++;
  }
  r(c);
  return 0;
}