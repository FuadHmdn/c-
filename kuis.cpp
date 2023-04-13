#include <iostream>
#include <string>
using namespace std;

int multiplyLastDigit(string num, int count) {
    if (count == 0) {
        return stoi(npm);
    }
    int lastDigit = npm[npm.length()-1] - '0';
    lastDigit *= 2;
    num[num.length()-1] = '0' + (lastDigit % 10);
    int carry = lastDigit / 10;
    if (carry > 0) {
        num = to_string(stoi(npm.substr(0, npm.length()-1)) + carry) + npm[npm.length()-1];
    }
    return multiplyLastDigit(npm, count-1);
}

int main() {
    string npm = "2257051025";
    int count = 2;
    int result = multiplyLastDigit(npm, count);
    cout << "Result: " << result << endl;
    return 0;
}

