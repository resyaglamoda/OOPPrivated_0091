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

    public:
        void outputData() {
            cout << "Alas             : " << alas << endl;
            cout << "Tinggi           : " << tinggi << endl;
           
            // Cek apakah alas genap
            if (alas % 2 == 0) {
                hasilLuas = hitungLuas(alas, tinggi);
                cout << "Luas Segitiga    : " << hasilLuas << "cm" << endl;
            } else {
                cout << "Alas yang dimasukkan adalah bilangan ganjil," << endl;
                cout << "luas tidak dapat dihitung." << endl;
            }
        }
    };
 
   