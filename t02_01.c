#include <stdio.h>

struct penjualan {
    int jumlah_penjualan;
    float harga;
    float total_bayar;
    float potongan;
};

int main() {
    struct penjualan p;
    float total_awal;

    if (scanf("%d", &p.jumlah_penjualan) != EOF) {
        if (scanf("%f", &p.harga) != EOF) {
            total_awal = (float)p.jumlah_penjualan * p.harga;

            if (total_awal > 500000.0) {
                p.potongan = total_awal * 0.15;
            } else if (total_awal >= 100000.0) {
                p.potongan = total_awal * 0.10;
            } else if (total_awal > 50000.0) {
                p.potongan = total_awal * 0.05;
            } else {
                p.potongan = 0.0;
            }

            p.total_bayar = total_awal - p.potongan;

            if (p.potongan > 0) {
                printf("%.2f\n", p.potongan);
            } else {
                printf("---\n");
            }
            printf("%.2f\n", p.total_bayar);
        }
    }

    return 0;
}