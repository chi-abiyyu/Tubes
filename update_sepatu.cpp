#include <iostream>
#include <string>

using namespace std;

struct Shoe
{
    int stock;
    string jenis;
    string brand;
};

const int MAX_INVENTORY_SIZE = 100;

void addShoe(Shoe inventory[], int &count, int stock, string jenis, string brand)
{
    if (count >= MAX_INVENTORY_SIZE)
    {
        cout << "Inventaris penuh. Tidak dapat menambahkan sepatu baru." << endl;
        return;
    }

    Shoe newShoe;
    newShoe.stock = stock;
    newShoe.jenis = jenis;
    newShoe.brand = brand;

    inventory[count] = newShoe;
    count++;

    // cout << "Sepatu berhasil ditambahkan ke inventaris." << endl;
}

void printInventory(const Shoe inventory[], int count)
{
    if (count == 0)
    {
        cout << "Inventaris kosong." << endl;
        return;
    }

    cout << "Inventaris sepatu:" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "Sepatu " << i + 1 << ":" << endl;
        cout << "Stock: " << inventory[i].stock << endl;
        cout << "Warna: " << inventory[i].jenis << endl;
        cout << "Merek: " << inventory[i].brand << endl;
        cout << endl;
    }
}

void removeShoe(Shoe inventory[], int &count, const string &brand)
{
    int index = -1;
    for (int i = 0; i < count; i++)
    {
        if (inventory[i].brand == brand)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        cout << "Sepatu dengan merek '" << brand << "' tidak ditemukan dalam inventaris." << endl;
        return;
    }

    for (int i = index; i < count - 1; i++)
    {
        inventory[i] = inventory[i + 1];
    }

    count--;

    cout << "Sepatu dengan merek '" << brand << "' berhasil dihapus dari inventaris." << endl;
}

// Struktur data untuk menyimpan informasi transaksi
struct Transaction
{
    string date;
    string merk;
    int quantity;
    // Tambahkan atribut lain sesuai kebutuhan
    Transaction *next;
};

// Fungsi untuk menambahkan transaksi ke linked list
void addTransaction(Transaction *&head, const string &date, const string &merk, int quantity)
{
    Transaction *newTransaction = new Transaction;
    newTransaction->date = date;
    newTransaction->merk = merk;
    newTransaction->quantity = quantity;
    newTransaction->next = nullptr;

    if (head == nullptr)
    {
        head = newTransaction;
    }
    else
    {
        Transaction *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newTransaction;
    }

    // cout << "Transaksi berhasil ditambahkan." << endl;
}

// Fungsi untuk mencetak riwayat transaksi
void printTransactionHistory(const Transaction *head)
{
    if (head == nullptr)
    {
        cout << "Riwayat transaksi kosong." << endl;
        return;
    }

    cout << "Riwayat transaksi:" << endl;
    const Transaction *current = head;
    while (current != nullptr)
    {
        cout << "Tanggal: " << current->date << endl;
        cout << "Jenis: " << current->merk << endl;
        cout << "Jumlah: " << current->quantity << endl;
        current = current->next;
    }
}

// Fungsi untuk menghapus semua transaksi dalam linked list
void clearTransactionHistory(Transaction *&head)
{
    Transaction *current = head;
    while (current != nullptr)
    {
        Transaction *temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
    cout << "Riwayat transaksi berhasil dihapus." << endl;
}

// Struktur data untuk menyimpan informasi pesanan
struct Order
{
    string customerName;
    string address;
    string phoneNumber;
    string orderedItem;
    int quantity;
    // Tambahkan atribut lain sesuai kebutuhan
    Order *next;
};

// Fungsi untuk menambahkan pesanan ke stack
void pushOrder(Order *&top, const string &customerName, const string &address, const string &phoneNumber, const string &orderedItem, int quantity)
{
    Order *newOrder = new Order;
    newOrder->customerName = customerName;
    newOrder->address = address;
    newOrder->phoneNumber = phoneNumber;
    newOrder->orderedItem = orderedItem;
    newOrder->quantity = quantity;
    newOrder->next = top;
    top = newOrder;

    // cout << "Pesanan berhasil ditambahkan." << endl;
}

// Fungsi untuk menghapus pesanan teratas dari stack
void popOrder(Order *&top)
{
    if (top == nullptr)
    {
        cout << "Stack pesanan kosong." << endl;
        return;
    }

    Order *temp = top;
    top = top->next;
    delete temp;

    cout << "Pesanan teratas berhasil dihapus." << endl;
}

// Fungsi untuk mencetak pesanan-pesanan dalam stack
void printOrders(const Order *top)
{
    if (top == nullptr)
    {
        cout << "Stack pesanan kosong." << endl;
        return;
    }

    cout << "Pesanan-pesanan saat ini:" << endl;
    const Order *current = top;
    int i = 1;
    while (current != nullptr)
    {
        cout << "Pemesan ke- " << i << endl;
        cout << "Nama Pelanggan: " << current->customerName << endl;
        cout << "Alamat: " << current->address << endl;
        cout << "Nomor Telepon: " << current->phoneNumber << endl;
        cout << "Barang Dipesan: " << current->orderedItem << endl;
        cout << "Jumlah: " << current->quantity << endl;
        cout << endl;
        current = current->next;
        i++;
    }
}

// Struktur data untuk menyimpan informasi pelanggan
struct Customer
{
    string name;
    string address;
    string phoneNumber;
    string arrivalTime;
    Customer *next;
};

// Fungsi untuk menambahkan pelanggan ke queue
void enqueueCustomer(Customer *&front, Customer *&rear, const string &name, const string &address, const string &phoneNumber, const string &arrivalTime)
{
    Customer *newCustomer = new Customer;
    newCustomer->name = name;
    newCustomer->address = address;
    newCustomer->phoneNumber = phoneNumber;
    newCustomer->arrivalTime = arrivalTime;
    newCustomer->next = nullptr;

    if (rear == nullptr)
    {
        front = rear = newCustomer;
    }
    else
    {
        rear->next = newCustomer;
        rear = newCustomer;
    }

    // cout << "Pelanggan " << name << " berhasil ditambahkan ke daftar tunggu." << endl;
}

// Fungsi untuk menghapus pelanggan terdepan dari queue
void dequeueCustomer(Customer *&front, Customer *&rear)
{
    if (front == nullptr)
    {
        cout << "Daftar tunggu kosong." << endl;
        return;
    }

    Customer *temp = front;
    front = front->next;
    delete temp;

    if (front == nullptr)
    {
        rear = nullptr;
    }

    cout << "Pelanggan terdepan berhasil dihapus dari daftar tunggu." << endl;
}

// Fungsi untuk mencetak daftar tunggu
void printWaitingList(const Customer *front)
{
    if (front == nullptr)
    {
        cout << "Daftar tunggu kosong." << endl;
        return;
    }

    cout << "Daftar Tunggu:" << endl;
    const Customer *current = front;
    while (current != nullptr)
    {
        cout << "Nama Pelanggan: " << current->name << endl;
        cout << "Alamat: " << current->address << endl;
        cout << "Nomor Telepon: " << current->phoneNumber << endl;
        cout << "Waktu Kedatangan: " << current->arrivalTime << endl;
        cout << endl;
        current = current->next;
    }
}

int main()
{
    // Array
    Shoe shoes[100];
    Shoe inventory[MAX_INVENTORY_SIZE];
    int shoeCount = 0;

    // Linked list
    Transaction *transactionHistory = nullptr;

    // Stack
    Order *currentOrders = nullptr;

    // Queue
    Customer *front = nullptr;
    Customer *rear = nullptr;

    // Menambahkan data dummy ke inventaris
    addShoe(inventory, shoeCount, 10, "Sneakers", "Nike");
    addShoe(inventory, shoeCount, 8, "Sport", "Adidas");
    addShoe(inventory, shoeCount, 9, "Sport", "Puma");

    // Menambahkan data dummy ke linked list
    addTransaction(transactionHistory, "2023-05-20", "Puma", 2);
    addTransaction(transactionHistory, "2023-05-25", "PVN", 3);
    addTransaction(transactionHistory, "2023-05-28", "Adidas", 1);

    // Menambahkan data dummy ke stack
    pushOrder(currentOrders, "Dio", "Jl Bunga, Juang", "555-1234", "Nike", 2);
    pushOrder(currentOrders, "Jingga", "12 Perum Indah", "555-5678", "Adidas", 1);

    // Menambahkan data dummy ke queue
    enqueueCustomer(front, rear, "Alex", "789 Oak St", "555-9012", "09:30 AM");
    enqueueCustomer(front, rear, "Sarah", "234 Maple St", "555-3456", "10:15 AM");

    int choice;
loop_menu_awal:
    cout << "Manajemen Toko Sepatu" << endl;
    cout << "1. Inventaris Barang" << endl;
    cout << "2. Riwayat Transaksi" << endl;
    cout << "3. Pesanan Pelanggan" << endl;
    cout << "4. Daftar Tunggu" << endl;
    cout << "0. Keluar" << endl;
    cout << "Masukan Pilihan Anda: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int choice;
        do
        {
            cout << endl;
            cout << "=== Manajemen Inventaris Toko ===" << endl;
            cout << "1. Tambahkan sepatu" << endl;
            cout << "2. Hapus sepatu" << endl;
            cout << "3. Tampilkan inventaris" << endl;
            cout << "0. Keluar" << endl;
            cout << "Pilihan Anda: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
            {
                int stock;
                string jenis, brand;
                cout << "Stock: ";
                cin >> stock;
                cout << "Jenis: ";
                cin >> jenis;
                cout << "Merek: ";
                cin >> brand;

                addShoe(inventory, shoeCount, stock, jenis, brand);
                cout << "Sepatu berhasil ditambahkan ke inventaris." << endl;
                break;
            }
            case 2:
            {
                string merk;
                cout << "Merk sepatu yang akan dihapus: ";
                cin >> merk;

                removeShoe(inventory, shoeCount, merk);
                break;
            }
            case 3:
                printInventory(inventory, shoeCount);
                break;
            case 0:
                cout << "Keluar" << endl;
                goto loop_menu_awal;
                cout << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
            }
        } while (choice != 0);
        break;
    }
    case 2:
    {
        int choice;
        do
        {
            cout << endl;
            cout << "=== Manajemen Riwayat Transaksi ===" << endl;
            cout << "1. Tambahkan transaksi" << endl;
            cout << "2. Tampilkan riwayat transaksi" << endl;
            cout << "3. Hapus riwayat transaksi" << endl;
            cout << "0. Keluar" << endl;
            cout << "Pilih menu: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
            {
                string date, merk;
                int quantity;
                cout << "Tanggal: ";
                cin >> date;
                cout << "Merk: ";
                cin >> merk;
                cout << "Jumlah: ";
                cin >> quantity;
                addTransaction(transactionHistory, date, merk, quantity);
                cout << "Transaksi berhasil ditambahkan." << endl;
            }
            break;
            case 2:
                printTransactionHistory(transactionHistory);
                break;
            case 3:
                clearTransactionHistory(transactionHistory);
                break;
            case 0:
                cout << "Keluar" << endl;
                cout << endl;
                goto loop_menu_awal;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
            }

            cout << endl;
        } while (choice != 0);

        break;
    }
    case 3:
    {
        int choice;
        do
        {
            cout << endl;
            cout << "=== Manajemen Pesanan Saat Ini ===" << endl;
            cout << "1. Tambahkan pesanan" << endl;
            cout << "2. Hapus pesanan teratas" << endl;
            cout << "3. Tampilkan pesanan-pesanan saat ini" << endl;
            cout << "0. Keluar" << endl;
            cout << "Pilih menu: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
            {
                string customerName, address, phoneNumber, orderedItem;
                int quantity;
                cout << "Nama Pelanggan: ";
                cin.ignore();
                getline(cin, customerName);
                cout << "Alamat: ";
                getline(cin, address);
                cout << "Nomor Telepon: ";
                getline(cin, phoneNumber);
                cout << "Merk Barang Yang Dipesan: ";
                getline(cin, orderedItem);
                cout << "Jumlah: ";
                cin >> quantity;
                pushOrder(currentOrders, customerName, address, phoneNumber, orderedItem, quantity);
                cout << "Pesanan berhasil ditambahkan." << endl;
            }
            break;
            case 2:
                popOrder(currentOrders);
                break;
            case 3:
                printOrders(currentOrders);
                break;
            case 0:
                cout << "Keluar" << endl;
                goto loop_menu_awal;
                cout << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
            }

            cout << endl;
        } while (choice != 0);
        break;
    }
    case 4:
    {
        int choice;
        do
        {
            cout << endl;
            cout << "=== Manajemen Daftar Tunggu ===" << endl;
            cout << "1. Tambahkan pelanggan ke daftar tunggu" << endl;
            cout << "2. Hapus pelanggan terdepan dari daftar tunggu" << endl;
            cout << "3. Tampilkan daftar tunggu" << endl;
            cout << "0. Keluar" << endl;
            cout << "Pilih menu: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
            {
                string name, address, phoneNumber, arrivalTime;
                cout << "Nama Pelanggan: ";
                cin.ignore();
                getline(cin, name);
                cout << "Alamat: ";
                getline(cin, address);
                cout << "Nomor Telepon: ";
                getline(cin, phoneNumber);
                cout << "Waktu Kedatangan: ";
                getline(cin, arrivalTime);
                enqueueCustomer(front, rear, name, address, phoneNumber, arrivalTime);
                cout << "Pelanggan " << name << " berhasil ditambahkan ke daftar tunggu." << endl;
            }
            break;
            case 2:
                dequeueCustomer(front, rear);
                break;
            case 3:
                printWaitingList(front);
                break;
            case 0:
                cout << "Keluar" << endl;
                goto loop_menu_awal;
                cout << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
            }

            cout << endl;
        } while (choice != 0);

        break;
    }
    case 0:
        return 0;
    default:
    {
        cout << "Pilihan tidak valid." << endl;
        goto loop_menu_awal;
        break;
    }
    }
}