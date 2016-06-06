//Xây dựng lớp XE gồm các thông tin: Nhãn hiệu, Giá, Năm sản xuất yêu cầu các thông tin này chỉ có trong lớp xe
//và các lớp dẫn xuất từ lớp xe được phép truy cập.
//Xây dựng lớp OTO kế thưà từ lớp XE và có thêm các thông tin: Số chỗ ngồi, trọng tải, và các phương thức xuất nhập
//dữ liệu. 
//Viết chương trình nhập vào một danh sách n oto, sau đó hiển thị danh sách vừa nhập.

#include<iostream>
#include<iomanip>
using namespace std;

class XE
{
	char nhanhieu[30];
	float giaxe;
	unsigned int namsanxuat;
public:
	void nhapxe()
	{
		cout << "Nhan hieu xe: ";
		cin.ignore();
		cin.get(nhanhieu, 30);
		cout << "Gia: "; cin >> giaxe;
		cout << "Nam san xuat: "; cin >> namsanxuat;
	}

	void xuatxe()
	{
		cout <<setw(30)<< nhanhieu;
		cout << setw(10) << giaxe;
		cout << setw(10) << namsanxuat;
	}
};

class OTO :public XE
{
	int sochongoi;
	int trongtai;
public:

	void nhapoto()
	{
		XE::nhapxe();
		cout << "So cho ngoi: "; cin >> sochongoi;
		cout << "Trong tai: "; cin >> trongtai;	
	}

	void xuatoto()
	{
		XE::xuatxe();
		cout << setw(10) << sochongoi;
		cout << setw(10) << trongtai << endl;
	}
};

int main()
{
	int i,n;

// Nhap vao danh sach n oto
	cout << "So oto can nhap du lieu: "; cin >> n;
	OTO *dsoto = new OTO[n];		// Cap phat dong
	for (i = 0; i < n; i++)
	{
		cout << "NHap du lieu cho oto thu " << i + 1 << endl;
		dsoto[i].nhapoto();
	}

// In ra man hinh
	for (i = 0; i < n; i++)
	{
		dsoto[i].xuatoto();
	}

	delete[] dsoto;
	system("pause");
	return 0;
}