#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlah_item;
    double total_harga = 0.0;
    double uang_pembayaran;

    cout << "Selamat datang di toko kecil kami" << endl;
    cout << "Berapa banyak item yang ingin Anda beli? ";
    cin >> jumlah_item;

    for (int i = 1; i <= jumlah_item; i++) 
    {
        string nama_item;
        double harga_item;

        cout << "Masukkan nama item ke-" << i << ": ";
        cin.ignore();
        getline(cin, nama_item);

        cout << "Masukkan harga item ke-" << i << ": ";
        cin >> harga_item;

        total_harga += harga_item;
    }

    cout << "Total harga belanjaan Anda adalah: Rp " << total_harga << endl;
    cout << "Masukkan jumlah uang pembayaran: Rp ";
    cin >> uang_pembayaran;

    if (uang_pembayaran >= total_harga) 
    {
        double kembalian = uang_pembayaran - total_harga;
        cout << "Terima kasih! Kembalian Anda adalah: Rp " << kembalian << endl;
    } else 
    {
        double kurang_uang = total_harga - uang_pembayaran;
        cout << "Maaf, uang Anda kurang. Anda perlu menambahkan Rp " << kurang_uang << " untuk membayar pesanan ini." << endl;
    }

    return 0;
}
