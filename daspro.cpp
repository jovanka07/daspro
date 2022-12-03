#include <iostream>
using namespace std;
/*Tugas Kelompok 3, restoran
Anggota kelompok :
1. Faizal Azzriel Gibar 2205719
2. Rofi'ul Himam 2206231
3. Jovanka Alexandro 2206407
4. Nadila putri p 2209757 */



//Kategori
//menu
//pelanggan
//metode pembayaran
void nama_pelanggan(){
    string namaPelanggan;
    cout << "A/n Pelanggan ? ";
    cin >> namaPelanggan;

    cout << "Pelanggan dengan A/n : " << namaPelanggan << endl;
}

void memilih_menu(){
    int pilihMenu[100];
    int jumblah[100];
    int totalPembayaran[100];
    int hargaMenu[100];
    int totalBayar;
    int daftarMenu = 2;

    string menu[100];

    for(int i = 0 ; i <= 2 ; i++){
        cout << "Pilih menu :";
        cin >> pilihMenu[i];

        if(pilihMenu[i] <= 4 ){
            switch(pilihMenu[i]){
                case 1 : menu[i] = "mie";
                        hargaMenu[i] = 12000;
                break;
                case 2 : menu[i] = "batagor";
                        hargaMenu[i] =10000;
                break;
                default : menu[i] = "" ; hargaMenu[i] = 0;
            }

            if(pilihMenu[i] >= daftarMenu){
                cout << "Gagal";
            }else{
                cout << "jumblah porsi " << menu[i] << " :";
                cin >> jumblah[i];
                cout << endl;
            }

            totalPembayaran[i] = jumblah[i] * hargaMenu[i];
            totalBayar += totalPembayaran[i];

        }else{
            cout << "gagal" << endl;
        }
    }

}


void cari_menu(){
    string pilihMakanan;
    string hasil;
    string makanan[2] = {"mie", "batagor"};
    cout << "Input nama makanan yang dicari - " ;
    cin >> pilihMakanan;


    //Looping array terlebih dahulu
    for(int i = 0 ; i < 2; i++)
    {
        //cout << makanan[i] << endl;
        if(pilihMakanan == makanan[i]){
            //Masukan data makanan yang benar kedalam variable
            hasil = makanan[i];
        }
    }

    //Penkondisian hasil pilih makanan dan hasil data yang benar
    if(pilihMakanan == hasil ){
            for(int i = 0 ; i < 2; i++)
            {
                cout << makanan[i] << endl;
            }
        //Jika benar
        cout << "Makanan di temukan - " << hasil << endl;
    }else{
        //Jika salah
        cout << "Makanan tidak di temukan pada -" << pilihMakanan << endl;
    }



int main(){
    int menu;
    string ulang;
    for(int i = 2; i >= 0; --i){

        cout<<"\n";
        cout<<"\t\t\t\t)----------Silahkan Login------------(\n";
        cout<<"\n";

        string username;
        string pass;
        string usernameBenar;
        string passBenar;

        cout<<"username: "; cin>>username;
        cout<<"Password: "; cin>>pass;

        passBenar="restoran";
        usernameBenar="kelompok3";
        system("cls");

        if(pass==passBenar&&username==usernameBenar){
            cout<<"selamat datang\n";
            cout << "Menu mie & batagor" << endl;
            nama_pelanggan();
            memilih_menu();
            break;
        }
        else if(i==0){
           cout<<"anda tidak diperkenankan masuk!\n";
            return 0;
            break;
        }

    cout<<"Login salah! Kesempatan Anda "<< i <<" kali lagi\n";
    }

}
