#include <iostream>

using namespace std;

int main() {
  long long a, b, s;
  cin >> a >> b;
  s = (a + b) * (b - a + 1) / 2;
  cout << s << endl;
}
