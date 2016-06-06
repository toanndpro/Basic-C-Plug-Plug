#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

class SVBK
{
private:
	float dtoan, dly, dhoa, dtb;
	char ht[30], diachi[30];
public:
	// Cac Phuong Thuc
	void nhapdlSV();
	void inkq();
	float trungbinh();
};

void SVBK::nhapdlSV()
{
	cout << "Nhap ho ten: ";
	cin.ignore();
	cin.get(ht, 30);
	cout << "Nhap dia chi: ";
	cin.ignore();
	cin.get(diachi, 30);
	cout  << "Nhap diem toan: ";
	cin >> dtoan;
	cout  << "Nhap diem ly: ";
	cin >> dly;
	cout  << "Nhap diem hoa: ";
	cin >> dhoa;
}

void SVBK::inkq()
{
	cout << setiosflags(ios::left) << setw(24) << ht;
	cout << setiosflags(ios::left) << setw(24) << diachi;
	cout << setiosflags(ios::left) << setw(10) << dtoan;
	cout << setiosflags(ios::left) << setw(10) << dly;
	cout << setiosflags(ios::left) << setw(10) << dhoa;
	cout << setiosflags(ios::left) << setw(10)<<setprecision(3) << dtb << endl;
	
}

float SVBK::trungbinh()
{
	
	dtb= (dtoan + dhoa + dly) / 3;
	return dtb;
}

SVBK  svx[100];

int main()
{
	int n, i, j;

	do {
		cout << "Nhap so sinh vien: ";
		cin >> n;
	} while (n<0);
// Nhap du lieu cho SVBK
	for (i = 0; i < n; i++)
	{
		cout << "Nhap du lieu cho sinh vien thu " << i + 1 << endl;
		svx[i].nhapdlSV();
		cout << endl;
	}

// Tinh gia tri trung binh
	for (i = 0; i < n; i++)
	{
		svx[i].trungbinh();
	}
// In ket qua ra man hinh

	cout << setiosflags(ios::left) << setw(24) << "Ho Va Ten";
	cout << setiosflags(ios::left) << setw(24) << "Dia chi";
	cout << setiosflags(ios::left) << setw(10) << "Toan";
	cout << setiosflags(ios::left) << setw(10) << "Ly";
	cout << setiosflags(ios::left) << setw(10) << "Hoa";
	cout << setiosflags(ios::left) << setw(10) << "TB" << endl;

	for (i = 0; i < n; i++)
	{
		svx[i].inkq();
	}
	system("pause");
	return 0;

}