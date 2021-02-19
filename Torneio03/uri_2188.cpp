#include <iostream>
using namespace std;
int n, k = 1;
int fx, fy, fu, fv;
int x, y, u, v;
int main() {
  while (cin >> n, n) {
    bool nenhum = false;
    cin >> fx >> fy >> fu >> fv;
    for (int i = 2; i <= n; i++) {
      cin >> x >> y >> u >> v;
      // Testar se não há uma Interseção
      // Interseção do retângulo
      // (fx, fy, fu, fv) (x, y, u, v)
      if (x > fu || u < fx || y < fv || v > fy) nenhum = true;
      fx = max(fx, x);
      fy = min(fy, y);
      fu = min(fu, u);
      fv = max(fv, v);
    }
    cout << "Teste " << k++ << endl;
    if (nenhum) cout << "nenhum" << endl;
    else cout << fx << " " << fy << " " << fu << " " << fv << endl;
    cout << endl;
  }
}