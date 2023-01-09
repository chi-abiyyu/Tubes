#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghasilnkan nilai harga yang harus dibayar
int total_harga(int kuant, int harga, int inap)
{
    return kuant * harga * inap;
}

// Fungsi ini untuk mencetak tixet (belum selesai)
void tiket(string nama, int room, string cek_in, string cek_out)
{
    cout << "--------------TIKER HOTEL BLABLABLA--------------\n";
    cout << "Nama Pemesan ; " << nama << endl;
    cout << "Nomer Kamar : " << room << endl;
    cout << "Tanggal Cek In : " << cek_in << endl;
    cout << "Tanggal Cek Out : " << cek_out << endl;
    cout << "__________________________________________________\n";
    cout << "                 Terimakasih ";
}

// Fungsi ini untuk mencetak invoice pemesanan
void invoice(string nama, string hotel, string jenis_kamar, int inap, string check_in, string check_out, int total, string bayar)
{
    cout << "------------INVOICE------------\n";
    cout << "Nama : " << nama << endl;
    cout << "Hotel : " << hotel << endl;
    cout << "Jenis Kamar : " << jenis_kamar << endl;
    cout << "Lama Inap : " << inap << endl;
    cout << "Check In : " << check_in << endl;
    cout << "Check Out : " << check_out << endl;
    cout << "Total : " << total << endl;
    cout << "Pembayaran : " << bayar << endl;
    cout << "--------------------------------\n";
}

int main()
{
    char start;

loop_start:
    cout << "Get a Room\n";

    cout << "Mulai (Yes)\n";
    cout << "Keluar (No)\n";
    cout << ">>> ";
    cin >> start;

    // jika input menggunakan Yes or yes maka lanjut ke if karena karakter awal Y atau y
    if (start == 'y' || start == 'Y')
    {
        int pilih_menu;

        // loop_menu untuk mengeksekusi kode yang ada dibawahnya

    loop_menu:

        // menu untuk pilihan menu aplikasi
        cout << "____MENU____\n";
        cout << "1. Hotel dan fasilitas\n";
        cout << "2. Buat Pesanan\n";
        cout << "3. Bantuan\n";
        cout << "4. Keluar\n";
        cout << "Masukkan Pilihan Anda (1-4) : ";
        cin >> pilih_menu;

        switch (pilih_menu)
        {
        case 1:
        {
            int pilihan_menu_hotel;
        loop_menu_hotel:
            cout << "Pilihan Hotel\n";
            cout << "1. Hotel Le Estate\n";
            cout << "2. Hotel Le Royale\n";
            cout << "3. Hotel Les Summit\n";
            cout << "4. Kembali Ke Menu\n";
            cout << "Masukan Pilihan Anda (1-4) : ";
            cin >> pilihan_menu_hotel;
            switch (pilihan_menu_hotel)
            {
            case 1:
            {
            loop_menu_estate:

                // Dibawah ini untuk melakukan perulangan program
                int pilihan_menu_hotel;
                cout << "        Hotel Le Estate\n";
                cout << "------------------------------\n";

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk harga kamar
                int harga_kamar[3] = {200000, 500000, 800000};

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk jenis kamar
                string jenis_kamar[3] = {"Standar Room", "Deluxe Room", "Suite Room"};

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk fasilitas_kamar
                string fasilitas_kamar[3] =
                    {
                        "Kasur Single, Selimut, Bantal, Wifi, Lemari Single, Set Alat Mandim AC, WC Dalam, Set Alat Mandi",
                        "Kasur Single Besar, Selimut, Bantal, Wifi, Meja Rias, Kursi, Televisi, AC, WC Dalam, Set Alat Mandi ",
                        "Kasur Double, Selimut, Set Bantal, Wifi, Meja Rias, Kursi, Televisi, Sofa, WC Dalam, Set Alat Mandi,...."};

                // Dibawah ini untuk membuat menu daftar menu dari pilihan hotel permen
                cout << "1. Daftar Harga\n";         // ini buat if == 1
                cout << "2. Fasilitas Kamar\n";      // if == 2
                cout << "3. Kembali Ke Menu Awal\n"; // if == 2
                cout << "Pilihan Anda (1-3) : ";
                cin >> pilihan_menu_hotel;

                // Dibawah ini untuk pilihan dari menu diatas
                if (pilihan_menu_hotel == 1)
                {
                    cout << "Daftar harga kamar" << endl;

                    for (int i = 0; i < 1; i++)
                    {
                        cout << "No.\tJenis Kamar\tHarga" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            cout << i + 1 << "\t" << jenis_kamar[i] << "\t" << harga_kamar[i] << endl
                                 << endl;
                        }
                    }
                    goto loop_menu_estate;
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
                    goto loop_menu_estate;
                }
                else if (pilihan_menu_hotel == 3)
                {
                    goto loop_menu_hotel;
                }
                else
                {
                    cout << "Anda Salah Input\n";
                    cout << "Silahkan Ulangi Kembali\n";
                    goto loop_menu_estate;
                };
            }
            break;

            case 2:
            {
            loop_menu_royale:

                // Dibawah ini untuk melakukan perulangan program
                int pilihan_menu_hotel;
                cout << "        Hotel Le Estate\n";
                cout << "------------------------------\n";

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk harga kamar
                int harga_kamar[3] = {200000, 500000, 800000};

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk jenis kamar
                string jenis_kamar[3] = {"Standar Room", "Deluxe Room", "Suite Room"};

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk fasilitas_kamar
                string fasilitas_kamar[3] =
                    {
                        "Kasur Single, Selimut, Bantal, Wifi, Lemari Single, Set Alat Mandim AC, WC Dalam, Set Alat Mandi",
                        "Kasur Single Besar, Selimut, Bantal, Wifi, Meja Rias, Kursi, Televisi, AC, WC Dalam, Set Alat Mandi ",
                        "Kasur Double, Selimut, Set Bantal, Wifi, Meja Rias, Kursi, Televisi, Sofa, WC Dalam, Set Alat Mandi,...."};

                // Dibawah ini untuk membuat menu daftar menu dari pilihan hotel permen
                cout << "1. Daftar Harga\n";         // ini buat if == 1
                cout << "2. Fasilitas Kamar\n";      // if == 2
                cout << "3. Kembali Ke Menu Awal\n"; // if == 2
                cout << "Pilihan Anda (1-3) : ";
                cin >> pilihan_menu_hotel;

                // Dibawah ini untuk pilihan dari menu diatas
                if (pilihan_menu_hotel == 1)
                {
                    cout << "Daftar harga kamar" << endl;

                    for (int i = 0; i < 1; i++)
                    {
                        cout << "No.\tJenis Kamar\tHarga" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            cout << i + 1 << "\t" << jenis_kamar[i] << "\t" << harga_kamar[i] << endl
                                 << endl;
                        }
                    }
                    goto loop_menu_royale;
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
                    goto loop_menu_royale;
                }
                else if (pilihan_menu_hotel == 3)
                {
                    goto loop_menu_hotel;
                }
                else
                {
                    cout << "Anda Salah Input\n";
                    cout << "Silahkan Ulangi Kembali\n";
                    goto loop_menu_royale;
                };
            }
            break;
            case 3:
            {
            loop_menu_summit:

                // Dibawah ini untuk melakukan perulangan program
                int pilihan_menu_hotel;
                cout << "        Hotel Les Summit\n";
                cout << "------------------------------\n";

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk harga kamar
                int harga_kamar[3] = {200000, 500000, 800000};

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk jenis kamar
                string jenis_kamar[3] = {"Standar Room", "Deluxe Room", "Suite Room"};

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk fasilitas_kamar
                string fasilitas_kamar[3] =
                    {
                        "Kasur Single, Selimut, Bantal, Wifi, Lemari Single, Set Alat Mandim AC, WC Dalam, Set Alat Mandi",
                        "Kasur Single Besar, Selimut, Bantal, Wifi, Meja Rias, Kursi, Televisi, AC, WC Dalam, Set Alat Mandi ",
                        "Kasur Double, Selimut, Set Bantal, Wifi, Meja Rias, Kursi, Televisi, Sofa, WC Dalam, Set Alat Mandi,...."};

                // Dibawah ini untuk membuat menu daftar menu dari pilihan hotel permen
                cout << "1. Daftar Harga\n";         // ini buat if == 1
                cout << "2. Fasilitas Kamar\n";      // if == 2
                cout << "3. Kembali Ke Menu Awal\n"; // if == 2
                cout << "Pilihan Anda (1-3) : ";
                cin >> pilihan_menu_hotel;

                // Dibawah ini untuk pilihan dari menu diatas
                if (pilihan_menu_hotel == 1)
                {
                    cout << "Daftar harga kamar" << endl;

                    for (int i = 0; i < 1; i++)
                    {
                        cout << "No.\tJenis Kamar\tHarga" << endl;
                        for (int i = 0; i < 3; i++)
                        {
                            cout << i + 1 << "\t" << jenis_kamar[i] << "\t" << harga_kamar[i] << endl
                                 << endl;
                        }
                    }
                    goto loop_menu_summit;
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
                    goto loop_menu_summit;
                }
                else if (pilihan_menu_hotel == 3)
                {
                    goto loop_menu_hotel;
                }
                else
                {
                    cout << "Anda Salah Input\n";
                    cout << "Silahkan Ulangi Kembali\n";
                    goto loop_menu_summit;
                };
            }
            break;
            case 4:
            {
                cout << "-----Kembali------" << endl;
                goto loop_menu;
            }
            break;
            default:
            {
                cout << "Pilihan tidak valid\n";
                goto loop_menu;
            }
            }
        }
        case 2:
        {
            string hotel_1 = "Hotel Le Estate";
            string hotel_2 = "Hotel Le Royale";
            string hotel_3 = "Hotel Les Summit";

            string nama, check_in, check_out;
            int pilihan_hotel;
            int lama_inap, jumlah;

            cout << "Buat Pesanan\n";
        loop_form_hotel:

            getchar();
            cout << "Masukan Nama : ";
            getline(cin, nama);

            cout << "Jumlah orang : ";
            cin >> jumlah;
            cout << "Lama Inap : ";
            cin >> lama_inap;

            getchar();
            cout << "Check In : ";
            getline(cin, check_in);
            cout << "Check Out : ";
            getline(cin, check_out);

            cout << "Pilihan Hotel\n";
            cout << "1. " + hotel_1 << "\n"
                 << "2. " + hotel_2 << "\n"
                 << "3. " + hotel_3 << endl;
            cout << "Masukan Pilihan : ";
            cin >> pilihan_hotel;

            if (pilihan_hotel == 1)
            {
                cout << "Hotel : " << hotel_1 << "\n";
            loop_form_kamar1:
                string jenis_1 = "Standar";
                string jenis_2 = "Deluxe";
                string jenis_3 = "Suite";

                int harga_1 = 200000;
                int harga_2 = 500000;
                int harga_3 = 800000;

                int pilihan_kamar;

                cout << "Jenis Kamar\n";
                cout << "1. " + jenis_1 << "\n"
                     << "2. " + jenis_2 << "\n"
                     << "3. " + jenis_3 << "\n";
                cout << "Masukan Pilihan : ";
                cin >> pilihan_kamar;

                if (pilihan_kamar == 1)
                {
                    cout << "Kamar : " << jenis_1 << endl;
                    cout << "Harga per kamar : " << harga_1 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_1, lama_inap) << endl;
                }
                else if (pilihan_kamar == 2)
                {
                    cout << "Kamar : " << jenis_2 << endl;
                    cout << "Harga per kamar : " << harga_2 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_2, lama_inap) << endl;
                }
                else if (pilihan_kamar == 3)
                {
                    cout << "Kamar : " << jenis_3 << endl;
                    cout << "Harga per kamar : " << harga_3 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_3, lama_inap) << endl;
                }
                else
                {
                    cout << "Kamar tidak valid\n";
                    goto loop_form_kamar1;
                }
            }
            else if (pilihan_hotel == 2)
            {
                cout << "Hotel : " << hotel_2 << "\n";
            loop_form_kamar2:
                string jenis_1 = "Standar";
                string jenis_2 = "Deluxe";
                string jenis_3 = "Suite";

                int harga_1 = 200000;
                int harga_2 = 500000;
                int harga_3 = 800000;

                int pilihan_kamar;

                cout << "Jenis Kamar\n";
                cout << "1. " + jenis_1 << "\n"
                     << "2. " + jenis_2 << "\n"
                     << "3. " + jenis_3 << "\n";
                cout << "Masukan Pilihan : ";
                cin >> pilihan_kamar;

                if (pilihan_kamar == 1)
                {
                    cout << "Kamar : " << jenis_1 << endl;
                    cout << "Harga per kamar : " << harga_1 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_1, lama_inap) << endl;
                }
                else if (pilihan_kamar == 2)
                {
                    cout << "Kamar : " << jenis_2 << endl;
                    cout << "Harga per kamar : " << harga_2 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_2, lama_inap) << endl;
                }
                else if (pilihan_kamar == 3)
                {
                    cout << "Kamar : " << jenis_3 << endl;
                    cout << "Harga per kamar : " << harga_3 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_3, lama_inap) << endl;
                }
                else
                {
                    cout << "Kamar tidak valid\n";
                    goto loop_form_kamar2;
                }
            }
            else if (pilihan_hotel == 3)
            {
                cout << "Hotel : " << hotel_3 << "\n";
            loop_form_kamar3:
                string jenis_1 = "Standar";
                string jenis_2 = "Deluxe";
                string jenis_3 = "Suite";

                int harga_1 = 200000;
                int harga_2 = 500000;
                int harga_3 = 800000;

                int pilihan_kamar;

                cout << "Jenis Kamar\n";
                cout << "1. " + jenis_1 << "\n"
                     << "2. " + jenis_2 << "\n"
                     << "3. " + jenis_3 << "\n";
                cout << "Masukan Pilihan : ";
                cin >> pilihan_kamar;

                if (pilihan_kamar == 1)
                {
                    cout << "Kamar : " << jenis_1 << endl;
                    cout << "Harga per kamar : " << harga_1 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_1, lama_inap) << endl;
                }
                else if (pilihan_kamar == 2)
                {
                    cout << "Kamar : " << jenis_2 << endl;
                    cout << "Harga per kamar : " << harga_2 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_2, lama_inap) << endl;
                }
                else if (pilihan_kamar == 3)
                {
                    cout << "Kamar : " << jenis_3 << endl;
                    cout << "Harga per kamar : " << harga_3 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_3, lama_inap) << endl;
                }
                else
                {
                    cout << "Kamar tidak valid\n";
                    goto loop_form_kamar3;
                }
            }
            else
            {
                cout << "Pilihan tidak valid\n";
                goto loop_form_hotel;
            }
            cout << "___________________________________\n";
        }
        break;
        case 3:
        {
            cout << "Bantuan\n";
        }
        break;
        case 4:
        {
            cout << "Terimakasih Telah Berkunjung\n";
            return 0;
        }
        break;
        default:
        {
            cout << "Pilihan tidak valid\n";
            goto loop_menu;
        }
        };
    }
    else if (start == 'n' || start == 'N')
    {
        cout << "Terimakasih Telah Berkunjung\n";
        return 0;
    }
    else
    {
        cout << "Inputan tidak valid\n";
        goto loop_start;
    }
}
