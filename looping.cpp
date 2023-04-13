#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }



    int angka;

    cout << "Masukkan angka (0 untuk berhenti): ";
    cin >> angka;

    while(angka != 0)
    {
        cout << angka << " ";
        cout << "Masukkan angka (0 untuk berhenti): ";
        cin >> angka;
    }
    
    
    do
    {
        cout << "Masukkan angka (0 untuk berhenti): ";
        cin >> angka;

        cout << angka << " ";

    } while(angka != 0);

    return 0;
}

