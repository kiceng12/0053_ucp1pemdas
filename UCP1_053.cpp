//1.
//2,
//3.struct alamat 
//4.
//5. four (int, i = 0 ; i 
//   cout << arr[i] << " ";
     



#include <iostream>
using namespace std;

string nama;
int nAsroni, nLia, nJoko;
int hAsroni = 80, hLia = 80, hJoko = 70;

void input() {
    cout << "Status : ";
    cin >> nama;
    cout << "Diterima: ";
    cin >> nAsroni;

    cout << "Diterima: ";
    cin >> nLia;

    cout << "Ditolak: ";
    cin >> nJoko;

}

int Totalnilai() {
    return (nAsroni * hAsroni) + (nLia * hLia) + (nJoko * hJoko);
}

void Display() {
    cout << "Total Nilai : " << Totalnilai() << endl;
}

int main() {
    char pilihan;
    do {
    input();
    Display();
    cout << "Apakah akan mengulang program atau tidak ";
    cin >> pilihan;
    }while (pilihan == 'y' || pilihan == 'Y');
}


