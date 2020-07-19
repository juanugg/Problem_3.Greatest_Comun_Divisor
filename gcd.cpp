#include <iostream>

int gcd_naive(int a, int b)
{
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

int gcd_euclidean(int a, int b)
{
  if (b == 0)
  {
    return a;
  }

  if (a < b)
  {
    int a_aux = 0;
    a_aux = a;
    a = b;
    b = a_aux;
  }

  int a_prima = 0;
  a_prima = a % b;

  return gcd_euclidean(b, a_prima);
}



int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_naive(a, b) << std::endl;
  std::cout << gcd_euclidean(a, b) << std::endl;
  return 0;
}
