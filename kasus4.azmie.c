/*
 * Program  : Praktikum 5 - Kasus 4 (Sistem Penilaian Mahasiswa SI)
 * Nama     : Azmie Sakinatu Zahro
 * NIM      : 12046126016
 * kelas    : S1- Sistem Informasi
 * Tanggal  : 25 November 2026
 * Deskripsi: Sistem Operasi Matriks dengan Fungsi
 */

#include <stdio.h>

void inputNilai(float *uas, float *uts, float *tugas);
float hitungNilaiAkhir(float uas, float uts, float tugas);
char tentukanGrade(float nilai_akhir);

int main() {
    float uas, uts, tugas;
    float nilai_akhir;
    char grade;

    printf("=====   SISTEM PENILAIAN MAHASISWA SI   =====\n");

    inputNilai(&uas, &uts, &tugas);

    nilai_akhir = hitungNilaiAkhir (uas, uts, tugas);

    grade = tentukanGrade(nilai_akhir);

    printf("\n=== HASIL; PENILAIAN ===\n");
    printf("Nilai UAS   : %.2f\n", uas);
    printf("Nilai UTS   : %.2f\n", uts);
    printf("Nilai Tugas : %.2f\n", tugas);
    printf("Nilai Akhir : %.2f\n", nilai_akhir);
    printf("Grade       : %c\n", grade);
    if (grade == 'A' || grade == 'B' || grade == 'C') {
        printf ("Status     : LULUS\n");
    } else {
        printf("Status      : TIDAK LULUS\n");
    } 
    return 0;
}

void inputNilai (float *uas, float *uts, float *tugas) {
    printf("Masukan nilai UAS   : ");
    scanf("%f", uas);
    printf("Masukan nilai UTS   : ");
    scanf("%f", uts);
    printf("Masukan nilai Tugas : ");
    scanf("%f", tugas);
}

float hitungNilaiAkhir(float uas, float uts, float tugas) {
    return (uas * 0.4) + (uts * 0.3) + (tugas * 0.3);
}

char tentukanGrade (float nilai_akhir) {
    if (nilai_akhir >= 85) return 'A';
    else if (nilai_akhir >= 70) return 'B';
    else if (nilai_akhir >= 55) return 'C';
    else if (nilai_akhir >= 40) return 'D';
    else return 'E';
}