#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
	public:
		string nama;
		string kelas;
		string npm;
		
		Mahasiswa(string inputNama, string inputKelas, string inputNPM){
			Mahasiswa::nama = inputNama;
			Mahasiswa::kelas = inputKelas;
			Mahasiswa::npm = inputNPM;
			
			cout << " Nama saya adalah  : " << Mahasiswa::nama << endl;
			cout << " Kelas saya adalah : " << Mahasiswa::kelas << endl;
			cout << " NPM saya adalah   : " << Mahasiswa::npm << endl;
		}
};
int main(){
	Mahasiswa data1 = Mahasiswa("Fuad Hamidan", "C", "2257051025");
}
