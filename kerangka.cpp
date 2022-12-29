#include <iostream>
#include <string>

using namespace std;

long harga(int kuant, int harga, int inap)
{
    return kuant * harga * inap;
}

void tiket(string nama, string cek_in, string cek_out)
{
    cout << "--------------TIKER HOTEL BLABLABLA--------------\n";
    cout << "Nama Pemesan ; " << nama << endl;
    cout << "Tanggal Cek In : " << cek_in << endl;
    cout << "Tanggal Cek Out : " << cek_out << endl;
    cout << "__________________________________________________\n";
    cout << "                 Terimakasih ";
}

int main()
{
    int pilih;
    int pilihan;
    string nama;
    string cek_in;
    string cek_out;
    int inap;
    int pilih_harga;
    int jmlh_kamar;
    int standar = 200000;
    int deluxe = 500000;
loop_menu:
    cout << "Menu" << endl;
    cout << "1" << endl;
    cout << "2. Formulir" << endl;
    cout << "3" << endl;
    cout << "Masukan Pilihan 1-3 : ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:
    {
        cout << "1" << endl;
    loop_1:
        cout << "Menu" << endl;
        cout << "1. fas" << endl;
        cout << "2. fas" << endl;
        cout << "3. fass" << endl;
        cout << "4. Kembali" << endl;
        cout << "Masukan Pilihan 1-3 : ";
        cin >> pilih;
        if (pilih == 1)
        {
            cout << "Fasilitas 1\n";
            cout << "Fasilitas 2\n";
            cout << "Fasilitas 3\n";
            cout << "Fasilitas 4\n";
        }
        else if (pilih == 2)
        {
            cout << "Fasilitas 1\n";
            cout << "Fasilitas 2\n";
            cout << "Fasilitas 3\n";
            cout << "Fasilitas 4\n";
        }
        else if (pilih == 3)
        {
            cout << "Fasilitas 1\n";
            cout << "Fasilitas 2\n";
            cout << "Fasilitas 3\n";
            cout << "Fasilitas 4\n";
        }
        else if (pilih == 4)
        {
            cout << "Kembali ke Menu \n";
        }
        else
        {
            goto loop_1;
        }
        break;
    }
    case 2:
    {

        // Formulir
        // Identitas, Tanggal Chek Out n In, Jenis Kamar, Layanan Tambahan, Pembayaran
        cout << "Masukan Nama : ";
        getline(cin, nama);

        cout << "\nLama Inap : ";
        cin >> inap;

        getchar();

        cout << "Tanggak Cek In (dd/mm/yy): ";
        getline(cin, cek_in);

        cout << "Tangggal Cek Out (dd/mm/yy) : ";
        getline(cin, cek_out);

    loop_room_3:
        cout << "Jenis Kamar :\n";
        cout << "1. Standar\n";
        cout << "2. Deluxe\n";
        cout << "Masukan pilihan :";
        cin >> pilih_harga;
        if (pilih_harga == 1)
        {
            cout << "jumlah kamar : ";
            cin >> jmlh_kamar;
            cout << "Total : Rp." << harga(jmlh_kamar, standar, inap) << endl;
            tiket(nama, cek_in, cek_out);
        }
        else if (pilih_harga == 2)
        {
            cout << "jumlah kamar : ";
            cin >> jmlh_kamar;
            cout << "Harga :" << harga(jmlh_kamar, deluxe, inap) << endl;
            tiket(nama, cek_in, cek_out);
        }
        else
        {
            cout << "anda salah input\n";
            goto loop_room_3;
        }
        break;
    }
    default:
    {
        cout << "     Maaf Anda Salah Input   \n ";
        cout << "Harap Isi Ulang Dengan Benar \n";
        goto loop_menu;
    }
    }
}
