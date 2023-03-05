#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghasilnkan nilai harga yang harus dibayar
int total_harga(int jumlah, int harga, int inap)
{
    return jumlah * harga * inap;
}
// Fungsi ini untuk mencetak invoice pemesanan
string print_invoice(string nama, string nomer_hp, string email, string hotel, string jenis_kamar, int jumlah_kamar, int inap, string check_in, string waktu_in, string check_out, string waktu_out, int total, string bayar)
{
    string invoice = " ";
    cout << "\nCetak Invoice : \n";
    cout << "\n===============================\n";
    cout << "------------INVOICE------------\n";
    cout << "===============================\n";
    cout << "Nama : " << nama << endl;
    cout << "Nomer Telepon : " << nomer_hp << endl;
    cout << "Email : " << email << endl;
    cout << "Hotel : " << hotel << endl;
    cout << "Jenis Kamar : " << jenis_kamar << endl;
    cout << "Jumlah Kamar : " << jumlah_kamar << endl;
    cout << "Lama Inap : " << inap << endl;
    cout << "Check In : " << check_in << endl;
    cout << "Waktu check in : " << waktu_in << endl;
    cout << "Check Out : " << check_out << endl;
    cout << "Waktu check out : " << waktu_out << endl;
    cout << "Total : " << total << endl;
    cout << "Pembayaran : " << bayar << endl;
    if (bayar == "BRI")
    {
        cout << "Nomer VA : 0021050002224745" << endl;
    }
    else if (bayar == "BNI")
    {
        cout << "Nomer VA : 0098850002224745" << endl;
    }
    else if (bayar == "BCA")
    {
        cout << "Nomer VA : 0141850002224745" << endl;
    }
    else if (bayar == "BSI")
    {
        cout << "Nomer VA : 8888850002224745" << endl;
    }

    cout << "--------------------------------\n";
    cout << "================================\n";

    cout << endl;
    cout << "_______________________________\n";
    cout << "Catatan Pesanan : \n";
    cout << " Harap saat melakukan check in \n untuk melampirkan Invoice dan \n Bukti Pembayaran\n";
    cout << "_______________________________\n\n";
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
        cout << "--------------------------------------\n";
        cout << "_________________MENU_________________\n";
        cout << "''''''''''''''''''''''''''''''''''''''\n";
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
            cout << "--------------------------------------\n";
            cout << "______________MENU HOTEL______________\n";
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
                        "\n 1.Free Wifi\n 2. Kamar Mandi Dalam\n 3. Air Conditioner (Pendingin Ruangan)\n 4. Televisi\n 5. Kunci Otomatis\n 6. Layanan Resepsionis   24 Jam\n 7. Parkir\n 8. Free breakfast\n 9. Doubel Bed\n 10. Lemari",
                        "\n 1.Free Wifi\n 2. Kamar Mandi Dalam\n 3. Air Conditioner (Pendingin Ruangan) \n 4. Televisi\n 5.Kunci Otomatis\n 6. Layanan Resepsionis   24 Jam\n 7. Housekeeping Harian\n 8. Free breakfast\n 9. Bathub\n 10. Doubel Bed\n 11. Lemari\n 11. Parkir\n 12. Office Room"};

                // Dibawah ini untuk membuat menu daftar menu dari pilihan hotel permen
                cout << "1. Daftar Harga\n";          // ini buat if == 1
                cout << "2. Fasilitas Kamar\n";       // else if == 2
                cout << "3. Alamat Hotel\n";          // else if == 3
                cout << "4. Kembali Ke Menu Hotel\n"; // else if == 4
                cout << "Pilihan Anda (1-4) : ";
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
                    cout << "Alamat : Karangtengah, Kec. Baturaden, Kabupaten Banyumas, Jawa Tengah" << endl;
                    goto loop_menu_estate;
                }
                else if (pilihan_menu_hotel == 4)
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
                        "\n 1. Wifi\n 2. Kamar Mandi Dalam\n 3. AC\n 4. Televisi\n 5. Layanan Resepsionis 24 Jam\n 6. Single Bed \n 7. Parkir\n 8. Ketel Listrik\n ",
                        "\n 1. Wifi\n 2. Dapur\n 3. Layanan tata graha\n 4. Parkir\n 5. Cctv\n 6. Resepsi\n 7. Pemadam Api\n 8. Ac\n 9. TV\n 10. Doubel bed\n 11. Ketel Listrik\n ",
                        "\n 1. Wifi\n 2. Parkir\n 3. Cctv \n 4. Ruang Pesta\n 5. Ruang Konferensi \n 6. 24/7  Checkin\n 7. Layanan Tata graha harian\n 8. Ketel listrik\n 9. Pemadam Api\n 9. Tv\n 10. Bathub\n 11. Ac\n 12. Area tempat duduk\n 13. Tempat tidur king size / Doubel bed\n 14. Free Breakfast\n "};

                // Dibawah ini untuk membuat menu daftar menu dari pilihan hotel permen
                cout << "1. Daftar Harga\n";          // ini buat if == 1
                cout << "2. Fasilitas Kamar\n";       // else if == 2
                cout << "3. Alamat Hotel\n";          // else if == 3
                cout << "4. Kembali Ke Menu Hotel\n"; // else if == 4
                cout << "Pilihan Anda (1-4) : ";
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
                    cout << "Alamat : Rempoah, Kec. Baturaden, Kabupaten Banyumas, Jawa Tengah" << endl;
                    goto loop_menu_royale;
                }
                else if (pilihan_menu_hotel == 4)
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
                cout << "------------------------------\n";
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
                        "\n 1. Wifi\n 2. Dapur\n 3. Layanan tata graha\n 4. Parkir\n 5. Resepsi\n 6. Pemadam Api\n 7. Ac\n 8. Tv\n 9. Doubel bed\n 10. Ketel Listrik\n 11. Balkon\n ",
                        "\n 1. Wifi\n 2. Parkir\n 3. Cctv\n 4. Ruang Pesta\n 5. Ruang Konferensi\n 6. 24/7  Checkin\n 7. Layanan Tata graha harian\n 8. Ketel listrik\n 9. Pemadam Ac\n 10. Tv\n 11. Bathub\n 12. Ac\n 13. Area tempat duduk\n 14. Tempat tidur king size / Doubel bed\n 15. Free Breakfast\n 16. Kulkas Mini\n 17. Balkon\n "};

                // Dibawah ini untuk membuat menu daftar menu dari pilihan hotel permen
                cout << "1. Daftar Harga\n";          // ini buat if == 1
                cout << "2. Fasilitas Kamar\n";       // else if == 2
                cout << "3. Alamat Hotel\n";          // else if == 3
                cout << "4. Kembali Ke Menu Hotel\n"; // else if == 4
                cout << "Pilihan Anda (1-4) : ";
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
                    cout << "Alamat : Dusun I Desa, Kemutug Lor, Kec. Baturaden, Kabupaten Banyumas, Jawa Tengah" << endl;
                    goto loop_menu_summit;
                }
                else if (pilihan_menu_hotel == 4)
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
                goto loop_menu_hotel;
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
            cout << "--------------------------------------\n";
            cout << "______________Formulir________________\n";
            // Loop untuk form awal hotel

            // Inputan untuk user
            getchar();
            cout << "Masukan Nama : "; // Menginput Nama User
            getline(cin, nama);
            cout << "Nomer Telepon : "; // Input Nomer HP
            getline(cin, nomer_hp);
            cout << "Email : "; // Input Email
            getline(cin, email);

        // Menu Hotel
        loop_form_hotel:
            cout << "Pilihan Hotel\n";
            cout << "1. " + hotel_1 << "\n"
                 << "2. " + hotel_2 << "\n"
                 << "3. " + hotel_3 << endl;
            cout << "Masukan Pilihan : ";
            cin >> pilihan_hotel;

            // Pilihan Hotel Le Estate dan pemilihan jenis kamar
            if (pilihan_hotel == 1)
            {
                cout << "Hotel : " << hotel_1 << "\n";
            loop_form_kamar_1_1:
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
                cout << "1. " + jenis_1 << "\n"  // if == 1
                     << "2. " + jenis_2 << "\n"  // else if == 2
                     << "3. " + jenis_3 << "\n"; // else if == 3
                cout << "Masukan Pilihan : ";
                cin >> pilihan_kamar;

                if (pilihan_kamar == 1)
                {
                    cout << "Kamar : " << jenis_1 << endl;
                loop_inap_1_1:
                    int jumlah_kamar = 10;
                    cout << "Jumlah Kamar (Tersedia 10 Kamar) : "; // Jumlah kamar yang ingin dipesan
                    cin >> jumlah;

                    if (jumlah <= jumlah_kamar)
                    {
                        cout << "Lama Inap : "; // Lama user menginap
                        cin >> lama_inap;
                        getchar();
                        cout << "Check In (dd/mm/yyyy): "; // Tanggal Check in
                        getline(cin, check_in);
                        cout << "Waktu Check In (HH:MM): "; // Jam Untuk Check in
                        getline(cin, waktu_check_in);
                        cout << "Check Out (dd/mm/yyyy): "; // Tanggal Chech out
                        getline(cin, check_out);
                        cout << "Waktu Check Out (HH:MM): "; // Jam Untuk Check out
                        getline(cin, waktu_check_out);

                        cout << "Harga per kamar : " << harga_1 << endl; // Menampilkan harga kamar standar
                        cout << "Total : " << total_harga(jumlah, harga_1, lama_inap) << endl;
                        int total = total_harga(jumlah, harga_1, lama_inap);

                    // pilihan pembayaran
                    loop_bayar_1_1:
                        cout << "Pilih Pembayaran" << endl;
                        cout << "1. " + bayar_1 << "\n"; // bayar_1 = Cash
                        cout << "2. " + bayar_2 << "\n"; // bayar_2 = Bank

                        cout << "Masukan Pilihan (1-2) : ";
                        cin >> pilih_bayar;
                        string bank_bri = "BRI";
                        string bank_bni = "BNI";
                        string bank_bca = "BCA";
                        string bank_bsi = "BSI";
                        if (pilih_bayar == 1)
                        {
                            string bayar = bayar_1;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bayar == 2)
                        {
                            int pilih_bank;
                        loop_bank:
                            cout << "Pilih jenis bank : \n"; // Menu pilihan bank
                            cout << "1. " + bank_bri << endl;
                            cout << "2. " + bank_bni << endl;
                            cout << "3. " + bank_bca << endl;
                            cout << "4. " + bank_bsi << endl;
                            cout << "Masukan Pilihan : ";
                            cin >> pilih_bank;
                            if (pilih_bank == 1)
                            {
                                string bayar = bank_bri;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 2)
                            {
                                string bayar = bank_bni;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 3)
                            {
                                string bayar = bank_bca;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 4)
                            {
                                string bayar = bank_bsi;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else
                            {
                                cout << "Pilihan anda tidak valid" << endl;
                                goto loop_bank;
                            }
                        }
                        else
                        {
                            cout << "Pilihan anda tidak valid" << endl;
                            goto loop_bayar_1_1;
                        }
                    }
                    else
                    {
                        cout << "Maaf, Tidak Ada Kamar Yang Tersedia\n";
                        goto loop_inap_1_1;
                    }
                }
                else if (pilihan_kamar == 2)
                {

                    cout << "Kamar : " << jenis_2 << endl;
                loop_inap_1_2:
                    int jumlah_kamar = 7;
                    cout << "Jumlah Kamar (Tersedia 7 Kamar) : "; // Jumlah kamar yang ingin dipesan
                    cin >> jumlah;

                    if (jumlah <= jumlah_kamar)
                    {
                        cout << "Lama Inap : "; // Lama user menginap
                        cin >> lama_inap;
                        getchar();
                        cout << "Check In (dd/mm/yyyy): "; // Tanggal Check in
                        getline(cin, check_in);
                        cout << "Waktu Check In (HH:MM): "; // Jam Untuk Check in
                        getline(cin, waktu_check_in);
                        cout << "Check Out (dd/mm/yyyy): "; // Tanggal Chech out
                        getline(cin, check_out);
                        cout << "Waktu Check Out (HH:MM): "; // Jam Untuk Check out
                        getline(cin, waktu_check_out);

                        cout << "Harga per kamar : " << harga_2 << endl;
                        cout << "Total : " << total_harga(jumlah, harga_2, lama_inap) << endl;
                        int total = total_harga(jumlah, harga_2, lama_inap);

                    // pilihan pembayaran
                    loop_bayar_1_2:
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
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
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
                            cout << "Masukan Pilihan (1-2) : ";
                            cin >> pilih_bank;
                            if (pilih_bank == 1)
                            {
                                string bayar = bank_bri;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 2)
                            {
                                string bayar = bank_bni;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 3)
                            {
                                string bayar = bank_bca;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 4)
                            {
                                string bayar = bank_bsi;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else
                            {
                                cout << "Pilihan anda tidak valid" << endl;
                                goto loop_bank1;
                            }
                        }
                        else
                        {
                            cout << "Pilihan anda tidak valid" << endl;
                            goto loop_bayar_1_2;
                        }
                    }
                    else
                    {
                        cout << "Maaf, Tidak Ada Kamar Yang Tersedia\n";
                        goto loop_inap_1_2;
                    }
                }
                else if (pilihan_kamar == 3)
                {

                    cout << "Kamar : " << jenis_3 << endl;
                loop_inap_1_3:
                    int jumlah_kamar = 5;
                    cout << "Jumlah Kamar (Tersedia 5 Kamar) : "; // Jumlah kamar yang ingin dipesan
                    cin >> jumlah;

                    if (jumlah <= jumlah_kamar)
                    {
                        cout << "Lama Inap : "; // Lama user menginap
                        cin >> lama_inap;
                        getchar();
                        cout << "Check In (dd/mm/yyyy): "; // Tanggal Check in
                        getline(cin, check_in);
                        cout << "Waktu Check In (HH:MM): "; // Jam Untuk Check in
                        getline(cin, waktu_check_in);
                        cout << "Check Out (dd/mm/yyyy): "; // Tanggal Chech out
                        getline(cin, check_out);
                        cout << "Waktu Check Out (HH:MM): "; // Jam Untuk Check out
                        getline(cin, waktu_check_out);

                        cout << "Harga per kamar : " << harga_1 << endl;
                        cout << "Total : " << total_harga(jumlah, harga_3, lama_inap) << endl;
                        int total = total_harga(jumlah, harga_3, lama_inap);

                    // pilihan pembayaran
                    loop_bayar_1_3:
                        cout << "Pilih Pembayaran" << endl;
                        cout << "1. " + bayar_1 << "\n";
                        cout << "2. " + bayar_2 << "\n";

                        cout << "Masukan Pilihan (1-2) : ";
                        cin >> pilih_bayar;
                        string bank_bri = "BRI";
                        string bank_bni = "BNI";
                        string bank_bca = "BCA";
                        string bank_bsi = "BSI";
                        if (pilih_bayar == 1)
                        {
                            string bayar = bayar_1;
                            cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
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
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 2)
                            {
                                string bayar = bank_bni;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 3)
                            {
                                string bayar = bank_bca;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 4)
                            {
                                string bayar = bank_bsi;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_1, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
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
                        cout << "Maaf, Tidak Ada Kamar Yang Tersedia\n";
                        goto loop_inap_1_3;
                    }
                }
                else
                {
                    cout << "Kamar tidak valid\n";
                    goto loop_form_kamar_1_1;
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
                loop_inap_2_1:
                    int jumlah_kamar = 12;
                    cout << "Jumlah Kamar (Tersedia 12 Kamar) : "; // Jumlah kamar yang ingin dipesan
                    cin >> jumlah;

                    if (jumlah <= jumlah_kamar)
                    {
                        cout << "Lama Inap : "; // Lama user menginap
                        cin >> lama_inap;
                        getchar();
                        cout << "Check In (dd/mm/yyyy): "; // Tanggal Check in
                        getline(cin, check_in);
                        cout << "Waktu Check In (HH:MM): "; // Jam Untuk Check in
                        getline(cin, waktu_check_in);
                        cout << "Check Out (dd/mm/yyyy): "; // Tanggal Chech out
                        getline(cin, check_out);
                        cout << "Waktu Check Out (HH:MM): "; // Jam Untuk Check out
                        getline(cin, waktu_check_out);

                        cout << "Harga per kamar : " << harga_1 << endl;
                        cout << "Total : " << total_harga(jumlah, harga_1, lama_inap) << endl;
                        int total = total_harga(jumlah, harga_1, lama_inap);

                    // pilihan pembayaran
                    loop_bayar_2_1:
                        cout << "Pilih Pembayaran" << endl;
                        cout << "1. " + bayar_1 << "\n";
                        cout << "2. " + bayar_2 << "\n";

                        cout << "Masukan Pilihan (1-2) : ";
                        cin >> pilih_bayar;
                        string bank_bri = "BRI";
                        string bank_bni = "BNI";
                        string bank_bca = "BCA";
                        string bank_bsi = "BSI";
                        if (pilih_bayar == 1)
                        {
                            string bayar = bayar_1;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
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
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 2)
                            {
                                string bayar = bank_bni;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 3)
                            {
                                string bayar = bank_bca;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 4)
                            {
                                string bayar = bank_bsi;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
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
                            goto loop_bayar_2_1;
                        }
                    }
                    else
                    {
                        cout << "Maaf, Tidak Ada Kamar Yang Tersedia" << endl;
                        goto loop_inap_2_1;
                    }
                }
                else if (pilihan_kamar == 2)
                {

                    cout << "Kamar : " << jenis_2 << endl;
                loop_inap_2_2:
                    int jumlah_kamar = 8;
                    cout << "Jumlah Kamar (Tersedia 8 Kamar) : "; // Jumlah kamar yang ingin dipesan
                    cin >> jumlah;

                    if (jumlah <= jumlah_kamar)
                    {
                        cout << "Lama Inap : "; // Lama user menginap
                        cin >> lama_inap;
                        getchar();
                        cout << "Check In (dd/mm/yyyy): "; // Tanggal Check in
                        getline(cin, check_in);
                        cout << "Waktu Check In (HH:MM): "; // Jam Untuk Check in
                        getline(cin, waktu_check_in);
                        cout << "Check Out (dd/mm/yyyy): "; // Tanggal Chech out
                        getline(cin, check_out);
                        cout << "Waktu Check Out (HH:MM): "; // Jam Untuk Check out
                        getline(cin, waktu_check_out);

                        cout << "Harga per kamar : " << harga_2 << endl;
                        cout << "Total : " << total_harga(jumlah, harga_2, lama_inap) << endl;
                        int total = total_harga(jumlah, harga_2, lama_inap);

                    // pilihan pembayaran
                    loop_bayar_2_2:
                        cout << "Pilih Pembayaran" << endl;
                        cout << "1. " + bayar_1 << "\n";
                        cout << "2. " + bayar_2 << "\n";

                        cout << "Masukan Pilihan (1-2) : ";
                        cin >> pilih_bayar;
                        string bank_bri = "BRI";
                        string bank_bni = "BNI";
                        string bank_bca = "BCA";
                        string bank_bsi = "BSI";

                        if (pilih_bayar == 1)
                        {
                            string bayar = bayar_1;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
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
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 2)
                            {
                                string bayar = bank_bni;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 3)
                            {
                                string bayar = bank_bca;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 4)
                            {
                                string bayar = bank_bsi;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
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
                            goto loop_bayar_2_2;
                        }
                    }
                    else
                    {
                        cout << "Maaf, Tidak Ada Kamar Yang Tersedia" << endl;
                        goto loop_inap_2_2;
                    }
                }
                else if (pilihan_kamar == 3)
                {

                    cout << "Kamar : " << jenis_3 << endl;
                loop_inap_2_3:
                    int jumlah_kamar = 8;
                    cout << "Jumlah Kamar (Tersedia 8 Kamar) : "; // Jumlah kamar yang ingin dipesan
                    cin >> jumlah;

                    if (jumlah <= jumlah_kamar)
                    {
                        cout << "Lama Inap : "; // Lama user menginap
                        cin >> lama_inap;
                        getchar();
                        cout << "Check In (dd/mm/yyyy): "; // Tanggal Check in
                        getline(cin, check_in);
                        cout << "Waktu Check In (HH:MM): "; // Jam Untuk Check in
                        getline(cin, waktu_check_in);
                        cout << "Check Out (dd/mm/yyyy): "; // Tanggal Chech out
                        getline(cin, check_out);
                        cout << "Waktu Check Out (HH:MM): "; // Jam Untuk Check out
                        getline(cin, waktu_check_out);

                        cout << "Harga per kamar : " << harga_1 << endl;
                        cout << "Total : " << total_harga(jumlah, harga_3, lama_inap) << endl;
                        int total = total_harga(jumlah, harga_3, lama_inap);

                    // pilihan pembayaran
                    loop_bayar_2_3:
                        cout << "Pilih Pembayaran" << endl;
                        cout << "1. " + bayar_1 << "\n";
                        cout << "2. " + bayar_2 << "\n";

                        cout << "Masukan Pilihan (1-2) : ";
                        cin >> pilih_bayar;
                        string bank_bri = "BRI";
                        string bank_bni = "BNI";
                        string bank_bca = "BCA";
                        string bank_bsi = "BSI";
                        if (pilih_bayar == 1)
                        {
                            string bayar = bayar_1;
                            cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
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
                            cin >> pilih_bank;
                            if (pilih_bank == 1)
                            {
                                string bayar = bank_bri;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 2)
                            {
                                string bayar = bank_bni;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 3)
                            {
                                string bayar = bank_bca;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank == 4)
                            {
                                string bayar = bank_bsi;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_2, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
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
                            goto loop_bayar_2_3;
                        }
                    }
                    else
                    {
                        cout << "Maaf, Tidak Ada Kamar Yang Tersedia" << endl;
                        goto loop_inap_2_3;
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
            loop_form_kamar_3_1:
                string jenis_1 = "Standar";
                string jenis_2 = "Deluxe";
                string jenis_3 = "Suite";

                string bayar_1 = "Cash";
                string bayar_2 = "Bank";

                int harga_1 = 200000;
                int harga_2 = 500000;
                int harga_3 = 800000;

                int pilihan_kamar;

                cout << "Jenis Kamar\n";
                cout << "1. " + jenis_1 << "\n"
                     << "2. " + jenis_2 << "\n"
                     << "3. " + jenis_3 << "\n";
                cout << "Masukan Pilihan  : ";
                cin >> pilihan_kamar;

                if (pilihan_kamar == 1)
                {

                    cout << "Kamar : " << jenis_1 << endl;
                loop_inap_3_1:
                    int jumlah_kamar = 8;
                    cout << "Jumlah Kamar (Tersedia 8 Kamar) : "; // Jumlah kamar yang ingin dipesan
                    cin >> jumlah;

                    if (jumlah <= jumlah_kamar)
                    {
                        cout << "Lama Inap : "; // Lama user menginap
                        cin >> lama_inap;
                        getchar();
                        cout << "Check In (dd/mm/yyyy): "; // Tanggal Check in
                        getline(cin, check_in);
                        cout << "Waktu Check In (HH:MM): "; // Jam Untuk Check in
                        getline(cin, waktu_check_in);
                        cout << "Check Out (dd/mm/yyyy): "; // Tanggal Chech out
                        getline(cin, check_out);
                        cout << "Waktu Check Out (HH:MM): "; // Jam Untuk Check out
                        getline(cin, waktu_check_out);

                        cout << "Harga per kamar : " << harga_1 << endl;
                        cout << "Total : " << total_harga(jumlah, harga_1, lama_inap) << endl;
                        int total = total_harga(jumlah, harga_1, lama_inap);

                    // pilihan pembayaran
                    loop_bayar_3_1:
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
                            cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bayar == 2)
                        {
                            int pilih_bank_3;
                        loop_bank_3_1:
                            cout << "Pilih jenis bank : \n";
                            cout << "1. " + bank_bri << endl;
                            cout << "2. " + bank_bni << endl;
                            cout << "3. " + bank_bca << endl;
                            cout << "4. " + bank_bsi << endl;
                            cout << "Masukan Pilihan : ";
                            cin >> pilih_bank_3;
                            if (pilih_bank_3 == 1)
                            {
                                string bayar = bank_bri;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank_3 == 2)
                            {
                                string bayar = bank_bni;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank_3 == 3)
                            {
                                string bayar = bank_bca;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank_3 == 4)
                            {
                                string bayar = bank_bsi;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_1, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else
                            {
                                cout << "Pilihan anda tidak valid" << endl;
                                goto loop_bank_3_1;
                            }
                        }
                        else
                        {
                            cout << "Pilihan anda tidak valid" << endl;
                            goto loop_bayar_3_1;
                        }
                    }
                    else
                    {
                        cout << "Maaf, Tidak Ada Kamar Yang Tersedia\n";
                        goto loop_inap_3_1;
                    }
                }
                else if (pilihan_kamar == 2)
                {
                    cout << "Kamar : " << jenis_2 << endl;
                loop_inap_3_2:
                    int jumlah_kamar = 10;
                    cout << "Jumlah Kamar (Tersedia 10 Kamar) : "; // Jumlah kamar yang ingin dipesan
                    cin >> jumlah;

                    if (jumlah <= jumlah_kamar)
                    {
                        cout << "Lama Inap : "; // Lama user menginap
                        cin >> lama_inap;
                        getchar();
                        cout << "Check In (dd/mm/yyyy): "; // Tanggal Check in
                        getline(cin, check_in);
                        cout << "Waktu Check In (HH:MM): "; // Jam Untuk Check in
                        getline(cin, waktu_check_in);
                        cout << "Check Out (dd/mm/yyyy): "; // Tanggal Chech out
                        getline(cin, check_out);
                        cout << "Waktu Check Out (HH:MM): "; // Jam Untuk Check out
                        getline(cin, waktu_check_out);

                        cout << "Harga per kamar : " << harga_2 << endl;
                        cout << "Total : " << total_harga(jumlah, harga_2, lama_inap) << endl;
                        int total = total_harga(jumlah, harga_2, lama_inap);

                    // pilihan pembayaran
                    loop_bayar_3_2:
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
                            cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bayar == 2)
                        {
                            int pilih_bank_3;
                        loop_bank_3_2:
                            cout << "Pilih jenis bank : \n";
                            cout << "1. " + bank_bri << endl;
                            cout << "2. " + bank_bni << endl;
                            cout << "3. " + bank_bca << endl;
                            cout << "4. " + bank_bsi << endl;
                            cout << "Masukan Pilihan : ";
                            cin >> pilih_bank_3;
                            if (pilih_bank_3 == 1)
                            {
                                string bayar = bank_bri;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank_3 == 2)
                            {
                                string bayar = bank_bni;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank_3 == 3)
                            {
                                string bayar = bank_bca;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank_3 == 4)
                            {
                                string bayar = bank_bsi;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_2, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else
                            {
                                cout << "Pilihan anda tidak valid" << endl;
                                goto loop_bank_3_2;
                            }
                        }
                        else
                        {
                            cout << "Pilih tidak valid" << endl;
                            goto loop_bayar_3_2;
                        }
                    }
                    else
                    {
                        cout << "Maaf, Tidak Ada Kamar Yang Tersedia\n";
                        goto loop_inap_3_2;
                    }
                }
                else if (pilihan_kamar == 3)
                {

                    cout << "Kamar : " << jenis_3 << endl;
                loop_inap_3_3:
                    int jumlah_kamar = 9;
                    cout << "Jumlah Kamar (Tersedia 9 Kamar) : "; // Jumlah kamar yang ingin dipesan
                    cin >> jumlah;

                    if (jumlah <= jumlah_kamar)
                    {
                        cout << "Lama Inap : "; // Lama user menginap
                        cin >> lama_inap;
                        getchar();
                        cout << "Check In (dd/mm/yyyy): "; // Tanggal Check in
                        getline(cin, check_in);
                        cout << "Waktu Check In (HH:MM): "; // Jam Untuk Check in
                        getline(cin, waktu_check_in);
                        cout << "Check Out (dd/mm/yyyy): "; // Tanggal Chech out
                        getline(cin, check_out);
                        cout << "Waktu Check Out (HH:MM): "; // Jam Untuk Check out
                        getline(cin, waktu_check_out);

                        cout << "Harga per kamar : " << harga_1 << endl;
                        cout << "Total : " << total_harga(jumlah, harga_3, lama_inap) << endl;
                        int total = total_harga(jumlah, harga_3, lama_inap);

                    // pilihan pembayaran
                    loop_bayar_3_3:
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
                            cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                        }
                        else if (pilih_bayar == 2)
                        {
                            int pilih_bank_3;
                        loop_bank_3_3:
                            cout << "Pilih jenis bank : \n";
                            cout << "1. " + bank_bri << endl;
                            cout << "2. " + bank_bni << endl;
                            cout << "3. " + bank_bca << endl;
                            cout << "4. " + bank_bsi << endl;
                            cout << "Masukan Pilihan : ";
                            cin >> pilih_bank_3;
                            if (pilih_bank_3 == 1)
                            {
                                string bayar = bank_bri;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank_3 == 2)
                            {
                                string bayar = bank_bni;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank_3 == 3)
                            {
                                string bayar = bank_bca;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else if (pilih_bank_3 == 4)
                            {
                                string bayar = bank_bsi;
                                cout << "Bank : " << bayar << endl;
                                cout << print_invoice(nama, nomer_hp, email, hotel_3, jenis_3, jumlah, lama_inap, check_in, waktu_check_in, check_out, waktu_check_out, total, bayar);
                            }
                            else
                            {
                                cout << "Pilihan anda tidak valid" << endl;
                                goto loop_bank_3_3;
                            }
                        }
                        else
                        {
                            cout << "Pilihan anda tidak valid" << endl;
                            goto loop_bayar_3_3;
                        }
                    }
                    else
                    {
                        cout << "Maaf, Tidak Ada Kamar Yang Tersedia\n";
                        goto loop_inap_3_3;
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
                cout << "______________________________________\n";
                goto loop_form_hotel;
            }
            cout << "------------------------------------------------\n";
            cout << "         Terimakasih Telah Berkunjung\n";
            cout << " ------------------------------------------------\n";
        }
        break;
        // Bantuan
        case 3:
        {
            int pilih_bantuan;
            int pilih_faq;
        loop_bantuan:
            cout << "\n__________________________________________________\n";
            cout << "--------------------Bantuan-----------------------\n";
            cout << "1. Hubungi\n";
            cout << "2. FAQ\n";
            cout << "3. Syarat & kententuan\n";
            cout << "4. Keluar\n";
            cout << "Masukan pilihan anda : ";
            cin >> pilih_bantuan;

            if (pilih_bantuan == 1)
            {
                cout << "--------------------Hubungi-----------------------\n";
                cout << "=====Klik Link Dibawah Ini=====\n";
                cout << "https://wa.me/qr/WR3BWCU5TORAL1\n";
                goto loop_bantuan;
                cout << endl;
            }

            else if (pilih_bantuan == 2)
            {
            loop_faq:
                cout << "__________________________________________________\n";
                cout << "\nDibawah ini merupakan prototype\n";
                cout << "-------------------------FAQ----------------------" << endl;
                cout << "1. Apa saja yang harus saya persiapkan sebelum memesan hotel melalui aplikasi kami?" << endl;
                cout << "2. Bagaimana cara melakukan pemesanan hotel melalui aplikasi kami?" << endl;
                cout << "3. Apakah pemesanan hotel melalui aplikasi kami aman?" << endl;
                cout << "4. Bagaimana jika saya ingin membatalkan pemesanan hotel yang telah dikonfirmasi?" << endl;
                cout << "5. Dapatkah saya mengubah detail pemesanan hotel yang telah dikonfirmasi?" << endl;
                cout << "6. Bagaimana jika saya mengalami masalah atau memiliki pertanyaan saat menggunakan aplikasi kami?" << endl;
                cout << "7. Keluar\n";
                cout << "Masukan Pilihan (1-7) : ";
                cin >> pilih_faq;
                if (pilih_faq == 1)
                {
                    cout << "Pertama-tama, Anda harus membuat akun terlebih dahulu dengan mengisi data diri dan informasi kontak yang valid. Selain itu, pastikan Anda memiliki metode pembayaran yang valid yang akan digunakan untuk mengkonfirmasi pemesanan.";
                    cout << endl;
                    goto loop_faq;
                }
                else if (pilih_faq == 2)
                {
                    cout << "Setelah Anda membuat akun dan masuk ke aplikasi, Anda dapat mencari hotel yang sesuai dengan keinginan Anda dengan menggunakan filter pencarian yang tersedia. Setelah Anda menemukan hotel yang diinginkan, Anda dapat memilih tanggal pemesanan dan melakukan pembayaran untuk mengkonfirmasi pemesanan.";
                    cout << endl;
                    goto loop_faq;
                }
                else if (pilih_faq == 3)
                {
                    cout << "Ya, semua pemesanan hotel melalui aplikasi kami dilindungi dengan teknologi enkripsi yang canggih dan sistem keamanan yang ketat untuk melindungi informasi pribadi dan transaksi Anda.";
                    cout << endl;
                    goto loop_faq;
                }
                else if (pilih_faq == 4)
                {
                    cout << "Anda dapat membatalkan pemesanan hotel yang telah dikonfirmasi dengan masuk ke akun Anda dan menemukan opsi pembatalan di halaman rincian pemesanan. Namun, pastikan untuk membatalkan pemesanan sebelum batas waktu yang ditentukan karena beberapa hotel mungkin membebankan biaya pembatalan. ";
                    cout << endl;
                    goto loop_faq;
                }
                else if (pilih_faq == 5)
                {
                    cout << "Anda dapat mengubah detail pemesanan hotel yang telah dikonfirmasi, namun pastikan untuk melakukannya sebelum batas waktu yang ditentukan dan dapat menghubungi customer service kami untuk bantuan.";
                    cout << endl;
                    goto loop_faq;
                }
                else if (pilih_faq == 6)
                {
                    cout << "Anda dapat menghubungi customer service kami melalui fitur dukungan yang tersedia dalam aplikasi atau melalui email/telepon yang tercantum dalam website kami. Tim kami akan segera menangani masalah atau pertanyaan Anda.";
                    cout << endl;
                    goto loop_faq;
                }
                else if (pilih_faq == 7)
                {
                    cout << endl;
                    goto loop_bantuan;
                }
                else
                {
                    cout << "pilihan tidak valid";
                    cout << endl;
                    goto loop_faq;
                }
            }
            else if (pilih_bantuan == 3)
            {
                cout << endl;
                cout << "------------------------------------------------\n";
                cout << "Syarat dan Ketentuan Penggunaan Aplikasi Get a Room : " << endl;
                cout << "1. Pengguna harus berusia 18 tahun atau lebih untuk dapat menggunakan aplikasi ini." << endl;
                cout << "2. Pengguna harus memberikan informasi yang benar dan valid pada saat pendaftaran dan pemesanan." << endl;
                cout << "3. Pengguna bertanggung jawab atas keamanan dan kerahasiaan informasi yang dimasukkan ke dalam aplikasi." << endl;
                cout << "4. Pengguna diharuskan untuk membayar sebelum melakukan pemesanan kamar." << endl;
                cout << "5. Pembatalan pemesanan harus dilakukan 24 jam sebelum jadwal check-in." << endl;
                cout << "6. Aplikasi ini tidak bertanggung jawab atas kerusakan atau kehilangan barang pribadi pengguna selama menginap." << endl;
                cout << "7. Pengguna harus mematuhi peraturan hotel yang berlaku saat menginap." << endl;
                cout << "8. Pengguna diharuskan untuk menghormati privasi tamu lain yang menginap di hotel yang sama." << endl;
                cout << "9. Pengguna setuju untuk tidak melakukan aktivitas ilegal atau menyalahi hukum saat menggunakan aplikasi ini." << endl;
                cout << "10. Aplikasi Get a Room berhak untuk melakukan perubahan syarat dan ketentuan ini sewaktu-waktu tanpa pemberitahuan terlebih dahulu." << endl;

                goto loop_bantuan;
                cout << endl;
            }
            else if (pilih_bantuan == 4)
            {
                goto loop_menu;
            }
            else
            {
                cout << "Pilihan anda tidak valid";
                goto loop_bantuan;
            }
        }
        break;
        // Keluar Aplikasi
        case 4:
        {
            cout << "---------------------------------------------------\n";
            cout << "         Terimakasih Telah Berkunjung\n";
            cout << "---------------------------------------------------\n";
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
