
#include <iostream>
using namespace std;

void cau1() {
    int n, tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    cout << "Tong: " << tong << endl;
}

void cau2() {
    int n, tich = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tich *= 1;
    }
    cout << "Tich:" << tich << endl;
}

void cau3() {
    int n, x, tich = 1;
    cout << "Nhap n, x: ";
    cin >> n, x;
    for (int i = 1; i <= n; i++) {
        tich *= 1;
    } 
    cout << "Tich:" << tich << endl;
}

void cau4() {

}



int main()
{
    cau3();
}
