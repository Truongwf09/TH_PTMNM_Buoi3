#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
    int a, b;
    cout << "DAY LA CHUONG TRINH DE THUC HANH GIT" << endl;
    cout << "Nhap 2 so nguyen: ";
    cin >> a >> b;

    cout << "Tong = " << tong(a, b) << endl;
    cout << "Hieu = " << hieu(a, b) << endl;
    cout << "Tich = " << tich(a, b) << endl;
    cout << "Thuong = " << thuong(a, b) << endl;

    system("pause");
    return 0;
}


int tich ( int a, int b)
{
	return a*b;
}