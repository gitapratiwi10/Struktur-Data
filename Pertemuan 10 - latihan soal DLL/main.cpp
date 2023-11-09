#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
};

node *head;
node *tail;

void awal(){
    head = NULL;
    tail = NULL;
}

bool isEmpty(){
    if(head==NULL){
        return true;
    }else{

        return false;
    }
}

void tambahDepan(int dataBaru){
    node *nodeBaru;
    nodeBaru = new node;

    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;
    if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head->next = NULL;
        head->prev = NULL;
    }else{
        nodeBaru->next = head;
        head->prev = nodeBaru;
        head = nodeBaru;
    }
    cout << dataBaru << " berhasil di tambahkan!" << endl;
}

void tampil(){
    node *current;

    if(isEmpty()){
        cout << "Belum ada DLL!" << endl;
    }else{
        for(current = head; current !=NULL; current = current->next){
        cout << " <- " << current->data << " -> ";
    }
    cout << endl;
    }
}

void tmbhBlkg(int dataBaru){
     node *nodeBaru;
    nodeBaru = new node;

    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;
    if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head->next = NULL;
        head->prev = NULL;
    }else{
        tail->next = nodeBaru;
        nodeBaru->prev = tail;
        tail = nodeBaru;

    }
    cout << dataBaru << " berhasil di tambahkan!" << endl;
}

void hapusBlkg(){
    node *dihapus;

    if(isEmpty()){
        cout << "Kosong yaaaaa, Tidak ada yang diHapus" << endl;
    }else{
        if(head->next != NULL){
            dihapus = tail;
            tail = tail->prev;
            tail->next = NULL;
        }else{
            head = NULL;
            tail = NULL;
        }
    }
    cout << "Node Paling Belakang telah terhapus" << endl;
}

void hapusDpn(){
     node *dihapus;

    if(isEmpty()){
        cout << "Kosong yaaaaa, Tidak ada yang diHapus" << endl;
    }else{
        if(head->next != NULL){
           head = head->next;
           head->prev = NULL;

        }else{
            head = NULL;
            tail = NULL;
        }
    }
    cout << "Node Paling Depan telah terhapus" << endl;
}


int main()
{
    awal();
    tambahDepan(2);
     tampil();
    tambahDepan(10);
     tampil();
    tambahDepan(31);
    tampil();

    tmbhBlkg(15);
    tampil();

    hapusBlkg();
    tampil();

    hapusDpn();
    tampil();

    return 0;
}
