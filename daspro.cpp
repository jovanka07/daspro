#include <iostream>
using namespace std;
/*Tugas Kelompok 3, restoran
Anggota kelompok :
1. Faizal Azzriel Gibar 2205719
2. Rofi'ul Himam 2206231
3. Jovanka Alexandro 2206407
4. Nadila putri p 2209757 */



//pelanggan
//menu
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
    int memilihJumblahMenu;
    int daftarMenu = 2;
    int metodePembayaran;

    string menu[100];
    string namaPelanggan;
    cout << "\t\t\t\t A/n Pelanggan ? ";
    cin >> namaPelanggan;

    cout << "\t\t\t\t Pelanggan dengan A/n : " << namaPelanggan << endl;

    //input jumblah menu yang ingin di pesan (Lakukan pengulangan)

    cout<<"\t\t\t\t    <--------(MENU)-------->\n";
    cout<<"\t\t\t\t    1.Mie\n";
    cout<<"\t\t\t\t    2.Batagor\n";
    cout<<"\t\t\t\t    3.Baso \n";
    cout << "\t\t\t\t Ingin memilih berapa menu? "  ;
    cin >> memilihJumblahMenu;

    for(int i = 0 ; i < memilihJumblahMenu ; i++){
        //Pilih menu yang sudah terserdia
        cout << "Pilih menu :";
        cin >> pilihMenu[i];

        if(pilihMenu[i] <= memilihJumblahMenu +1){
            switch(pilihMenu[i]) {
                case 1 :
                    menu[i] = "mie";
                    hargaMenu[i] = 12000;
                    break;
                case 2 :
                    menu[i] = "batagor";
                    hargaMenu[i] = 10000;
                break;
                case 3 :
                    menu[i] = "baso";
                    hargaMenu[i] = 5000;
                break;
                default : menu[i] = ""; hargaMenu[i] = 0;
                cout<<"tidak ada menu\n";
            }
                //pilih jumblah menu
                cout << "jumblah porsi " << menu[i] << " :";
                cin >> jumblah[i];
                cout << endl;

            //kalikan jumblah menu dengan harga
            totalPembayaran[i] = jumblah[i] * hargaMenu[i];

            //pilih jumblah menu sesuai dengan inputan jika sudah selesai maka hitung total harga keseluruhan
            totalBayar += totalPembayaran[i];


        }else{
            //jika menu tidak ada maka output = "menu tidak tersedia
            cout << "gagal" << endl;
        }
    }
            //Pilih metode pembayaran
            cout<<"\t\t\t\t    1.Dana\n";
            cout<<"\t\t\t\t    2.Ovo\n";
            cout<<"\t\t\t\t    3.LinkAja \n";
            cout<<"\t\t\t\t    4.Jenius \n";
            cout<<"\t\t\t\t    Pilih metode pembayaran anda ";
            cin >> metodePembayaran;
            if(metodePembayaran == 1){
                //Output nama + total pembayaran + metode pembayaran
                cout << "Hii " << namaPelanggan << endl;
                cout << "Jumblah total pesanan anda : " << totalBayar << endl <<" dan metode pembayaran anda : " << "Dana" << endl;
            }else if(metodePembayaran == 2){
                //Output nama + total pembayaran + metode pembayaran
                cout << "Hii " << namaPelanggan << endl;
                cout << "Jumblah total pesanan anda : " << totalBayar << endl <<  " dan metode pembayaran anda : " << "Ovo" << endl;
            }else if(metodePembayaran == 3){
                //Output nama + total pembayaran + metode pembayaran
                cout << "Hii " << namaPelanggan << endl;
                cout << "Jumblah total pesanan anda : " << totalBayar << endl << " dan metode pembayaran anda : " << "LinkAja" << endl;
            }else if(metodePembayaran == 4){
                //Output nama + total pembayaran + metode pembayaran
                cout << "Hii " << namaPelanggan << endl;
                cout << "Jumblah total pesanan anda : " << totalBayar << endl << " dan metode pembayaran anda : " << "Jenius" << endl;
            }else{
                cout << "\t\t\t\t Metode pembayaran tidak tersedia";
            }




}

//Sequential search
void cari_menu(){
    string pilihMakanan;
    string hasil;
    string makanan[3] = {"mie", "batagor", "baso"};
    cout << "Input nama Menu yang dicari - " ;
    cin >> pilihMakanan;


    //Looping array terlebih dahulu
    for(int i = 0 ; i < 3; i++)
    {
        //cout << makanan[i] << endl;
        if(pilihMakanan == makanan[i]){
            //Masukan data makanan yang benar kedalam variable
            hasil = makanan[i];
        }
    }

    //Penkondisian hasil pilih makanan dan hasil data yang benar
    if(pilihMakanan == hasil ){
            for(int i = 0 ; i < 3; i++)
            {
                cout << makanan[i] << endl;
            }
        //Jika benar
        cout << "Menu di temukan - " << hasil << endl;
    }else{
        //Jika salah
        cout << "Menu tidak di temukan pada -" << pilihMakanan << endl;
    }
}

void profil(){
    int a;
    string lagi;
    do{
        system("cls");
        cout<<"\t\t\t\tTentang karyawan Restoran, kelompok 3\n";
        cout<<"\t\t\t\t1.Faizal\n";
        cout<<"\t\t\t\t2.Rofi'ul\n";
        cout<<"\t\t\t\t3.Jovanka\n";
        cout<<"\t\t\t\t4.Nadila\n";
        cout<<"\t\t\t\tSilahkan ingin lihat yang mana(1-4) ";
        cin>>a;
        switch(a){
            case 1 :
                system("cls");
                cout<<"\t\t\t\tnama lengkap: Faizal Azzriel Gibar\n";
                cout<<"\t\t\t\tnama panggilan: Paisal\n";
                cout<<"\t\t\t\tNIM: 2205719\n";
                break;
            case 2 :
                system("cls");
                cout<<"\t\t\t\tnama lengkap: Rofi'ul Himam\n";
                cout<<"\t\t\t\tnama panggilan: Rofi\n";
                cout<<"\t\t\t\tNIM: 2206231\n";
                break;
            case 3 :
                system("cls");
                cout<<"\t\t\t\tnama lengkap: Jovanka Alexandro\n";
                cout<<"\t\t\t\tnama panggilan: Jovan\n";
                cout<<"\t\t\t\tNIM: 2206407\n";
                break;
            case 4 :
                system("cls");
                cout<<"\t\t\t\tnama lengkap: Nadila Putri Prihanita\n";
                cout<<"\t\t\t\tnama panggilan: Nadila\n";
                cout<<"\t\t\t\tNIM: 2209757\n";
                break;
            default :
                cout<<"\t\t\t\tkaryawan tidak ditemukan\n";
    }
        cout<<"\t\t\t\t    Lagi?(y/n) ";
        cin>>lagi;
    }
    while(lagi == "y");
}

void LogOut(){
    cout<<"\t\t\t\t<<<<<<<(Anda Berhasil Log Out)>>>>>>>>\n";
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
            break;
        }
        else if(i==0){
           cout<<"anda tidak diperkenankan masuk!\n";
            return 0;
            break;
        }

    cout<<"Login salah! Kesempatan Anda "<< i <<" kali lagi\n";
    }

    do {
    system("cls");
        cout<<"\t\t\t\t====================================\n";
        cout<<"\t\t\t\t=== RESTORAN - APP ===\n";
        cout<<"\t\t\t\t====================================\n";
        cout<<"\t\t\t\t    <--------(MENU)-------->\n";
        cout<<"\t\t\t\t    1.Pesan makanan dan minuman\n";
        cout<<"\t\t\t\t    2.metode pembayaran\n";
        cout<<"\t\t\t\t    3.profil karyawan restoran \n";
        cout<<"\t\t\t\t    4.Cari menu\n";
        cout<<"\t\t\t\t    5.Logout\n";
        cout<<"\t\t\t\t    silahkan pilih menu(1-4): ";
        cin>>menu;
        switch(menu) {
            case 1 :
                system("cls");
                memilih_menu();
                break;
            case 2 : ;
            break;
            case 3 :
                system("cls");
                profil();
            break;
            case 4 :
                system("cls");
                cari_menu();
            break;
            case 5 :
                system("cls");
                LogOut();
                return 0;
                break;
            default :
                cout<<"\t\t\t\t    tidak ada menu\n";
        }
        cout<<"\t\t\t\t    Lanjut? (y/n) ";
        cin>>ulang;
    }
    while(ulang == "y");
    system("cls");
    cout<<"\t\t\t\t<<<<<<<(Anda Berhasil Log Out)>>>>>>>>\n";
    return main();

}
