#include <iostream>

using namespace std;

struct Mahasiswa{
                            //membuat tipe data struct yang berfunsi menyimpan beberapa tipe data yang berbeda.

    int NIM;
    char kelas;

    Mahasiswa*next;        //Nama_struct*next.
};

void printListNext(Mahasiswa*n)      //Membuat fungsi printList
{
    while (n!= NULL)       //syarat n tidak sama dengan NULL
    {
         cout<< "Ini adalah pointer dari Next"<<endl;
        cout<<"NIM        : "<<n->NIM<<" "<<endl;
        cout<<"Kelas      : "<<n->kelas<<" "<<endl;
        cout<< " "<<endl;

            //n-.data adalah sebuah variable yang akan di panggil
        n = n->next;    //pointer yang di gunakan untuk menunjuk variabel setelahnya
    }
}
struct Mahasiswa2{
                            //membuat tipe data struct yang berfunsi menyimpan beberapa tipe data yang berbeda.
    int no;

    Mahasiswa2*prev;        //Nama_struct*next.
};
void printListPrev(Mahasiswa2*p)      //Membuat fungsi printList
{
    while (p!= NULL)       //syarat n tidak sama dengan NULL
    {
        cout<< "Ini adalah pointer dari Prev"<<endl;
        cout<<"no     : "<<p->no<<" "<<endl;
        cout<< " "<<endl;

            //p-.data adalah sebuah variable yang akan di panggil
        p = p->prev;      //pointer yang di gunakan untuk menunjuk variabel sebelumnya
    }
}
int main ()
{
    Mahasiswa*head = NULL;
    Mahasiswa*second = NULL;
    Mahasiswa*third = NULL;
     Mahasiswa*tambah = NULL;
    head = new Mahasiswa();
    second = new Mahasiswa();
    third = new Mahasiswa();
    tambah = new Mahasiswa();


    head->NIM = 123;
    head->kelas = 'b';
    head->next = second;

    second->NIM = 124;
    second->kelas = 'b';
    second->next = third;

    third->NIM = 125;
    third->kelas = 'b';
    third->next = NULL;
;
    tambah->next = head;


    Mahasiswa2*satu = NULL;
    Mahasiswa2*dua = NULL;
    Mahasiswa2*tiga = NULL;

    satu = new Mahasiswa2();
    dua = new Mahasiswa2();
    tiga = new Mahasiswa2();


    satu->no= 321;
    satu->prev = NULL;


    dua->no = 322;
    dua->prev = satu;


    tiga->no = 323;
    tiga->prev = dua;

    printListNext(head);
    printListPrev(tiga);

    cin.get();
    return 0;
}
