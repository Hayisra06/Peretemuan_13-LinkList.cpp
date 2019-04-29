#include <iostream>

using namespace std;
    
struct Mahasiswa{
                            //membuat tipe data struct yang berfunsi menyimpan beberapa tipe data yang berbeda.
    int no_peserta ;
    int NIM;
    char kelas;

    Mahasiswa*next;        //Nama_struct*next.
};

void printList(Mahasiswa*n)      //Membuat fungsi printList
{
    while (n!= NULL)       //syarat n tidak sama dengan NULL
    {
       
        cout<<"No Peserta : "<<n->no_peserta<<" "<<endl;
        cout<<"NIM        : "<<n->NIM<<" "<<endl;
        cout<<"Kelas      : "<<n->kelas<<" "<<endl;
        cout<< " "<<endl;

            //n-.data adalah sebuah variable yang akan di panggil
        n = n->next;
    }
}

int main ()
{
    Mahasiswa*head = NULL;
    Mahasiswa*second = NULL;  //pendeklarasian pointer next pada variabel
    Mahasiswa*third = NULL;

    head = new Mahasiswa();
    second = new Mahasiswa(); //membuat inisial baru pada struct
    third = new Mahasiswa();

    head->no_peserta = 01;
    head->NIM = 123;          //pemberian value pada inisial
    head->kelas = 'b';
    head->next = second;    //pointer untuk menunjuk pada inisial selanjutnya

    second->no_peserta = 02;
    second->NIM = 124;
    second->kelas = 'b';
    second->next = third;

    third->no_peserta = 03;
    third->NIM = 125;
    third->kelas = 'ba';
    third->next = NULL;

    printList(head);      //memanggil fungsi printList

    cin.get();
    return 0;
}
