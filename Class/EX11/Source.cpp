//Xây dựng lớp cơ sở PERSON có các thông tin: Họ tên, Giới tinh, Ngày sinh và các phương thức xuất nhập dữ liệu.
//Xây dựng lớp dẫn xuất STUDENT để quản lý sinh viên có thêm các thông tin: Điểm thi, Lớp và các phương thức xuất nhập
//dữ liệu. Viết chương trình thực hiên nhập vào một danh sách n sinh viên, sau đó hiển thị danh sách vừa nhập.

#include<iostream>
#include<iomanip>
using namespace std;

class PERSON
{
	char hoten[30];
	char gioitinh[10];
	int ngay, thang, nam;
public:

	void nhap()
	{
		cout << "Ho Ten: ";
		cin.ignore();
		cin.get(hoten, 30);
		cout << "Gioi tinh: ";
		cin.ignore();
		cin.get(gioitinh, 10);
		cout << "Ngay: "; cin >> ngay;
		cout << "Thang: "; cin >> thang;
		cout << "Nam: "; cin >> nam;
	}

	void xuat()
	{
		cout << setw(30) << hoten;
		cout << setw(10) << gioitinh;
		cout << "          " << ngay << "/" << thang << "/" << nam;
	}
};

class STUDENT: public PERSON
{
	float diemthi;
	char lop[10];
public:
	
	void nhapdulieu()
	{
		PERSON::nhap();
		cout << "Lop: ";
		cin.ignore();
		cin.get(lop,10);
		cout << "Diem thi: "; cin >> diemthi;
	}

	void xuatdulieu()
	{
		PERSON::xuat();
		cout << setw(10) << diemthi;
		cout << setw(10)<<lop << endl;
	}
};

int main()
{
	int n, i;
	cout << "So sinh vien can nhap du lieu: "; cin >> n;
	STUDENT *dssv = new STUDENT[n];		// Cap phat bo nho dong
// Nhap du lieu cho n sinh vien
	for (i = 0; i < n; i++)
	{
		cout << "Nhap du lieu cho Sinh Vien thu " << i + 1 << endl;
		dssv[i].nhapdulieu();
	}
// Xuat du lieu ra man hinh
	for(i=0;i<n;i++)
	dssv[i].xuatdulieu();

	system("pause");		// Dung man hinh
	return 0;
}



