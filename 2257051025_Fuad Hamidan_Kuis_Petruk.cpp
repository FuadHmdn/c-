#include <iostream>
using namespace std;

int kali(int a, int b){
	int hasil = a;
	for (int i = 0; i < b; i++){
		hasil = hasil * a;
	}
	return hasil;
}

int main(){
	int a = 5;
	int b = 2;
	cout << kali(a,b);
}
