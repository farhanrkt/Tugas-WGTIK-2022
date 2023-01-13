#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define nil NULL
#define next(P) P->next
#define info(P) P->info

using namespace std;

struct dataSLL {
//sesuaikan dengan data yang Anda dapatkan sesuai soal
    int id_order;
    string nama;
    int jml_baju;
    bool member;
};

typedef dataSLL infotype;

typedef struct Elmt *adrsll;

struct Elmt{
    infotype info;
    adrsll next;
};

struct List{
    adrsll first;
};


void createNewList_1304202025(List &L);
void insertLast_1304202025(List &L, adrsll p);
void insertFirst_1304202025(List &L, adrsll p);
void deleteFirst_1304202025(List &L, adrsll &p);
void deleteLast_1304202025(List &L, adrsll &p);
adrsll newElementList_1304202025(infotype m);
void addNElementList_1304202025(List &L, int N);
void showAll_1304202025(List L);
//.... judul fungsi yang harus Anda buat sesuai soal
void jmlBaju_1304202025(List L, int &baju);
void dataLaundry_1304202025(List &L);
void splitData_1304202025(List &L, List &R);

#endif // SLL_H_INCLUDED

