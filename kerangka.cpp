#include <iostream>
using namespace std;

float harga(int kuant, int harga){
    return kuant * harga;
}
int main(){
    int pilih_1;
    int pilihan;
    loop_menu :
    cout << "Menu" << endl;
    cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "Masukan Pilihan 1-3 : " ;
    cin >> pilihan;
    switch (pilihan)
    {
    case 1 :
    cout << "1" << endl;
    loop_1 :
        cout << "Menu" << endl;
        cout << "1. fas" << endl;
        cout << "2. fas" << endl;
        cout << "3. fass" << endl;
        cout << "4. Kembali" << endl;
        cout << "Masukan Pilihan 1-3 : " ;
        cin >> pilih_1;
        if(1){
            cout << "Fasilitas 1\n";
            cout << "Fasilitas 2\n";
            cout << "Fasilitas 3\n";
            cout << "Fasilitas 4\n";
        }
        else if(2){
            cout << "Fasilitas 1\n";
            cout << "Fasilitas 2\n";
            cout << "Fasilitas 3\n";
            cout << "Fasilitas 4\n";
        }
        else if(3){
            cout << "Fasilitas 1\n";
            cout << "Fasilitas 2\n";
            cout << "Fasilitas 3\n";
            cout << "Fasilitas 4\n";
        }
        else if(4){
            cout << "Kembali ke Menu \n";
        }
        else{
            goto loop_1;
        }
        break;
    case 2 :
    int pilih_harga;
    int jmlh_kamar;
    loop_room_3 :
    cout << "Menu Harga :\n";
    cout << "1. Standar : 200000\n";
    cout << "2. Deluxe : 500000\n";
    cout << "Masukan pilihan :";
    cin >> pilih_harga;
    cout << "jumlah kamar : ";
    cin >> jmlh_kamar;
    if (1){
        cout << "Harga :" << harga(jmlh_kamar, 200000) << endl;
    }
    else if (1){
        cout << "Harga :" << harga(jmlh_kamar, 500000) << endl;
    }
    else{
        cout << "anda salah input\n";
        goto loop_room_3;
    }
    break;
    case 3 :
    string layanan_tambahan;
    cout << "Masukan Tambahan Layanan :" << endl;
    
    default:
    cout << "Maaf anda salah input"<< endl;
    goto loop_menu;
        break;
    }

}
