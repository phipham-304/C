#include <iostream>

using namespace std;

// H�m t�nh giai th?a c?a m?t s? nguy�n n
int factorial(int n) {
    // N?u n = 0 ho?c n = 1, giai th?a l� 1
    if (n == 0 || n == 1)
        return 1;
    
    // Tr�?ng h?p n ch?n
    if (n % 2 == 0) {
        int half = factorial(n / 2);
        return half * half;
    } 
    // Tr�?ng h?p n l?
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

