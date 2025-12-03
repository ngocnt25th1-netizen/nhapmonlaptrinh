
#include <iostream>
using namespace std;

void caul1(){
	const float PI = 3.14;
	// Viet chuong trinh dien tich va chu vi hinh tron voi ban kinh r
	int r;
	cout << "Nhap ban kinh r: ";
	cin >> r;
	cout << "Dien tich: " << PI * r * r << endl;
	cout << "Chu vi: " << 2 * PI * r << endl; 
}
void caul2() {
	int luong, phucap;
	cout << "Nhap luong: ";
	cin >> luong;
	cout << "Nhap phucap: ";
	cin >> phucap;
	cout << "Thuc hanh: " << (luong + phucap) * 0.9 << endl;
}
int main() {
	caul1();
}