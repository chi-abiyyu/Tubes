#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // Variabel

    char pilihan_awal;

    cout << "Get a Room\n";
    cout << "\n\nMulai (Yes/No)\n\n";
    cin >> pilihan_awal;

    if (pilihan_awal == 'y' || pilihan_awal == 'Y')
    {
        int pilih_menu;

    loop_menu:
        cout << "_____MENU________\n";
        cout << "1. Hotel dan Fasilitas\n";
        cout << "2. Buat Pesanan\n";
        cout << "3. Bantuan\n";
        cout << "Masukan Pilihan Anda (1-3) : \n";
        cin >> pilih_menu;

        switch (pilih_menu)
        {
        case 1:
        {
            int pilihan_menu_hotel;
        loop_menu_hotel:
            cout << "Pilihan Hotel\n";
            cout << "1. Hotel Permen\n";
            cout << "2. Hotel Donat\n";
            cout << "3. Hotel Coklat\n";
            cout << "4. Kembali ke Menu \n";
            cout << "Masukan Pilihan Anda (1-4) : ";
            cin >> pilihan_menu_hotel;
                        switch (pilihan_menu_hotel)
            {
            case 1:
            {
            loop_hotel_permen:
                int pilihan_menu_hotel;
                cout << "          Hotel Permen\n";
                cout << "---------------------------------\n";
                int harga_kamar[3] = {200000, 500000, 800000};
                string jenis_kamar[3] = {"Single Room", "Double Room", "Suite Room"};
                string fasilitas_kamar[3] = {
                    "Kasur Single, Selimut, Bantal, Wifi, Meja, Set Alat Mandim AC, WC Dalam, Set Alat Mandi",
                    "Kasur Single Besar, Selimut, Bantal, Wifi, Meja Rias, Kursi, Televisi, AC, WC Dalam, Set Alat Mandi",
                    "Kasur Double, Selimut, Set Bantal, Wifi, Meja Rias, Kursi, Televisi, Sofa, WC Dalam, Set Alat Mandi,  ....."};

                cout << "1. Daftar Harga\n";
                cout << "2. Fasilitas Kamar\n";
                cout << "0. Kembali Ke Menu Awal\n";
                cout << "Pilihan Anda : ";
                cin >> pilihan_menu_hotel;
                if (pilihan_menu_hotel == 1)
                {
                    for (int i = 0; i < 1; i++)
                    {
                        cout << "No.\tJenis Kamar\tHarga" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            cout << i + 1 << "\t" << jenis_kamar[i] << "\t" << harga_kamar[i] << endl
                                 << endl;
                        }
                    }
                    goto loop_hotel_permen;
                }
                else if (pilihan_menu_hotel == 2)
                {
                    for (int i = 0; i < 1; i++)
                    {
                        cout << "No.\tJenis Kamar\tHarga" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            cout << i + 1 << "\t" << jenis_kamar[i] << "\t" << fasilitas_kamar[i] << endl
                                 << endl;
                        }
                    }
                    goto loop_hotel_permen;
                }
                else if (pilihan_menu_hotel == 0)
                {
                    goto loop_menu_hotel;
                }
                else
                {
                    cout << "Anda Salah Input\n";
                    cout << "Silahkan Ulangi Kembali\n";
                    goto loop_hotel_permen;
                }
            }
            break;
            case 2:
            {
            loop_hotel_donat:
                int pilihan_menu_hotel;
                cout << "          Hotel \n";
                cout << "---------------------------------\n";
                int harga_kamar[3] = {200000, 500000, 800000};
                string jenis_kamar[3] = {"Single Room", "Double Room", "Suite Room"};
                string fasilitas_kamar[3] = {
                    "Kasur Single, Selimut, Bantal, Wifi, Meja, Set Alat Mandim AC, WC Dalam, Set Alat Mandi",
                    "Kasur Single Besar, Selimut, Bantal, Wifi, Meja Rias, Kursi, Televisi, AC, WC Dalam, Set Alat Mandi",
                    "Kasur Double, Selimut, Set Bantal, Wifi, Meja Rias, Kursi, Televisi, Sofa, WC Dalam, Set Alat Mandi,  ....."};

                cout << "1. Daftar Harga\n";
                cout << "2. Fasilitas Kamar\n";
                cout << "0. Kembali Ke Menu Awal\n";
                cout << "Pilihan Anda : ";
                cin >> pilihan_menu_hotel;
                if (pilihan_menu_hotel == 1)
                {
                    for (int i = 0; i < 1; i++)
                    {
                        cout << "No.\tJenis Kamar\tHarga" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            cout << i + 1 << "\t" << jenis_kamar[i] << "\t" << harga_kamar[i] << endl
                                 << endl;
                        }
                        goto loop_hotel_donat;
                    }
                }
                else if (pilihan_menu_hotel == 2)
                {
                    for (int i = 0; i < 1; i++)
                    {
                        cout << "No.\tJenis Kamar\tHarga" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            cout << i + 1 << "\t" << jenis_kamar[i] << "\t" << fasilitas_kamar[i] << endl
                                 << endl;
                        }
                    }
                    goto loop_hotel_donat;
                }
                else if (pilihan_menu_hotel == 0)
                {
                    goto loop_menu_hotel;
                }
                else
                {
                    cout << "Anda Salah Input\n";
                    cout << "Silahkan Ulangi Kembali\n";
                    goto loop_hotel_donat;
                }
            }
            break;
            case 3:
            {
            loop_hotel_coklat:
                int pilihan_menu_hotel;
                cout << "          Hotel Coklat\n";
                cout << "---------------------------------\n";
                int harga_kamar[3] = {200000, 500000, 800000};
                string jenis_kamar[3] = {"Single Room", "Double Room", "Suite Room"};
                string fasilitas_kamar[3] = {
                    "Kasur Single, Selimut, Bantal, Wifi, Meja, Set Alat Mandim AC, WC Dalam, Set Alat Mandi",
                    "Kasur Single Besar, Selimut, Bantal, Wifi, Meja Rias, Kursi, Televisi, AC, WC Dalam, Set Alat Mandi",
                    "Kasur Double, Selimut, Set Bantal, Wifi, Meja Rias, Kursi, Televisi, Sofa, WC Dalam, Set Alat Mandi,  ....."};

                cout << "1. Daftar Harga\n";
                cout << "2. Fasilitas Kamar\n";
                cout << "0. Kembali Ke Menu Awal\n";
                cout << "Pilihan Anda : ";
                cin >> pilihan_menu_hotel;
                if (pilihan_menu_hotel == 1)
                {
                    for (int i = 0; i < 1; i++)
                    {
                        cout << "No.\tJenis Kamar\tHarga" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            cout << i + 1 << "\t" << jenis_kamar[i] << "\t" << harga_kamar[i] << endl
                                 << endl;
                        }
                    }
                    goto loop_hotel_coklat;
                }
                else if (pilihan_menu_hotel == 2)
                {
                    for (int i = 0; i < 1; i++)
                    {
                        cout << "No.\tJenis Kamar\tHarga" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            cout << i + 1 << "\t" << jenis_kamar[i] << "\t" << fasilitas_kamar[i] << endl
                                 << endl;
                        }
                    }
                    goto loop_hotel_coklat;
                }
                else if (pilihan_menu_hotel == 0)
                {
                    goto loop_menu_hotel;
                }
                else
                {
                    cout << "Anda Salah Input\n";
                    cout << "Silahkan Ulangi Kembali\n";
                    goto loop_hotel_coklat;
                }
            }
            break;
            case 4:
            {
                cout << "______________________________\n";
                goto loop_menu;
            }
            break;
            default:
            {
                cout << "Maaf Anda Salah Input\n";
                cout << "Silahkan Ulangi Pilihan Anda\n\n";
                goto loop_menu_hotel;
            }
            break;
            }
        }
        break; 
        case 2 :
        {
            string nama, check_out, check_in;
            int lama_inap;
            int jumlah_orang;
            getchar();
            cout << "Buat Pesanan\n";
            cout << "Masukan Nama : ";
            getline(cin, nama);
            cout << "Jumlah Orang : ";
            cin >> jumlah_orang;
            cout << "Lama Inap : ";
            cin >> lama_inap;
            getchar();
            cout << "Tanggal Check In Idd/mm/yy): ";
            getline(cin, check_in);
            cout << "Tanggal Check Out : ";
            getline(cin, check_out);
        }
        default:{}
        }
    }
    else
    {
        cout << "Terimakasih Telah Berkunjung";
            return 0;
    }
}
