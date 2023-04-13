#include <iostream>
using namespace std;

void tes(int *);
void kuadrat(int *);

int main(){
	int a = 5;
	int *ptr = &a;
	
	cout << a << " " << ptr << " " << *ptr << endl;
	//tes(&a);
	kuadrat(&a);
}

void tes(int *b){
	cout << *b << " " << b << " " << endl;
}

void kuadrat(int *nilai){
	*nilai = (*nilai) * (*nilai);
	cout << *nilai;
}
