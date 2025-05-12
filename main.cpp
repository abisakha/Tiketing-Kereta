
#include <iostream>
#include <vector>
#include <string>

struct Tiket {
    std::string nama;
    std::string tujuan;
    int jumlahTiket;
};

int main() {
    std::vector<Tiket> daftarTiket;
    int pilihan;

    do {
        std::cout << "\n=== Aplikasi Tiketing Kereta ===\n";
        std::cout << "1. Pesan Tiket\n";
        std::cout << "2. Lihat Semua Tiket\n";
        std::cout << "3. Keluar\n";
        std::cout << "Pilih menu: ";
        std::cin >> pilihan;

        if (pilihan == 1) {
            Tiket t;
            std::cout << "Masukkan nama penumpang: ";
            std::cin >> t.nama;
            std::cout << "Masukkan tujuan: ";
            std::cin >> t.tujuan;
            std::cout << "Masukkan jumlah tiket: ";
            std::cin >> t.jumlahTiket;
            daftarTiket.push_back(t);
            std::cout << "Tiket berhasil dipesan!\n";
        } else if (pilihan == 2) {
            std::cout << "\n--- Daftar Tiket ---\n";
            for (const auto& t : daftarTiket) {
                std::cout << "Nama: " << t.nama 
                          << ", Tujuan: " << t.tujuan 
                          << ", Jumlah: " << t.jumlahTiket << "\n";
            }
        }
    } while (pilihan != 3);

    std::cout << "Terima kasih telah menggunakan layanan kami!\n";
    return 0;
}
