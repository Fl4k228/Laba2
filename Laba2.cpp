#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double t[] = { 0, 0.25, 0.5, 0.75, 1, 2, 3, 4, 5 };
  double g = 9.81;
  double m = 75.0;
  double k = 8.0;
  double v[9];
  int a = 0;

  while (a < size(t))
  {
    cout.precision(4);
    v[a] = sqrt(g * m / k) * tanh(t[a] * sqrt(g * k / m));
    cout << t[a] << "          " << v[a] << endl;
    a++;
  }
}
