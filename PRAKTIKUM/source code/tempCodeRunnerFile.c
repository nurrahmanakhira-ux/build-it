#include <stdio.h>
#include <math.h>

// ===== Variabel Global =====
float a, b, c, d;
float sisi1, sisi2, sisi3, sisi4;
float tinggi;
float luas, keliling;

void segitiga_sembarang() {
    printf("Masukkan alas segitiga: ");
    scanf("%f", &a);
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);
    printf("Masukkan sisi miring segitiga: ");
    scanf("%f", &b);
    luas = 0.5 * a * tinggi;
    keliling = a + b + sqrt((a * a) + (tinggi * tinggi));
    printf("Luas segitiga: %.2f\n", luas);
    printf("Keliling segitiga: %.2f\n", keliling);
}

void belah_ketupat() {
    printf("Masukkan panjang diagonal 1: ");
    scanf("%f", &a);
    printf("Masukkan panjang diagonal 2: ");
    scanf("%f", &b);
    printf("Masukkan panjang sisi belah ketupat: ");
    scanf("%f", &sisi1);
    luas = 0.5 * a * b;
    keliling = 4 * sisi1;
    printf("Luas belah ketupat: %.2f\n", luas);
    printf("Keliling belah ketupat: %.2f\n", keliling);
}

void jajar_genjang() {
    printf("Masukkan alas jajar genjang: ");
    scanf("%f", &a);
    printf("Masukkan tinggi jajar genjang: ");
    scanf("%f", &tinggi);
    printf("Masukkan panjang sisi miring jajar genjang: ");
    scanf("%f", &b);
    luas = a * tinggi;
    keliling = 2 * (a + b);
    printf("Luas jajar genjang: %.2f\n", luas);
    printf("Keliling jajar genjang: %.2f\n", keliling);
}
void trapesium() {
    printf("Masukkan panjang sisi sejajar 1: ");
    scanf("%f", &a);
    printf("Masukkan panjang sisi sejajar 2: ");
    scanf("%f", &b);
    printf("Masukkan tinggi trapesium: ");
    scanf("%f", &tinggi);
    printf("Masukkan panjang sisi miring 1: ");
    scanf("%f", &sisi1);
    printf("Masukkan panjang sisi miring 2: ");
    scanf("%f", &sisi2);
    luas = 0.5 * (a + b) * tinggi;
    keliling = a + b + sisi1 + sisi2;
    printf("Luas trapesium: %.2f\n", luas);
    printf("Keliling trapesium: %.2f\n", keliling);
}

void choose_shape() {
    int choice;
    printf("Pilih bangun datar:\n");
    printf("1. Segitiga Sembarang\n");
    printf("2. Belah Ketupat\n");
    printf("3. Jajar Genjang\n");
    printf("4. Trapesium\n");
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            segitiga_sembarang();
            break;
        case 2:
            belah_ketupat();
            break;
        case 3:
            jajar_genjang();
            break;
        case 4:
            trapesium();
            break;
        default:
            printf("Pilihan tidak valid.\n");
            break;
    }
}
// ===== Fungsi Main =====
int main() {
    choose_shape(); // cukup panggil prosedur
    return 0;
}