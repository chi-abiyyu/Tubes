#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghasilnkan nilai harga yang harus dibayar
int total_harga(int kuant, int harga, int inap)
{
    return kuant * harga * inap;
}

// Fungsi ini untuk mencetak tixet (belum selesai)
string print_tiket(string nama, int room, string cek_in, string cek_out)
{
    cout << "--------------TIKET HOTEL--------------\n";
    cout << "Nama Pemesan ; " << nama << endl;
    cout << "Nomer Kamar : " << room << endl;
    cout << "Tanggal Cek In : " << cek_in << endl;
    cout << "Tanggal Cek Out : " << cek_out << endl;
    cout << "__________________________________________________\n";
    cout << "                 Terimakasih ";
}

// Fungsi ini untuk mencetak invoice pemesanan
string print_invoice(string nama, string nomer_hp, string email, string hotel, string jenis_kamar, int inap, string check_in, string waktu_in, string check_out, string waktu_out, int total, string bayar)
{
    string invoice = " ";
    cout << "------------INVOICE------------\n";
    cout << "Nama : " << nama << endl;
    cout << "Nomer Telepon : " << nomer_hp << endl;
    cout << "Email : " << email << endl;
    cout << "Hotel : " << hotel << endl;
    cout << "Jenis Kamar : " << jenis_kamar << endl;
    cout << "Lama Inap : " << inap << endl;
    cout << "Check In : " << check_in << endl;
    cout << "Waktu check in : " << waktu_in << endl;
    cout << "Check Out : " << check_out << endl;
    cout << "Waktu check out : " << waktu_out << endl;
    cout << "Total : " << total << endl;
    cout << "Pembayaran : " << bayar << endl;
    cout << "--------------------------------\n";
    return invoice;
}

int main()
{
    char start;

loop_start:
    cout << "Get a Room\n";

    cout << "Mulai (Y)\n";
    cout << "Keluar (N)\n";
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

        // Hotel dan Fasilitas
        case 1:
        {
            // Tipe data untuk di hotel dan fasilitas
            int pilihan_menu_hotel;
            // Loop untuk di hotel dan fasilitas
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
                cout << "------------------------------\n";
                cout << "        Hotel Le Estate\n";
                cout << "------------------------------\n";

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk harga kamar
                int harga_kamar[3] = {200000, 500000, 800000};

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk jenis kamar
                string jenis_kamar[3] = {"Standar Room", "Deluxe Room", "Suite Room"};

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk fasilitas_kamar
                string fasilitas_kamar[3] =
                    {
                        "\n 1.Free Wifi\n 2. Kamar Mandi Dalam\n 3. Air Conditioner (Pendingin Ruangan)\n 4. Televisi\n 5. Layanan Resepsionis 24 Jam\n 6. Single Bed\n 7. Parkir",
                        "\n 1.Free Wifi\n 2. Kamar Mandi Dalam\n 3. Air Conditioner (Pendingin Ruangan)\n 4. Televisi\n 5.Kunci Otomatis\n 6. Layanan Resepsionis   24 Jam\n 7. Parkir\n 8. Free breakfast\n 9. Single Bed / Doubel Bed\n 10. Lemari",
                        "\n 1.Free Wifi\n 2. Kamar Mandi Dalam\n 3. Air Conditioner (Pendingin Ruangan) \n 4. Televisi\n 5.Kunci Otomatis\n 6. Layanan Resepsionis   24 Jam\n 7. Housekeeping Harian\n 8. Free breakfast\n 9. Bathub\n 10. Single Bed / Doubel Bed\n 11. Lemari\n 11. Parkir\n 12. Office Room"};

                // Dibawah ini untuk membuat menu daftar menu dari pilihan hotel permen
                cout << "1. Daftar Harga\n";         // ini buat if == 1
                cout << "2. Fasilitas Kamar\n";      // if == 2
                cout << "3. Kembali Ke Menu Awal\n"; // if == 3
                cout << "Pilihan Anda (1-3) : ";
                cin >> pilihan_menu_hotel;

                // Dibawah ini untuk pilihan dari menu diatas
                if (pilihan_menu_hotel == 1)
                {
                    cout << "Daftar harga kamar" << endl;

                    for (int i = 0; i < 3; i++)
                    {
                        cout << "Jenis Kamar : " << jenis_kamar[i] << endl;
                        cout << "Harga :" << harga_kamar[i] << endl;
                    }
                    cout << endl;
                    goto loop_menu_estate;
                }
                else if (pilihan_menu_hotel == 2)
                {
                    for (int i = 0; i < 3; i++)
                    {
                        cout << "Jenis Kamar: " << jenis_kamar[i] << endl;
                        cout << "Fasilitas Kamar: " << fasilitas_kamar[i] << endl;
                        cout << "\n";
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
                cout << "------------------------------\n";
                cout << "        Hotel Le Royale\n";
                cout << "------------------------------\n";

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk harga kamar
                int harga_kamar[3] = {200000, 500000, 800000};

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk jenis kamar
                string jenis_kamar[3] = {"Standar Room", "Deluxe Room", "Suite Room"};

                // Dibawah ini adalah kode untuk membuat array dengan 3 string untuk fasilitas_kamar
                string fasilitas_kamar[3] =
                    {
                        "\n 1.Free Wifi\n 2. Kamar Mandi Dalam\n 3. AC\n 4. Televisi\n 5. Layanan Resepsionis 24 Jam\n 6. Single Bed \n 7. Parkir\n 8. Ketel Listrik\n ",
                        "\n 1. Wifi\n 2. Dapur\n 3. Layanan tata graha\n 4. Parkir\n 5. Cctv\n 6. Resepsi\n 7. Pemadam Api\n 8. Ac\n 9. Tv\n 10. Single bed / doubel bed\n 11. Ketel Listrik\n ",
                        "\n 1. Wifi\n 2. Parkir\n 3. Cctv \n 4. Ruang Pesta\n 5. Ruang Konferensi \n 6. 24/7  Checkin\n 7. Layanan Tata graha harian\n 8. Ketel listrik\n 9. Pemadam Api\n 9. Tv\n 10. Bathub\n 11. Ac\n 12. Area tempat duduk\n 13. Tempat tidur king size / Doubel bed\n 14. Free Breakfast\n "};

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

                    for (int i = 0; i < 3; i++)
                    {
                        cout << "Jenis Kamar : " << jenis_kamar[i] << endl;
                        cout << "Harga :" << harga_kamar[i] << endl;
                    }
                    cout << endl;
                    goto loop_menu_royale;
                }
                else if (pilihan_menu_hotel == 2)
                {
                    for (int i = 0; i < 3; i++)
                    {
                        cout << "Jenis Kamar: " << jenis_kamar[i] << endl;
                        cout << "Fasilitas Kamar: " << fasilitas_kamar[i] << endl;
                        cout << "\n";
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
                        "\n 1.Free Wifi\n 2. Kamar Mandi Dalam\n 3. AC\n 4. Televisi\n 5. Layanan Resepsionis 24 Jam\n 6. Single Bed\n 7. Parkir\n 8. Ketel Listrik\n 9. Balkon\n ",
                        "\n 1. Wifi\n 2. Dapur\n 3. Layanan tata graha\n 4. Parkir\n 5. Resepsi\n 6. Pemadam Api\n 7. Ac\n 8. Tv\n 9. Single bed / doubel bed\n 10. Ketel Listrik\n 11. Balkon\n ",
                        "\n 1. Wifi\n 2. Parkir\n 3. Cctv\n 4. Ruang Pesta\n 5. Ruang Konferensi\n 6. 24/7  Checkin\n 7. Layanan Tata graha harian\n 8. Ketel listrik\n 9. Pemadam Ac\n 10. Tv\n 11. Bathub\n 12. Ac\n 13. Area tempat duduk\n 14. Tempat tidur king size / Doubel bed\n 15. Free Breakfast\n 16. Kulkas Mini\n 17. Balkon\n "};

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

                    for (int i = 0; i < 3; i++)
                    {
                        cout << "Jenis Kamar : " << jenis_kamar[i] << endl;
                        cout << "Harga :" << harga_kamar[i] << endl;
                    }
                    cout << endl;
                    goto loop_menu_summit;
                }
                else if (pilihan_menu_hotel == 2)
                {
                    for (int i = 0; i < 3; i++)
                    {
                        cout << "Jenis Kamar: " << jenis_kamar[i] << endl;
                        cout << "Fasilitas Kamar: " << fasilitas_kamar[i] << endl;
                        cout << "\n";
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
        break;
        // Formulir
        case 2:
        {
            // Nama hotel
            string hotel_1 = "Hotel Le Estate";
            string hotel_2 = "Hotel Le Royale";
            string hotel_3 = "Hotel Les Summit";

            // type data untuk inputan di formulir
            string nama, check_in, check_out, waktu_check_in, waktu_check_out;
            int pilihan_hotel;
            int lama_inap, jumlah;
            int pilih_bayar;

            string nomer_hp, email;

            // Isian Formulir
            cout << "Buat Pesanan\n";
            // Loop untuk form awal hotel
        loop_form_hotel:
            // Inputan untuk user
            getchar();
            cout << "Masukan Nama : ";
            getline(cin, nama);

            cout << "Jumlah orang : ";
            cin >> jumlah;
            cout << "Lama Inap : ";
            cin >> lama_inap;

            getchar();
            cout << "Nomer Telepon : ";
            getline(cin, nomer_hp);
            cout << "Email : ";
            getline(cin, email);
            cout << "Check In (dd/mm/yyyy): ";
            getline(cin, check_in);
            cout << "Waktu Check In (HH:MM): ";
            getline(cin, waktu_check_in);
            cout << "Check Out (dd/mm/yyyy): ";
            getline(cin, check_out);
            cout << "Waktu Check Out (HH:MM): ";
            getline(cin, waktu_check_out);

            cout << "Pilihan Hotel\n";
            cout << "1. " + hotel_1 << "\n"
                 << "2. " + hotel_2 << "\n"
                 << "3. " + hotel_3 << endl;
            cout << "Masukan Pilihan : ";
            cin >> pilihan_hotel;

            // Pilihan Hotel Le Estate dan terus pemilihan jenis kamar
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

                string bayar_1 = "Cash";
                string bayar_2 = "Bank";

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
                    int total = total_harga(jumlah, harga_1, lama_inap);

                    // pilihan pembayaran
                    cout << "Pilih Pembayaran" << endl;
                    cout << "1. " + bayar_1 << "\n";
                    cout << "2. " + bayar_2 << "\n";
                    cout << "Masukan Pilihan : ";
                    cin >> pilih_bayar;
                    string bank_bri = "BRI";
                    string bank_bni = "BNI";
                    string bank_bca = "BCA";
                    string bank_bsi = "BSI";
                    if (pilih_bayar == 1)
                    {
                        string bayar = bayar_1;
                        cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                    }
                    else if (pilih_bayar == 2)
                    {
                        int pilih_bank;
                    loop_bank:
                        cout << "Pilih jenis bank : \n";
                        cout << "1. " + bank_bri << endl;
                        cout << "2. " + bank_bni << endl;
                        cout << "3. " + bank_bca << endl;
                        cout << "4. " + bank_bsi << endl;
                        cout << "Masukan Pilihan : ";
                        cin >> pilih_bank;
                        if (pilih_bank == 1)
                        {
                            string bayar = bank_bri;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 2)
                        {
                            string bayar = bank_bni;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 3)
                        {
                            string bayar = bank_bca;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 4)
                        {
                            string bayar = bank_bsi;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else
                        {
                            cout << "Pilihan anda tidak valid" << endl;
                            goto loop_bank;
                        }
                    }
                }
                else if (pilihan_kamar == 2)
                {
                    cout << "Kamar : " << jenis_2 << endl;
                    cout << "Harga per kamar : " << harga_2 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_2, lama_inap) << endl;
                    int total = total_harga(jumlah, harga_2, lama_inap);

                    // pilihan pembayaran
                    cout << "Pilih Pembayaran" << endl;
                    cout << "1. " + bayar_1 << "\n";
                    cout << "2. " + bayar_2 << "\n";
                    cout << "Masukan Pilihan : ";
                    cin >> pilih_bayar;
                    string bank_bri = "BRI";
                    string bank_bni = "BNI";
                    string bank_bca = "BCA";
                    string bank_bsi = "BSI";
                    if (pilih_bayar == 1)
                    {
                        string bayar = bayar_1;
                        cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                    }
                    else if (pilih_bayar == 2)
                    {
                        int pilih_bank;
                    loop_bank1:
                        cout << "Pilih jenis bank : \n";
                        cout << "1. " + bank_bri << endl;
                        cout << "2. " + bank_bni << endl;
                        cout << "3. " + bank_bca << endl;
                        cout << "4. " + bank_bsi << endl;
                        cout << "Masukan Pilihan : ";
                        cin >> pilih_bank;
                        if (pilih_bank == 1)
                        {
                            string bayar = bank_bri;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 2)
                        {
                            string bayar = bank_bni;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 3)
                        {
                            string bayar = bank_bca;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 4)
                        {
                            string bayar = bank_bsi;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else
                        {
                            cout << "Pilihan anda tidak valid" << endl;
                            goto loop_bank1;
                        }
                    }
                }
                else if (pilihan_kamar == 3)
                {
                    cout << "Kamar : " << jenis_3 << endl;
                    cout << "Harga per kamar : " << harga_1 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_3, lama_inap) << endl;
                    int total = total_harga(jumlah, harga_3, lama_inap);

                    // pilihan pembayaran
                    cout << "Pilih Pembayaran" << endl;
                    cout << "1. " + bayar_1 << "\n";
                    cout << "2. " + bayar_2 << "\n";
                    cout << "Masukan Pilihan : ";
                    cin >> pilih_bayar;
                    string bank_bri = "BRI";
                    string bank_bni = "BNI";
                    string bank_bca = "BCA";
                    string bank_bsi = "BSI";
                    if (pilih_bayar == 1)
                    {
                        string bayar = bayar_1;
                        cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                    }
                    else if (pilih_bayar == 2)
                    {
                        int pilih_bank;
                    loop_bank2:
                        cout << "Pilih jenis bank : \n";
                        cout << "1. " + bank_bri << endl;
                        cout << "2. " + bank_bni << endl;
                        cout << "3. " + bank_bca << endl;
                        cout << "4. " + bank_bsi << endl;
                        cout << "Masukan Pilihan : ";
                        cin >> pilih_bank;
                        if (pilih_bank == 1)
                        {
                            string bayar = bank_bri;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 2)
                        {
                            string bayar = bank_bni;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 3)
                        {
                            string bayar = bank_bca;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 4)
                        {
                            string bayar = bank_bsi;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else
                        {
                            cout << "Pilihan anda tidak valid" << endl;
                            goto loop_bank2;
                        }
                    }
                }
                else
                {
                    cout << "Kamar tidak valid\n";
                    goto loop_form_kamar1;
                }
            }
            // Pilihan Hotel Le Royale dan terus pemilihan jenis kamar
            else if (pilihan_hotel == 2)
            {
                cout << "Hotel : " << hotel_2 << "\n";
            loop_form_kamar_2_1:
                string jenis_1 = "Standar";
                string jenis_2 = "Deluxe";
                string jenis_3 = "Suite";

                int harga_1 = 200000;
                int harga_2 = 500000;
                int harga_3 = 800000;

                string bayar_1 = "Cash";
                string bayar_2 = "Bank";

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
                    int total = total_harga(jumlah, harga_1, lama_inap);

                // pilihan pembayaran
                loop_bayar_1:
                    cout << "Pilih Pembayaran" << endl;
                    cout << "1. " + bayar_1 << "\n";
                    cout << "2. " + bayar_2 << "\n";
                    cout << "Masukan Pilihan : ";
                    cin >> pilih_bayar;
                    string bank_bri = "BRI";
                    string bank_bni = "BNI";
                    string bank_bca = "BCA";
                    string bank_bsi = "BSI";
                    if (pilih_bayar == 1)
                    {
                        string bayar = bayar_1;
                        cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                    }
                    else if (pilih_bayar == 2)
                    {
                        int pilih_bank;
                    loop_bank_2_1:
                        cout << "Pilih jenis bank : \n";
                        cout << "1. " + bank_bri << endl;
                        cout << "2. " + bank_bni << endl;
                        cout << "3. " + bank_bca << endl;
                        cout << "4. " + bank_bsi << endl;
                        cout << "Masukan Pilihan : ";
                        cin >> pilih_bank;
                        if (pilih_bank == 1)
                        {
                            string bayar = bank_bri;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 2)
                        {
                            string bayar = bank_bni;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 3)
                        {
                            string bayar = bank_bca;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 4)
                        {
                            string bayar = bank_bsi;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else
                        {
                            cout << "Pilihan anda tidak valid" << endl;
                            goto loop_bank_2_1;
                        }
                    }
                    else
                    {
                        cout << "Pilihan anda tidak valid" << endl;
                        goto loop_bayar_1;
                    }
                }
                else if (pilihan_kamar == 2)
                {
                    cout << "Kamar : " << jenis_2 << endl;
                    cout << "Harga per kamar : " << harga_2 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_2, lama_inap) << endl;
                    int total = total_harga(jumlah, harga_2, lama_inap);

                // pilihan pembayaran
                loop_bayar_2:
                    cout << "Pilih Pembayaran" << endl;
                    cout << "1. " + bayar_1 << "\n";
                    cout << "2. " + bayar_2 << "\n";
                    cout << "Masukan Pilihan : ";
                    cin >> pilih_bayar;
                    string bank_bri = "BRI";
                    string bank_bni = "BNI";
                    string bank_bca = "BCA";
                    string bank_bsi = "BSI";

                    if (pilih_bayar == 1)
                    {
                        string bayar = bayar_1;
                        cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                    }
                    else if (pilih_bayar == 2)
                    {
                        int pilih_bank;
                    loop_bank_2_2:
                        cout << "Pilih jenis bank : \n";
                        cout << "1. " + bank_bri << endl;
                        cout << "2. " + bank_bni << endl;
                        cout << "3. " + bank_bca << endl;
                        cout << "4. " + bank_bsi << endl;
                        cout << "Masukan Pilihan : ";
                        cin >> pilih_bank;
                        if (pilih_bank == 1)
                        {
                            string bayar = bank_bri;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 2)
                        {
                            string bayar = bank_bni;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 3)
                        {
                            string bayar = bank_bca;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 4)
                        {
                            string bayar = bank_bsi;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else
                        {
                            cout << "Pilihan anda tidak valid" << endl;
                            goto loop_bank_2_2;
                        }
                    }
                    else
                    {
                        cout << "Pilih tidak valid" << endl;
                        goto loop_bayar_2;
                    }
                }
                else if (pilihan_kamar == 3)
                {
                    cout << "Kamar : " << jenis_3 << endl;
                    cout << "Harga per kamar : " << harga_1 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_3, lama_inap) << endl;
                    int total = total_harga(jumlah, harga_3, lama_inap);

                // pilihan pembayaran
                loop_bayar_3:
                    cout << "Pilih Pembayaran" << endl;
                    cout << "1. " + bayar_1 << "\n";
                    cout << "2. " + bayar_2 << "\n";
                    cout << "Masukan Pilihan : ";
                    cin >> pilih_bayar;
                    string bank_bri = "BRI";
                    string bank_bni = "BNI";
                    string bank_bca = "BCA";
                    string bank_bsi = "BSI";
                    if (pilih_bayar == 1)
                    {
                        string bayar = bayar_1;
                        cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                    }
                    else if (pilih_bayar == 2)
                    {
                        int pilih_bank;
                    loop_bank_2_3:
                        cout << "Pilih jenis bank : \n";
                        cout << "1. " + bank_bri << endl;
                        cout << "2. " + bank_bni << endl;
                        cout << "3. " + bank_bca << endl;
                        cout << "4. " + bank_bsi << endl;
                        cout << "Masukan Pilihan : ";
                        cin >> pilih_bayar;
                        if (pilih_bank == 1)
                        {
                            string bayar = bank_bri;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 2)
                        {
                            string bayar = bank_bni;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 3)
                        {
                            string bayar = bank_bca;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 4)
                        {
                            string bayar = bank_bsi;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else
                        {
                            cout << "Pilihan anda tidak valid" << endl;
                            goto loop_bank_2_3;
                        }
                    }
                    else
                    {
                        cout << "Pilihan anda tidak valid" << endl;
                        goto loop_bayar_3;
                    }
                }
                else
                {
                    cout << "Kamar tidak valid\n";
                    goto loop_form_kamar_2_1;
                }
            }
            // Pilihan Hotel Les Summit dan terus pemilihan jenis kamar
            else if (pilihan_hotel == 3)
            {
                cout << "Hotel : " << hotel_3 << "\n";
            loop_form_kamar_3:
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

                if (pilihan_hotel == 1)
                {
                    cout << "Hotel : " << hotel_1 << "\n";
                loop_form_kamar_3_1:
                    string jenis_1 = "Standar";
                    string jenis_2 = "Deluxe";
                    string jenis_3 = "Suite";

                    int harga_1 = 200000;
                    int harga_2 = 500000;
                    int harga_3 = 800000;

                    string bayar_1 = "Cash";
                    string bayar_2 = "Bank";

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
                        int total = total_harga(jumlah, harga_1, lama_inap);

                        // pilihan pembayaran
                        cout << "Pilih Pembayaran" << endl;
                        cout << "1. " + bayar_1 << "\n";
                        cout << "2. " + bayar_2 << "\n";
                        cout << "Masukan Pilihan : ";
                        cin >> pilih_bayar;
                        string bank_bri = "BRI";
                        string bank_bni = "BNI";
                        string bank_bca = "BCA";
                        string bank_bsi = "BSI";
                        if (pilih_bayar == 1)
                        {
                            string bayar = bayar_1;
                            cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bayar == 2)
                        {
                            int pilih_bank;
                        loop_bank_3_1:
                            cout << "Pilih jenis bank : \n";
                            cout << "1. " + bank_bri << endl;
                            cout << "2. " + bank_bni << endl;
                            cout << "3. " + bank_bca << endl;
                            cout << "4. " + bank_bsi << endl;
                            cout << "Masukan Pilihan : ";
                            cin >> pilih_bank;
                            if (pilih_bank == 1)
                            {
                                string bayar = bank_bri;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 2)
                            {
                                string bayar = bank_bni;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 3)
                            {
                                string bayar = bank_bca;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 4)
                            {
                                string bayar = bank_bsi;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_1, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else
                            {
                                cout << "Pilihan anda tidak valid" << endl;
                                goto loop_bank_3_1;
                            }
                        }
                    }
                }
                else if (pilihan_kamar == 2)
                {
                    cout << "Kamar : " << jenis_2 << endl;
                    cout << "Harga per kamar : " << harga_2 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_2, lama_inap) << endl;
                    int total = total_harga(jumlah, harga_2, lama_inap);

                    string bayar_1 = "Cash";
                    string bayar_2 = "Bank";

                    // pilihan pembayaran
                    cout << "Pilih Pembayaran" << endl;
                    cout << "1. " + bayar_1 << "\n";
                    cout << "2. " + bayar_2 << "\n";
                    cout << "Masukan Pilihan : ";
                    cin >> pilih_bayar;
                    string bank_bri = "BRI";
                    string bank_bni = "BNI";
                    string bank_bca = "BCA";
                    string bank_bsi = "BSI";
                    if (pilih_bayar == 1)
                    {
                        string bayar = bayar_1;
                        cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                    }
                    else if (pilih_bayar == 2)
                    {
                        int pilih_bank;
                    loop_bank_3_2:
                        cout << "Pilih jenis bank : \n";
                        cout << "1. " + bank_bri << endl;
                        cout << "2. " + bank_bni << endl;
                        cout << "3. " + bank_bca << endl;
                        cout << "4. " + bank_bsi << endl;
                        cout << "Masukan Pilihan : ";
                        cin >> pilih_bank;
                        if (pilih_bank == 1)
                        {
                            string bayar = bank_bri;
                            cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 2)
                        {
                            string bayar = bank_bni;
                            cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 3)
                        {
                            string bayar = bank_bca;
                            cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 4)
                        {
                            string bayar = bank_bsi;
                            cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_2, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else
                        {
                            cout << "Pilihan anda tidak valid" << endl;
                            goto loop_bank_3_2;
                        }
                    }
                }
                else if (pilihan_kamar == 3)
                {
                    cout << "Kamar : " << jenis_3 << endl;
                    cout << "Harga per kamar : " << harga_1 << endl;
                    cout << "Total : " << total_harga(jumlah, harga_3, lama_inap) << endl;
                    int total = total_harga(jumlah, harga_3, lama_inap);

                    string bayar_1 = "Cash";
                    string bayar_2 = "Bank";

                    // pilihan pembayaran
                    cout << "Pilih Pembayaran" << endl;
                    cout << "1. " + bayar_1 << "\n";
                    cout << "2. " + bayar_2 << "\n";
                    cout << "Masukan Pilihan : ";
                    cin >> pilih_bayar;
                    string bank_bri = "BRI";
                    string bank_bni = "BNI";
                    string bank_bca = "BCA";
                    string bank_bsi = "BSI";
                    if (pilih_bayar == 1)
                    {
                        string bayar = bayar_1;
                        cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                    }
                    else if (pilih_bayar == 2)
                    {
                        int pilih_bank;
                    loop_bank_3_3:
                        cout << "Pilih jenis bank : \n";
                        cout << "1. " + bank_bri << endl;
                        cout << "2. " + bank_bni << endl;
                        cout << "3. " + bank_bca << endl;
                        cout << "4. " + bank_bsi << endl;
                        cout << "Masukan Pilihan : ";
                        cin >> pilih_bank;
                        if (pilih_bank == 1)
                        {
                            string bayar = bank_bri;
                            cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 2)
                        {
                            string bayar = bank_bni;
                            cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 3)
                        {
                            string bayar = bank_bca;
                            cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bank == 4)
                        {
                            string bayar = bank_bsi;
                            cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_3, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else
                        {
                            cout << "Pilihan anda tidak valid" << endl;
                            goto loop_bank_3_3;
                        }
                    }
                }
                else
                {
                    cout << "Kamar tidak valid\n";
                    goto loop_form_kamar_3_1;
                }
            }
            // Jika Outputan salah dan langsung menuju loop pilihan hotel
            else
            {
                cout << "Pilihan tidak valid\n";
                goto loop_form_hotel;
            }
            cout << "___________________________________\n";
        }
        break;
        // Bantuan
        case 3:
        {
            int pilih_bantuan;
            int pilih_faq;
        loop_bantuan:
            cout << "Bantuan\n";
            cout << "1. Hubungi";
            cout << "2. FAQ";
            cout << "3. Syarat & kententuan";
            cout << "4. Keluar";
            cout << "Masukan pilihan anda : ";
            cin >> pilih_bantuan;

            if (pilih_bantuan == 1)
            {
                cout << "Klik Link Dibawah Ini";
                cout << "https://wa.me/qr/WR3BWCU5TORAL1";
            }

            else if (pilih_bantuan == 2)
            {
            loop_faq:
                cout << "FAQ" << endl;
                cout << "1. Apa saja yang harus saya persiapkan sebelum memesan hotel melalui aplikasi kami?" << endl;
                cout << "2. Bagaimana cara melakukan pemesanan hotel melalui aplikasi kami?" << endl;
                cout << "3. Apakah pemesanan hotel melalui aplikasi kami aman?" << endl;
                cout << "4. Bagaimana jika saya ingin membatalkan pemesanan hotel yang telah dikonfirmasi?" << endl;
                cout << "5. Dapatkah saya mengubah detail pemesanan hotel yang telah dikonfirmasi?" << endl;
                cout << "6. Bagaimana jika saya mengalami masalah atau memiliki pertanyaan saat menggunakan aplikasi kami?" << endl;
                cout << "Masukan Pilihan : ";
                cin >> pilih_faq;
                if (pilih_faq == 1)
                {
                    cout << "Pertama-tama, Anda harus membuat akun terlebih dahulu dengan mengisi data diri dan informasi kontak yang valid. Selain itu, pastikan Anda memiliki metode pembayaran yang valid yang akan digunakan untuk mengkonfirmasi pemesanan.";
                }
                else if (pilih_faq == 2)
                {
                    cout << "Setelah Anda membuat akun dan masuk ke aplikasi, Anda dapat mencari hotel yang sesuai dengan keinginan Anda dengan menggunakan filter pencarian yang tersedia. Setelah Anda menemukan hotel yang diinginkan, Anda dapat memilih tanggal pemesanan dan melakukan pembayaran untuk mengkonfirmasi pemesanan.";
                }
                else if (pilih_faq == 3)
                {
                    cout << "Ya, semua pemesanan hotel melalui aplikasi kami dilindungi dengan teknologi enkripsi yang canggih dan sistem keamanan yang ketat untuk melindungi informasi pribadi dan transaksi Anda.";
                }
                else if (pilih_faq == 4)
                {
                    cout << "Anda dapat membatalkan pemesanan hotel yang telah dikonfirmasi dengan masuk ke akun Anda dan menemukan opsi pembatalan di halaman rincian pemesanan. Namun, pastikan untuk membatalkan pemesanan sebelum batas waktu yang ditentukan karena beberapa hotel mungkin membebankan biaya pembatalan. : ";
                }
                else if (pilih_faq == 5)
                {
                    cout << "Anda dapat mengubah detail pemesanan hotel yang telah dikonfirmasi, namun pastikan untuk melakukannya sebelum batas waktu yang ditentukan dan dapat menghubungi customer service kami untuk bantuan.";
                }
                else if (pilih_faq == 6)
                {
                    cout << "Anda dapat menghubungi customer service kami melalui fitur dukungan yang tersedia dalam aplikasi atau melalui email/telepon yang tercantum dalam website kami. Tim kami akan segera menangani masalah atau pertanyaan Anda.";
                }
                else if (pilih_faq == 7)
                {
                    goto loop_bantuan;
                }
                else
                {
                    cout << "pilihan tidak valid";
                    goto loop_faq;
                }
            }
            else if (pilih_bantuan == 3)
            {
                cout << "";
            }
            else if (pilih_bantuan == 4)
            {
                cout << "";
            }
            else
            {
                cout << "";
                cout << "";
            }
        }
        break;
        // Keluar Aplikasi
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
