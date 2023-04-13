#include <fstream>
#include <iostream>
using namespace std;

int main(){
//	fstream inFile("contoh.txt");
//	
//	inFile << "saya fuad";
//	
//	inFile.close();
	
//	string teks;
//	
//	ifstream outfile("contoh.txt");
//	
//	while(getline(outfile, teks)){
//		cout << teks;
//	}

	string teks[4];
	
	for(int i =0; i<4; i++){
		cin >> teks[i];
		
	}
	
	ofstream readfile("barang.txt");
	
	for(int i =0; i<4; i++){
		readfile << teks[i] << "\n";
	}
}

