#include <iostream>

using namespace std;

// Hàm tính giai th?a c?a m?t s? nguyên n
int factorial(int n) {
    // N?u n = 0 ho?c n = 1, giai th?a là 1
    if (n == 0 || n == 1)
        return 1;
    
    // Trý?ng h?p n ch?n
    if (n % 2 == 0) {
        int half = factorial(n / 2);
        return half * half;
    } 
    // Trý?ng h?p n l?
    else {
        int half = factorial(n / 2);
        return half * half * n;
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    cout << "Giai thua cua " << n << " la: " << factorial(n) << endl;
    return 0;
}

