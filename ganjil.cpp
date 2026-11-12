#include <iostream>
using namespace std;

int main() {
    int angkaDicek = 0;

    while (angkaDicek <= 100) {
        if (angkaDicek == 1) {
            cout << angkaDicek << " ";
        }

        int pembagi = 1;
        int jumlahPembagi = 0;

        while (pembagi <= angkaDicek) {
            if (angkaDicek % pembagi == 0) {
                jumlahPembagi++;
            }
            pembagi++;
        }

        if (jumlahPembagi == 2) {
            cout << angkaDicek << " ";
        }

        angkaDicek++;
    }

    return 0;
}