#include <iostream>
using namespace std;

#define min(a, b) ((a > b) ? a : b)

int main() {
    int digit9 = 2;
    int digit10 = 5;
    int hitung = min(digit9, digit10);
    cout << "Digit ke-9 : " << digit9 << ", dan Digit ke-10 : " << digit10 << ". Hasil bilangan terbesar adalah: " << hitung << endl;
    return 0;
}

