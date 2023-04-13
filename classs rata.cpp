#include <iostream>
#include <string>

using namespace std;

class rata{
	public:
		int bil1;
		int bil2;
		
		rata(int angka1, int angka2){
			rata::bil1 = angka1;
			rata::bil2 = angka2;
		}
		
		void hitung(){
			int nilai = (bil1 + bil2) / 2;
			cout << nilai << endl;
		}
};
int main(){
	int angka1;
	int angka2;
	
	cin >> angka1;
	cin >> angka2;
	
	rata N1 = rata(angka1, angka2);
	N1.hitung();
}
