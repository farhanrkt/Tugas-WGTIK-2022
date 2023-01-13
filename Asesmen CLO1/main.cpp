#include <iostream>
#include "SLL.h"


using namespace std;

int main()
{
    List L, R;
    int N;
    int pilihan;
    adrsll P;
    int baju;


    createNewList_1304202025(L);
    createNewList_1304202025(R);

    cekpoin:
    cout << "Menu" << endl;
    cout << "1. Tambah data" <<endl;
    cout << "2. lihat semua data" << endl;
    cout << "3. Hapus data terakhir" <<endl;
    cout << "4. Jumlah baju di dalam list" <<endl;
    cout << "5. data baju kurang dari 5 dan member" << endl;
    cout << "0. selesai" <<endl;


    cin >> pilihan;

    switch(pilihan){
        case 1 :
            cout << "Masukkan Banyak Data : " <<endl;
            cin >> N;
            addNElementList_1304202025(L, N);
            goto cekpoin;
        case 2 :
             showAll_1304202025(L);
             goto cekpoin;

        case 3:
            deleteLast_1304202025(L, P);
            cout << "data telah berhasil dihapus" << endl;
            goto cekpoin;

        case 4:
            jmlBaju_1304202025(L, baju);
            cout << "jumlah baju adalah : " << baju <<endl;

        case 5:
            dataLaundry_1304202025(L);
            goto cekpoin;

        case 0:
            system("cls");

    }









}
