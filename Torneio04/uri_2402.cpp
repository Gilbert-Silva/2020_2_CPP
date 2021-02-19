#include <iostream>
#include <cmath>
using namespace std;

long long n;
bool primo = true;

int main() {
  cin >> n;
  for (int i = 2; primo && i <= sqrt(n); i++)
    if (n % i == 0) primo = false;
  if (primo) cout << "N" << endl;
  else cout << "S" << endl;
}

