#include <bits/stdc++.h>
using namespace std;

void showUpperMessage()
{
    cout << "================================================================" << endl;
    cout << "   >> TOKO SMK MEDIA INFORMATIKA << " << endl;
    cout << ">> Jl.Papan I/Pisangan Kretek No.99 <<" << endl;
    cout << ">> TELP.(021)22704966 kode Pos 12260 <<" << endl;
    cout << endl;
    cout << "Nama                  :         Jeriko Ichtus Seo" << endl;
    cout << "NIS                   :         2021104" << endl;
    cout << "Kelas                 :         XII-RPL" << endl;
    cout << "================================================================" << endl;
    cout << "MENU Mie Ayam : " << endl;
    cout << "1. Mie Ayam Spesial" << endl;
    cout << "2. Es Teh" << endl;
    cout << endl;
    cout << "MENU Bakso : " << endl;
    cout << "1. Bakso Spesial" << endl;
    cout << "2. Es Teh" << endl;
    cout << "================================================================" << endl;
    cout << endl;
}

int main()
{
    showUpperMessage();
    int jumlah_mie_ayam, jumlah_bakso, uang_bayar, total, total_menu_1, total_menu_2, diskon, grand_total, uang_pembayaran, kembalian, persen_harga_mie_ayam, persen_harga_bakso;
    int harga_mie_ayam = 20000, harga_bakso = 18000;

    cout << "Masukan jumlah pembelian untuk MENU Mie Ayam : ";
    cin >> jumlah_mie_ayam;
    cout << "               Harga paket MENU Mie Ayam : Rp." << harga_mie_ayam << endl;
    total_menu_1 = harga_mie_ayam * jumlah_mie_ayam;
    cout << "               Total harga MENU Mie Ayam = Rp." << total_menu_1 << endl;
    cout << endl;

    cout << "Masukan jumlah pembelian untuk MENU Bakso : ";
    cin >> jumlah_bakso;
    cout << "               Harga paket MENU bakso : Rp." << harga_bakso << endl;
    total_menu_2 = harga_bakso * jumlah_bakso;
    cout << "               Total harga MENU Mie Ayam = Rp." << total_menu_2 << endl;
    cout << endl;

    if (jumlah_mie_ayam >= 5 && jumlah_mie_ayam < 10)
    {
        diskon = total_menu_1 * 5 / 100;
        total_menu_1 = total_menu_1 - diskon;
        persen_harga_mie_ayam = 5;
        cout << endl;
    }
    else if (jumlah_mie_ayam >= 10)
    {
        diskon = total_menu_1 * 10 / 100;
        total_menu_1 = total_menu_1 - diskon;
        persen_harga_mie_ayam = 10;
        cout << endl;
    }

    cout
        << "Total pembayaran  MENU Mie Ayam = " << harga_mie_ayam * jumlah_mie_ayam << "*" << persen_harga_mie_ayam << "% = Rp." << total_menu_1;
    cout << endl;

    if (jumlah_bakso >= 5 && jumlah_bakso < 10)
    {
        diskon = total_menu_2 * 5 / 100;
        total_menu_2 = total_menu_2 - diskon;
        persen_harga_bakso = 5;
        cout << endl;
    }
    else if (jumlah_bakso >= 10)
    {
        diskon = total_menu_2 * 10 / 100;
        total_menu_2 = total_menu_2 - diskon;
        persen_harga_bakso = 10;
        cout << endl;
    }

    cout
        << "Total pembayaran  MENU Bakso = " << harga_bakso * jumlah_bakso << "* " << persen_harga_bakso << "% = Rp." << total_menu_2 << endl;
    cout << "================================================================" << endl;

    grand_total = total_menu_1 + total_menu_2;
    cout << endl;
    cout << "Total semua yang harus dibayar = Rp." << grand_total << endl;
    cout << "Uang Pembayaran = Rp.";
    cin >> uang_pembayaran;
    kembalian = uang_pembayaran - (total_menu_1 + total_menu_2);
    cout << "Kembalian = Rp." << kembalian << endl;

    return 0;
}
