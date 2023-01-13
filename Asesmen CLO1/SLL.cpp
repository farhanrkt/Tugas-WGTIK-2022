#include "SLL.h"


void createNewList_1304202025(List &L){
    first(L) = NULL;
}


adrsll newElementList_1304202025(infotype m){
    adrsll p;

    p = new Elmt;
    info(p) = m;
    next(p) = NULL;
    return p;
}


void insertFirst_1304202025(List &L, adrsll p){
//cek soal apakah Anda perlu membuat procedure ini, jika tidak maka hapus procedure ini agar tidak menimbulkan error

    adrsll x;

    if (first(L) == NULL){
        first(L) = p;
    } else {
        x = first(L);
        next(p) = x;
        first(L) = p;
    }

}


void deleteLast_1304202025(List &L, adrsll &p){
//cek soal apakah Anda perlu membuat procedure ini, jika tidak maka hapus procedure ini agar tidak menimbulkan error

    if (first(L) == NULL){
        cout << "List kosong" << endl;
    } else {
        if (next(first(L)) == NULL){
            p = first(L);
            first(L) = nil;
        } else {
            adrsll q;
            p = next(first(L));
            q = first(L);
            while (next(p) != nil){
                q = next(q);
                p = next(p);
            }
            next(q) = nil;
        }
    }
}


void showAll_1304202025(List L){
    adrsll p;

    if (first(L)!=NULL){
        p = first(L);
        while (p != NULL){
            cout << "No. " << info(p).id_order << " : "<< info(p).nama << endl;
            p = next(p);
        }
    } else {
        cout << "Tidak ada laundry yang dapat ditampilkan." << endl;
    }
}

void addNElementList_1304202025(List &L, int N){
    int id_order;
    string nama;
    int jml_baju;
    bool member;
    infotype m;
    adrsll p;

    int i = 0;

    while (i<N){
        cout << "Input ID order : " <<endl;
        cin >> id_order;
        cout << "Input Nama : " <<endl;
        cin >> nama;
        cout << "Input Jumlah baju : " <<endl;
        cin >> jml_baju;
        cout << "Member atau tidak (1 berarti iya 0 berarti tidak : " <<endl;
        cin >> member;
        m.id_order = id_order;
        m.nama = nama;
        m.jml_baju = jml_baju;
        m.member = member;
        p = newElementList_1304202025(m);
        insertFirst_1304202025(L, p);
        i++;
    }
}

void jmlBaju_1304202025(List L, int &baju){
    adrsll q;
    q = first(L);

    if (next(q) == nil){
        baju = baju + info(q).jml_baju;
    }

    while(next(q) != nil){
        baju = baju + info(q).jml_baju;
        q = next(q);
    }
}

void dataLaundry_1304202025(List &L){
    adrsll q;
    q = first(L);

    while(next(q) != nil){
        if((info(q).jml_baju) < 5){
            cout << "ID Order : " << info(q).id_order << endl;
            cout << "Nama : " << info(q).nama << endl;
            cout << "Jumlah baju : " << info(q).jml_baju << endl;
            cout << "Member : " << "True" << endl;
        }
        q = next(q);

    }
}
void splitData_1304202025(List &L, List &R){
    adrsll q;
    q = first(L);

    while(next(q) != nil){
        if(info(q).member == false){
            insertFirst_1304202025(R, q);
        }
        q = next(q);
    }
}

