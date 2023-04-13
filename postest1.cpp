#include <iostream>
#include <cmath>
using namespace std;

//int fib (int n){
//	if (n == 0 || n == 1){
//		return n;
//	} else{
//		return (fib(n - 2) + fib(n - 1));
//	}
//}
//
//int main (){
//	cout<<fib(5);
//}

//void hitungRerata (){
//	int N;
//	double total, Nd;
//	cin >> N;
//	for(int i = 0; i < N; i++){
//		cin >> Nd;
//		total += Nd;
//	}
//	cout << total / N;
//}
//
//int main (){
//	hitungRerata();
//}

//int tukar(int& a, int& b, int& c){
//	if (a>b){
//		std::swap(a,b);
//	}
//	if (b>c){
//		std::swap(b,c);
//	}
//	if (a>b){
//		std::swap(a,b);
//	}
//}
//
//int main(){
//	int a=114,b=22,c=13;
//    tukar(a,b,c);
//	cout<<a<<" "<<b<<" "<<c<<endl;
//}

//int konversi(double& x, char from, char to){
//    if(from == 'c' && to == 'f'){
//        x = (9.0/5.0) * x + 32;
//    }
//	else if(from == 'c' && to == 'k'){
//        x += 273.15;
//    }
//	else if(from == 'c' && to == 'r'){
//        x = (4.0/5.0) * x;
//    }
//	else if(from == 'f' && to == 'c'){
//        x = (5.0/9.0) * (x - 32);
//    }
//	else if(from == 'f' && to == 'k'){
//        x = (5.0/9.0) * (x - 32) + 273.15;
//    }
//	else if(from == 'f' && to == 'r'){
//        x = (4.0/9.0) * (x - 32);
//    }
//	else if(from == 'k' && to == 'c'){
//        x -= 273.15;
//    }
//	else if(from == 'k' && to == 'f'){
//        x = (9.0/5.0) * (x - 273.15) + 32;
//    }
//	else if(from == 'k' && to == 'r'){
//        x = (4.0/5.0) * (x - 273.15);
//    }
//	else if(from == 'r' && to == 'c'){
//        x = x / 0.8;
//    }
//	else if(from == 'r' && to == 'f'){
//        x = (2.25 * x) + 32;
//    }
//	else if(from == 'r' && to == 'k'){
//        x = (x / 0.8) + 273.15;
//    }
//}
//
//int main(){
//	double suhu=10;
//    konversi(suhu,'k','r');
//    cout<<suhu;
//}

double jarak(double x1, double y1, double x2, double y2){
	double jarak1 = x2 - x1;
	double jarak2 = y2 - y1;
	double jarak = sqrt(jarak1*jarak1 + jarak2*jarak2);
	return jarak;
}

int main(){
	cout<<jarak(0,0,3,4);
}
