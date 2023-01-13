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


void createNewList(List &L);
void insertLast(List &L, adrsll p);
void insertFirst(List &L, adrsll p);
void deleteFirst(List &L, adrsll &p);
void deleteLast(List &L, adrsll &p);
address newElementList(infotype m);
void addNElementList(List &L, int N);
void showAll(List L);
//.... judul fungsi yang harus Anda buat sesuai soal
void jmlBaju(List L, int &baju);
void dataLaundry(List L);

#endif // SLL_H_INCLUDED
