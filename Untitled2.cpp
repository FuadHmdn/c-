#include <iostream>
using namespace std;

int multiplyByFive(int num, int count) {
    if (count == 0) {
        return num;
    }
    num *= 5;
    return multiplyByFive(num, count-1);
}

int main() {
    int num = 5;
    int count = 2;
    int result = multiplyByFive(num, count);
    cout << "Result: " << result << endl;
    return 0;
}

