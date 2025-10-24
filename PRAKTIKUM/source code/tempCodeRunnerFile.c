#include <stdio.h>

void NilaiAbsen() {
    int absensi, max_absensi = 15;
    double nilai_absensi;
    
    printf("masukkan jumlah absensi maksimal 15 : ");
    scanf("%d", &absensi);

    //validasi agar tidak melebihi batas absensi
    if (absensi > max_absensi) {
        printf("Jumlah absensi melebihi batas maksimal %d\n", max_absensi);
        return 1; // keluar dari program dengan kode kesalahan
    }
    nilai_absensi = (double)absensi / max_absensi * 5/100;
    printf("Nilai absensi: %.2f\n", nilai_absensi);
}

void NilaiTugas() {
    int tugas1, tugas2, tugas3;
    double nilai_tugas;

    //validasi input nilai tugas
    if (tugas1 < 0 || tugas1 > 100 || tugas2 < 0 || tugas2 > 100 || tugas3 < 0 || tugas3 > 100) {
        printf("Nilai tugas harus antara 0 hingga 100\n");
        return 1; // keluar dari program dengan kode kesalahan
    }

    printf("Masukkan nilai tugas 1: ");
    scanf("%d", &tugas1);
    printf("Masukkan nilai tugas 2: ");
    scanf("%d", &tugas2);
    printf("Masukkan nilai tugas 3: ");
    scanf("%d", &tugas3);

    nilai_tugas = ((tugas1 + tugas2 + tugas3) / 3.0) * 20/100;
    printf("Nilai tugas: %.2f\n", nilai_tugas);
}

void NilaiQuiz() {
    //validasi input nilai quiz
    if (quiz < 0 || quiz > 100) {
        printf("Nilai quiz harus antara 0 hingga 100\n");
        return 1; // keluar dari program dengan kode kesalahan
    }

    int quiz;
    double nilai_quiz;
    printf("Masukkan nilai quiz: ");
    scanf("%d", &quiz);
    nilai_quiz = quiz * 15/100;
    printf("Nilai quiz: %.2f\n", nilai_quiz);

}

void NilaiUTS() {
    //validasi input nilai UTS
    if (uts < 0 || uts > 100) {
        printf("Nilai UTS harus antara 0 hingga 100\n");
        return 1; // keluar dari program dengan kode kesalahan
    }

    int uts;
    double nilai_uts;
    printf("Masukkan nilai UTS: ");
    scanf("%d", &uts);
    nilai_uts = uts * 30/100;
    printf("Nilai UTS: %.2f\n", nilai_uts);
}
void Nilaiuas() {
    //validasi input nilai UAS
    if (uas < 0 || uas > 100) {
        printf("Nilai UAS harus antara 0 hingga 100\n");
       return 1; // keluar dari program dengan kode kesalahan
    }

    int uas;
    double nilai_uas;
    printf("Masukkan nilai UAS: ");
    scanf("%d", &uas);
    nilai_uas = uas * 30/100;
    printf("Nilai UAS: %.2f\n", nilai_uas);
}

// Jumlah nilai
void totalNilai() {
    double absensi, tugas, quiz, uts, uas, total;
    total = absensi + tugas + quiz + uts + uas;
    printf("Total nilai akhir: %.2f\n", total);
}


int main() {
    NilaiAbsen();
    NilaiTugas();
    NilaiQuiz();
    NilaiUTS();
    NilaiUAS();
    totalNilai();
    return 0;
}
