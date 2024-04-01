#include <bits/stdc++.h>
using namespace std;

int modular_exponentiation(int a, int b, int m) {
    if (b == 0) return 1;
    if (b == 1) return a % m;
    if (b % 2 != 0) {
        return (modular_exponentiation(a, b / 2, m) * modular_exponentiation(a, b / 2, m) * a) % m;
    }
    return (modular_exponentiation(a, b / 2, m) * modular_exponentiation(a, b / 2, m)) % m;
}

int main() {
    int n, p, q;
    cin >> n >> p >> q;
    int x = modular_exponentiation(n, p, q);
    cout << x;
    return 0;
}
