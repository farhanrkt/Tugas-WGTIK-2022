#include "SLL.h"


void createNewList(List &L){
    first(L) = NULL;
}


adrsll newElementList(infotype m){
    adrsll p;

    p = new Elmt;
    info(p) = m;
    next(p) = NULL;
    return p;
}


void insertFirst(List &L, adrsll p){
//cek soal apakah Anda perlu membuat procedure ini, jika tidak maka hapus procedure ini agar tidak menimbulkan error

    adrsll x;

    if (first(L) == NULL){
        first(L) = p;
    } else {
        ...............
        ...............
        ...............
    }

}

void deleteFirst(List &L, adrsll &p){
//cek soal apakah Anda perlu membuat procedure ini, jika tidak maka hapus procedure ini agar tidak menimbulkan error

    if (first(L) == NULL){
        cout << "List kosong" << endl;
    } else {
        if (next(first(L)) == NULL){
            ..................;
            first(L) = nil;
        } else {
            p = first(L);
            first(L) = ..............;
        }
    }
}

void deleteLast(List &L, adrsll &p){
//cek soal apakah Anda perlu membuat procedure ini, jika tidak maka hapus procedure ini agar tidak menimbulkan error

    if (first(L) == NULL){
        cout << "List kosong" << endl;
    } else {
        if (next(first(L)) == NULL){
            p = .........;
            first(L) = .......;
        } else {
            adrsll q;
            p = first(L);
            while (.......................){
                q = .............;
                p = .............;
            }
            next(q) = ............;
        }
    }
}


void showAll(List L){
    adrsll p;

    if (first(L)!=NULL){
        p = first(mList);
        while (p != NULL){
            cout << "No. " << info(p).nomor << " : "<< info(p).nama << endl;
            p = next(p);
        }
    } else {
        cout << "Tidak ada masakan yang dapat ditampilkan." << endl;
    }
}

void addNElementList(List &L, int N){
...................................
...................................
...................................
}

//Buatlah procedure insert N element
void addNElementList(List &L, int N){




