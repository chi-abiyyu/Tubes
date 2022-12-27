#include <iostream>
#include <string>

using namespace std;

int main() {
  // Tampilkan judul aplikasi
  cout << "Get a Room" << endl;
  cout << "----------" << endl;

  // Definisikan variabel
  string tipe_kamar;
  int jumlah_kamar;
  int lama_inap;
  int harga_kamar;
  int total_harga;

  // Tanya pengguna tipe kamar yang diinginkan
  cout << "Tipe kamar yang tersedia: " << endl;
  cout << "1. Standard Room" << endl;
  cout << "2. Deluxe Room" << endl;
  cout << "3. Suite Room" << endl;
  cout << "Masukkan pilihan Anda (1-3): ";
  cin >> tipe_kamar;

  // Tentukan harga kamar sesuai tipe yang dipilih
  if (tipe_kamar == "1") {
    harga_kamar = 100000;
    tipe_kamar = "Standard Room";
  } else if (tipe_kamar == "2") {
    harga_kamar = 150000;
    tipe_kamar = "Deluxe Room";
  } else if (tipe_kamar == "3") {
    harga_kamar = 200000;
    tipe_kamar = "Suite Room";
  } else {
    // Jika tipe yang dipilih tidak valid, tampilkan pesan error
    cout << "Pilihan tipe kamar tidak valid. Silakan coba lagi." << endl;
    return 0;
  }

  // Tanya pengguna jumlah kamar yang diinginkan
  cout << "Masukkan jumlah kamar yang diinginkan: ";
  cin >> jumlah_kamar;

  // Tanya pengguna lama inap yang diinginkan
  cout << "Masukkan lama inap (dalam hari): ";
  cin >> lama_inap;

  // Hitung total harga
  total_harga = harga_kamar * jumlah_kamar * lama_inap;

  // Tampilkan rincian pesanan
  cout << "Rincian pesanan:" << endl;
  cout << "Tipe kamar: " << tipe_kamar << endl;
  cout << "Jumlah kamar: " << jumlah_kamar << endl;
  cout << "Lama inap: " << lama_inap << " hari" << endl;
  cout << "Total harga: Rp " << total_harga << endl;

  return 0;
}
