#include <iostream>
#include <string>

using namespace std;

class Dosen{
	
	public:
	string nama;
	int umur;
	char kelas;
	Dosen(string namaa, int umurr, char kelass){
		Dosen::nama = namaa;
		Dosen::umur = umurr;
		Dosen::kelas = kelass;

		cout << Dosen::nama << "  " << Dosen::umur << "  " << Dosen::kelas << endl;
		
	}
	
	void hitung(){
		cout << Dosen::nama << endl;
		cout << Dosen::umur << endl;
		cout << Dosen::kelas;
	}
	
};

int main(){
	int umurr;
	cin >> umurr;
	int *ptr = &umurr;
	Dosen data1 = Dosen("Rafif", umurr, 'C');
	
	cout << umurr << " " << &umurr << " " << *ptr << " " << ptr << endl;
	
	Dosen data2 = Dosen("fuad" , umurr, 'C');
	
	data2.hitung();
	
	return 0;
}
