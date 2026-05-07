#include <iostream>

using namespace std;

// Extended Euclidean Algorithm
// Returns gcd(a, b) and finds x, y such that a*x + b*y = gcd(a, b)
int extendedGCD(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    
    int x1, y1;
    int gcd = extendedGCD(b, a % b, x1, y1);
    
    x = y1;
    y = x1 - (a / b) * y1;
    
    return gcd;
}

// Find modular multiplicative inverse of a modulo m
// Returns the inverse if it exists, or -1 if it doesn't
int mod_inverse(int a, int m) {
    int x, y;
    int gcd = extendedGCD(a, m, x, y);

    // Inverse exists only if gcd(a, m) = 1
    if (gcd == 1) {
        return (x % m + m) % m;
    }
    return -1;
}

int main() {
    cout << "=== Modular Multiplicative Inverse ===" << endl;
    cout << endl;
    
    // Test cases
    int test_cases[][2] = {
        {3, 7},      // 3 mod 7
        {10, 17},    // 10 mod 17
        {5, 11},     // 5 mod 11
        {7, 26},     // 7 mod 26
        {6, 9}       // 6 mod 9 (no inverse)
    };
    
    cout << "Testing mod_inverse function:" << endl;
    cout << "----------------------------" << endl;
    
    for (int i = 0; i < 5; i++) {
        int a = test_cases[i][0];
        int m = test_cases[i][1];
        int result = mod_inverse(a, m);
        
        cout << "mod_inverse(" << a << ", " << m << ") = ";
        if (result == -1) {
            cout << "không tồn tại (gcd != 1)" << endl;
        } else {
            cout << result;
            // Verify: (a * result) % m should equal 1
            int check = (a * result) % m;
            cout << " [verification: (" << a << " * " << result << ") % " << m << " = " << check << "]" << endl;
        }
    }
    
    cout << endl;
    cout << "=== Interactive Mode ===" << endl;
    cout << "Enter 'a m' to find modular inverse of a mod m" << endl;
    cout << "Enter -1 to exit" << endl;
    cout << endl;
    
    int a, m;
    while (true) {
        cout << "Input a and m: ";
        cin >> a >> m;
        
        if (a == -1) break;
        
        int result = mod_inverse(a, m);
        
        cout << "mod_inverse(" << a << ", " << m << ") = ";
        if (result == -1) {
            cout << "không tồn tại" << endl;
        } else {
            cout << result << endl;
            cout << "Verification: (" << a << " * " << result << ") mod " << m << " = " << (a * result) % m << endl;
        }
        cout << endl;
    }
    
    return 0;
}