#include <iostream>
using namespace std;

int angka;
int pilihan;

void Menu() {
    cout << "\n=== MENU PENGECEKAN BILANGAN ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Masukkan pilihan Anda (0-2): ";
}

void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}

bool isPrime(int n) {
  if (n <= 1) {
        return false;
    }
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
            }
        i++;
    }
    return true;
}

bool isFibonacci(int n) {
  if (n < 0) {
        return false;
  }
  int a = 0;
  int b = 1;

  while (a < n) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return (a == n);
}

void HasilPrima() {
    if (isPrime(angka)) {
        cout << "-> HASIL: " << angka << " ADALAH bilangan Prima." << endl;
    } else {
        cout << "-> HASIL: " << angka << " BUKAN bilangan Prima." << endl;
    }
}

void HasilFibonacci() {
    if (isFibonacci(angka)) {
        cout << "-> HASIL: " << angka << " ADALAH bagian dari deret Fibonacci." << endl;
    } else {
        cout << "-> HASIL: " << angka << " BUKAN bagian dari deret Fibonacci." << endl;
    }
}

int main() {
  pilihan = -1;
}