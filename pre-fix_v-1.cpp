#include <iostream>
#include <string>

using namespace std;

int total_biaya(long jumlah, long harga, long lama_inap)
{
    return jumlah * harga * lama_inap + lama_inap - 2;
}

void invoice(int x, int z, int v)
{
    cout << x << z << v;
}

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
        cout << "4. Keluar\n";
        cout << "Masukan Pilihan Anda (1-4) : \n";
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
                cout << "3. Kembali Ke Menu Awal\n";
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
                else if (pilihan_menu_hotel == 3)
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
        case 2:
        {
            string nama, check_out, check_in;
            int lama_inap;
            int jumlah_orang;
            int pilih_hotel;
            int pilih_pembayaran;

            getchar();
            cout << "---Buat Pesanan---\n";
            cout << "Masukan Nama : ";
            getline(cin, nama);
            cout << "Jumlah Orang : ";
            cin >> jumlah_orang;
            cout << "Lama Inap : ";
            cin >> lama_inap;
        loop_pilih_hotel_form:
            cout << "Pilih Hotel : \n";
            cout << "1. Hotel Permen\n";
            cout << "2. Hotel Donat\n";
            cout << "3. Hotel Coklat\n";
            cout << "Pilihan anda (1-3) : ";
            cin >> pilih_hotel;
            if (pilih_hotel == 1)
            {
            loop_jenis_permen:
                int pilih_jenis;
                int single_permen = 200000;
                int deluxe_permen = 500000;
                int suite_permen = 800000;

                cout << "Hotel : Permen\n";

                cout << "Jenis Kamar : \n";
                cout << "1. Single\n";
                cout << "2. Deluxe\n";
                cout << "3. Suite\n";
                cout << "Masukan Pilihan Anda : ";
                cin >> pilih_jenis;
                if (pilih_jenis == 1)
                {
                    cout << "Jenis Kamar : Single \n";
                    cout << "Harga Per Kamar : " << single_permen << endl;
                    cout << "Total : " << total_biaya(jumlah_orang, single_permen, lama_inap) << endl;
                }
                else if (pilih_jenis == 2)
                {

                    cout << "Jenis Kamar : Deluxe\n";
                    cout << "Harga Per Kamar : " << deluxe_permen << endl;
                    cout << "Total : " << total_biaya(jumlah_orang, deluxe_permen, lama_inap) << endl;
                }
                else if (pilih_jenis == 3)
                {

                    cout << "Jenis Kamar : Suite\n";
                    cout << "Harga Per Kamar : " << suite_permen << endl;
                    cout << "Total : " << total_biaya(jumlah_orang, suite_permen, lama_inap) << endl;
                }
                else
                {
                    cout << "Maaf Anda Salah Input\n";
                    cout << "Silahkan Ulangi Pilihan Anda\n\n";
                    goto loop_jenis_permen;
                }
            }
            else if (pilih_hotel == 2)
            {
            loop_jenis_donat:
                int pilih_jenis;
                int single_donat = 200000;
                int deluxe_donat = 500000;
                int suite_donat = 800000;

                cout << "Hotel : Donat\n";

                cout << "Jenis Kamar : \n";
                cout << "1. Single\n";
                cout << "2. Deluxe\n";
                cout << "3. Suite\n";
                cout << "Masukan Pilihan Anda : ";
                cin >> pilih_jenis;
                if (pilih_jenis == 1)
                {
                    cout << "Jenis Kamar : Singe\n";
                    cout << "Harga Per Kamar : " << single_donat << endl;
                    cout << "Total : " << total_biaya(jumlah_orang, single_donat, lama_inap) << endl;
                }
                else if (pilih_jenis == 2)
                {

                    cout << "Jenis Kamar : Delux\n";
                    cout << "Harga Per Kamar : " << deluxe_donat << endl;
                    cout << "Total : " << total_biaya(jumlah_orang, deluxe_donat, lama_inap) << endl;
                }
                else if (pilih_jenis == 3)
                {

                    cout << "Jenis Kamar : Suit\n";
                    cout << "Harga Per Kamar : " << suite_donat << endl;
                    cout << "Total : " << total_biaya(jumlah_orang, suite_donat, lama_inap) << endl;
                }
                else
                {
                    cout << "Maaf Anda Salah Input\n";
                    cout << "Silahkan Ulangi Pilihan Anda\n\n";
                    goto loop_jenis_donat;
                }
            }
            else if (pilih_hotel == 3)
            {
            loop_jenis_coklat:
                int pilih_jenis;
                int single_coklat = 200000;
                int deluxe_coklat = 500000;
                int suite_coklat = 800000;

                cout << "Hotel : Coklat\n";

                cout << "Jenis Kamar : \n";
                cout << "1. Single\n";
                cout << "2. Deluxe\n";
                cout << "3. Suite\n";
                cout << "Masukan Pilihan Anda : ";
                cin >> pilih_jenis;
                if (pilih_jenis == 1)
                {
                    cout << "Jenis Kamar : Single\n";
                    cout << "Harga Per Kamar : " << single_coklat << endl;
                    cout << "Total : " << total_biaya(jumlah_orang, single_coklat, lama_inap) << endl;
                }
                else if (pilih_jenis == 2)
                {

                    cout << "Jenis Kamar : Deluxe\n";
                    cout << "Harga Per Kamar : " << deluxe_coklat << endl;
                    cout << "Total : " << total_biaya(jumlah_orang, deluxe_coklat, lama_inap) << endl;
                }
                else if (pilih_jenis == 3)
                {

                    cout << "Jenis Kamar : Suite\n";
                    cout << "Harga Per Kamar : " << suite_coklat << endl;
                    cout << "Total : " << total_biaya(jumlah_orang, suite_coklat, lama_inap) << endl;
                }
                else
                {
                    cout << "Maaf Anda Salah Input\n";
                    cout << "Silahkan Ulangi Pilihan Anda\n\n";
                    goto loop_jenis_coklat;
                }
            }
            else
            {
                cout << "Sepertinya Anda Salah Input\n";
                cout << "Silahkan Masukan Pilihan Anda Kembali\n";
            }
            getchar();
            cout << "Tanggal Check In Idd/mm/yy): ";
            getline(cin, check_in);
            cout << "Tanggal Check Out : ";
            getline(cin, check_out);

        loop_pilihan_pembayaran:
            cout << "Jenis Pembayaran : \n";
            cout << "1. Bank\n";
            cout << "2. Cash\n";
            cout << "Pilih Pembayaran : \n";
            cin >> pilih_pembayaran;
            if (pilih_pembayaran == 1)
            {
                int pilihan_bank;
                string bri = "3233-uu-xxxx-xxxx-xxx";
                string bni = "3233-yy-xxxx-xxxx-xxx";
                string bca = "3233-zz-xxxx-xxxx-xxx";
                string permata = "3233-ii-xxxx-xxxx-xxx";
            loop_pilihan_bank:
                cout << "Pilih Bank : \n";
                cout << "1. Bank BRI\n";
                cout << "2. Bank BNI\n";
                cout << "3. Bank BCA\n";
                cout << "4. Bank Permata\n";
                cout << "5. Bank Lainya\n";
                cout << "6. Kembali\n";
                cout << "Pilihan Bank : ";
                cin >> pilihan_bank;
                if (pilihan_bank == 1)
                {
                    cout << "Bank BRI : " << bri << endl;
                }
                else if (pilihan_bank == 2)
                {
                    cout << "Bank BNI : " << bni << endl;
                }
                else if (pilihan_bank == 3)
                {
                    cout << "Bank BCA : " << bca << endl;
                }
                else if (pilihan_bank == 4)
                {
                    cout << "Bank Permata : " << permata << endl;
                }
                else if (pilihan_bank == 5)
                {
                    cout << "Coming Soon";
                    cout << "..................\n";
                    goto loop_pilihan_pembayaran;
                }
                else if (pilihan_bank == 6)
                {
                    goto loop_pilihan_pembayaran;
                }
                else
                {
                    cout << "Sepertinya Anda Salah Input\n";
                    cout << "Silahkan Masukan Pilihan Anda Kembali\n";
                    goto loop_pilihan_bank;
                }
            }
            else if (pilih_pembayaran == 2)
            {
                cout << "Pembayaran : Cash Tunai";
            }
            else
            {
                cout << "Maaf Pilihan Anda tidak Tersedia\n";
                cout << "Silahkan Masukan Pilihan Anda Kembali\n";
                goto loop_pilihan_pembayaran;
            }

        }
        break;
        case 3:
        {
            int pilih_bantuan;
        loop_bantuan:
            cout << "-----Pusat Bantuan------\n";
            cout << "1. Hubungi Layanan Get a Room\n";
            cout << "2. Syarat dan Kebijakan\n";
            cout << "3. Kembali\n";
            cout << "Masukan Pilihan Anda : ";
            cin >> pilih_bantuan;

            if (pilih_bantuan == 1)
            {
                cout << "Silhkan klik tautan di bawah ini : \n";
                cout << "https://wa.me/088551112200\n\n";
                goto loop_bantuan;
            }
            else if (pilih_bantuan == 2)
            {

                cout << "Syarat dan Kebijakan\n";
                cout << "1. Pengguna harus berusia minimal 18 tahun untuk menggunakan aplikasi ini.\n";
                cout << "2. Pengguna harus memasukkan data yang benar dan akurat saat mendaftar.\n";
                cout << "3. Konten yang tidak sesuai dengan norma-norma dan aturan yang berlaku tidak diizinkan dalam aplikasi ini.\n";
                cout << "4. Kami berhak untuk menghapus akun pengguna yang melanggar syarat dan ketentuan ini tanpa pemberitahuan terlebih dahulu.\n";
                cout << "5. Kami tidak bertanggung jawab atas setiap transaksi yang terjadi antara pengguna dengan pihak ketiga yang menyewakan ruangan.\n";
                cout << "6. Pengguna setuju untuk memberikan feedback yang sesuai setelah menyewa ruangan melalui aplikasi ini.\n";
                cout << "7. Kami dapat mengubah syarat dan ketentuan ini sewaktu-waktu. Pengguna diwajibkan untuk memeriksa syarat dan ketentuan ini secara berkala.\n\n";

                goto loop_bantuan;
            }
            else if (pilih_bantuan == 3)
            {
                cout << "\n\n";
                goto loop_menu;
            }
            else
            {
                cout << "Sepertinya Anda Salah Input\n";
                cout << "Silhkan Masukan Pilihan Anda Kembali : \n\n";
                goto loop_bantuan;
            }
        }
        break;
        case 4:
        {
            return 0;
        }
        break;
        default:
        {
        }
        }
    }
    else
    {
        cout << "Terimakasih Telah Berkunjung";
        return 0;
    }
}
