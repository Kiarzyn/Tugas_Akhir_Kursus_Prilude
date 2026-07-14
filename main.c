#include <stdio.h>
#include <string.h>

int main() {
    int jumlah_siswa;

    printf("Masukkan jumlah siswa: ");
    scanf("%d", &jumlah_siswa);
    printf("\n");

    char nama[jumlah_siswa][50];
    int nilai[jumlah_siswa];

    float total_nilai = 0;
    float rata_rata;

    for (int i = 0; i < jumlah_siswa; i++) {
        printf("Siswa ke-%d\n", i + 1);
        printf("Nama: ");

        scanf("%s", nama[i]);
        printf("Nilai: ");
        scanf("%d", &nilai[i]);
        printf("\n");

        total_nilai += nilai[i];
    }

    rata_rata = total_nilai / jumlah_siswa;

    printf("=== HASIL ===\n");
    for (int i = 0; i < jumlah_siswa; i++) {

        if (nilai[i] >= 75) {
            printf("%s - %d - Lulus\n", nama[i], nilai[i]);
        } else {
            printf("%s - %d - Tidak Lulus\n", nama[i], nilai[i]);
        }
    }
    printf("\nRata-rata kelas: %.2f\n", rata_rata);

    return 0;
}
