#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout<<"DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a , b;
	cout<<"Nhap vao 2 so nguyen \n";
	cin >> a>>b;
	cout<<"Tong =	"<< tong(a,b)<<endl;
	return 0;
}
int tong(int a , int b){
	return a+b;
}