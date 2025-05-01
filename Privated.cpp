#include <iostream>
using namespace std;

class Segitiga {
    private:
        int alas = 10;       // ubah sesuai kasus (contoh: 7 -> ganjil, 8 -> genap)
        int tinggi = 5;
        float hasilLuas;
     
    // Fungsi private hanya dipanggil jika alas genap
    float hitungLuas(int a, int t) {
        return 0.5 * a * t;
    }

   