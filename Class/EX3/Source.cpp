
//Bài tập: Một của hàng bán thực phẩm khô gồm hai loại: Loại đóng hộp và loại không đóng hộp. Để quả lý người ta
//xây dựng lớp lớp THUCPHAM gồm  các thông tin: Tên thực phẩm, giá cả. Từ đó dẫn xuất ra hai lớp TPHOP ( thực phẩm hộp)
//có thêm thông tin số hộp và TPKHOP (thực phẩm không hộp) có thêm thông tin khối lượng.
//Cài đặt ba lớp trên với các phương thức xuất, nhập dữ liệu. Viết chương trình thực hiện nhập và xuất hai thực phẩm
//thuộc hai lớp TPHOP và TPKHOP.

#include<iostream>
#include<iomanip>
#include<conio.h>
#include<Windows.h>
using namespace std;

class THUCPHAM
{
	char m_tenphucpham[30];
	float m_giaca;

public:
	void nhap()
	{
		cout << "Ten thuc pham: ";
		cin.ignore();
		cin.get(m_tenphucpham, 30);
		cout << "Gia ca: ";
		cin >> m_giaca;
	}
	
	void xuat()
	{
		cout <<setw(24)<< m_tenphucpham;
		cout  <<setw(10)<< m_giaca ;
	}
};

class TPHOP:public THUCPHAM
{
	int m_sohop;
public:
	void nhaptphop()
	{
		THUCPHAM::nhap();
		cout << "So hop: "; cin >> m_sohop;
	}

	void xuattphop()
	{
		THUCPHAM::xuat();
		cout <<setw(10)<< m_sohop;
	}
};

class TPKHOP:public THUCPHAM
{
	float m_khoiluong;
public:
	void nhaptpkhop()
	{
		THUCPHAM::nhap();
		cout << "Khoi luong: "; cin >>m_khoiluong;
	}

	void xuattpkhop()
	{
		THUCPHAM::xuat();
		cout <<setw(15) << m_khoiluong;
	}
};
TPHOP hop[100];
TPKHOP khop[100];

int main()
{
	int i, n;
	// Nhap du lieu cho thuc pham co hop
	cout << "So luong san pham co hop: "; cin >> n;
	for (i = 0; i < n; i++)
		hop[i].nhaptphop();

	// Xuat du lieu cho thuc pham co hop	
    // In ket qua ra man hinh
	cout << setiosflags(ios::left) << setw(24) << "Ten Thuc Pham";
	cout << setiosflags(ios::left) << setw(10) << "Gia Ca";
	cout << setiosflags(ios::left) << setw(10) << "So hop";
	cout << endl;
	for (i = 0; i < n; i++)
	{
		hop[i].xuattphop();
		cout << endl;
	}


	// Nhap du lieu cho thuc pham khong co hop
	cout << "So luong san pham khong co hop: "; cin >> n;
	for (i = 0; i < n; i++)
		khop[i].nhaptpkhop();

	// Xuat du lieu cho thuc pham co hop	
	// In ket qua ra man hinh
	cout << setiosflags(ios::left) << setw(24) << "Ten Thuc Pham";
	cout << setiosflags(ios::right) << setw(10) << "Gia Ca";
	cout << setiosflags(ios::right) << setw(15) << "Khoi Luong";
	cout << endl;
	for (i = 0; i < n; i++)
	{
		khop[i].xuattpkhop();
		cout << endl;
	}

	system("pause");			// Dung man hinh
	return 0;

}
