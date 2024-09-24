#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double t[9] = { 0, 0.25, 0.5, 0.75, 1, 2, 3, 4, 5 };
    double g = 9.81;
    double m = 75.0;
    double k = 8.0;
    double v[9];

    for (size_t i = 0; i < size(t); i++)
    {
        v[i] = sqrt(g * m / k) * tanh(t[i] * sqrt(g * k / m));
        cout << t[i] << "          " << v[i] << endl;
    }
}