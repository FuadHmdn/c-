#include <iostream>
#include <string>
using namespace std;

class Fuad{
	
	public:
		string a;
		string b;
		
		Fuad(string inputA, string inputB){
			Fuad::a = inputA;
			Fuad::b = inputB;
			
			cout << Fuad::a <<" "<< Fuad::b << endl;
		}
};

class Luas{
	
	public:
		int ai;
		int bi;
		Luas(int panjang, int lebar){
			Luas::ai = panjang;
			Luas::bi = lebar;
		}
		void persegi(){
			int ci = ai * bi;
			
		}
};
	
int main(){
	Fuad data1 = Fuad("trio", "titit");
	Fuad data2 = Fuad("Freya", "Marsha");
	
	Luas hitung = Luas(10,2);
	hitung.persegi();
	
	int panjang, lebar;
	cin >> panjang;
	cin >> lebar;
	Luas hitung2 = Luas(panjang, lebar);
	hitung2.persegi();
}
		
		


