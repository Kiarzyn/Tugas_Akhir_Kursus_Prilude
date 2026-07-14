#include <stdio.h>

int main() {
    int jumlahSiswa;

    printf("Masukkan jumlah siswa: ");
    scanf("%d", &jumlahSiswa);

    char nama[jumlahSiswa][50];
    float nilai[jumlahSiswa];

    float totalNilai = 0;
    float rataRata;

    for(int i = 0; i < jumlahSiswa; i++) {
        printf("\nSiswa ke-%d\n", i + 1);

        while (getchar() != '\n');

        printf("Nama: ");
        scanf("%[^\n]", nama[i]);

        printf("Nilai: ");
        scanf("%f", &nilai[i]);

        totalNilai += nilai[i];
    }
    rataRata = (float)totalNilai / jumlahSiswa;

    printf("\n=== HASIL ===\n");
    for(int i = 0; i < jumlahSiswa; i++) {

        if (nilai[i] >= 75) {
            printf("%s - %.2f - Lulus\n", nama[i], nilai[i]);
        } else {
            printf("%s - %.2f - Tidak Lulus\n", nama[i], nilai[i]);
        }
    }
    printf("Total nilai kelas: %.2f\n", totalNilai);
    printf("Rata-rata kelas: %.2f\n", rataRata);

    return 0;
}
