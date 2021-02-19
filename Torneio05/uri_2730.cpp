#include <iostream>
#include <cmath>

using namespace std;

struct par {
  int a;
  int b;
};

int n;
int a[210], b[210];
par p[80010];
int k;

int mdc(int x, int y) {
  if (y == 0) return x;
  else return mdc(y, x%y);
}

bool temPar(int a, int b) {
  bool tem = false;
  for (int i = 0; !tem && i <= k; i++) {
    if (p[i].a == a && p[i].b == b) tem = true;
  }
  return tem;
}

int main() {
  while (cin >> n, n) {
    k = -1;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        // Par {a[i], b[j]} {b[j] a[i]}
        if ((a[i] != b[j]) && mdc(a[i], b[j]) == 1) {
          if (!temPar(a[i], b[j])) {
            //cout << k << " " << a[i] << " " << b[j] << endl;
            k++;
            p[k].a = a[i]; p[k].b = b[j];
            k++;
            p[k].a = b[j]; p[k].b = a[i];
          }
        }
        if (a[i] == 1 && b[j] == 1) {
          if (!temPar(a[i], b[j])) {
            k++;
            p[k].a = a[i]; p[k].b = b[j];
          }
        }
      }
    }
    cout << k + 1 << endl;
  }
}