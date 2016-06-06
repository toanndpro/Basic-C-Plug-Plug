//Xây dựng lớp cơ sở DATE có các thông tin: Ngày, tháng, năm và các phương thức xuất nhập dữ liệu.
//Để quản lý hàng hóa người ta xây dựng lớp PHIEUNHAP với các thông tin: Tên hàng, ngày nhập, số lượng, đơn vị và các 
//phương thức xuất nhập.
//Viết chương trình:
//Nhập vào một danh sách n phiếu nhập
//Hiển thị ra màn hình thông tin những phiếu nhập có số lượng hàng lớn hơn 1000

#include<iostream>
#include<iomanip>

using namespace std;

// Khai bao class DATE
class DATE
{
	int ngay, thang, nam;
public:

	void nhap()
	{
		cout << "Ngay: "; cin >> ngay;
		cout << "Thang: "; cin >> thang;
		cout << "Nam: "; cin >> nam;
	}

	void xuat()
	{
		cout <<"          "<< ngay << "/" << thang << "/" << nam;
	}
};

// Khai bao class PHIEUNHAP
class PHIEUNHAP : public DATE
{
	char tenhang[30];
	char donvi[10];
	
public:
	int soluong;
	void nhaphang()
	{
		cout << "Ten hang hoa: ";
		cin.ignore();
		cin.get(tenhang, 30);
		DATE::nhap();
		cout << "So luong: "; cin >> soluong;
		cout << "Don Vi: "; cin >> donvi;
	}

	void xuathang()
	{
		cout << setw(30) << tenhang;
		DATE::xuat();
		cout << setw(15) << soluong;
		cout << setw(10) << donvi << endl;
	}
};

// Main Function
int main()
{
	int n, i, j;
// Nhap du lieu cho n phieu nhap
	cout << "So phieu nhap can nhap du lieu: "; cin >> n;
	PHIEUNHAP *dspn = new PHIEUNHAP[n];			// Cap phat bo nho dong
	for (i = 0; i < n; i++)
	{
		cout << "Nhap du lieu cho phieu nhap thu " << i + 1 << endl;
		dspn[i].nhaphang();
	}
// Hien thi thong tin phieu nhap co so luong >=1000 ra man hinh
	
	cout << setw(30) << "Ten Hang Hoa" << "          "<< "Ngay Xuat" 
		<< setw(15) << "So Luong" <<setw(10)<<"Don Vi"<<endl;
	for (i = 0; i < n; i++)
		if (dspn[i].soluong >= 1000)
		{
			dspn[i].xuathang();
		}
// Xoa bo nho
	delete[] dspn;
	system("pause");		// Dung man hinh.
	return 0;
}