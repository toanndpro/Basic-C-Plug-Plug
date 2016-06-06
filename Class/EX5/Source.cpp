/*Tạo lớp DATE có các thông tin: Ngày, tháng, năm và các phương thức nhập xuất dữ liệu.
Xây dựng lớp NHANSU với các thông tin: Tên , ngày sinh (kiểu DATE), số chứng minh nhân dân và các phương thức nhập xuất
dữ liệu.
Viết chương trình chính nhập vào danh sách n nhân sự, sau đó sắp xếp danh sách theo chiều tăng dần của tên và 
hiển thị danh sách ra màn hình.*/

#include<iostream>
#include<iomanip>
using namespace std;

class DATE
{
	int ngay, thang, nam;
public:

	void nhapdulieu()
	{
		cout << "Ngay: "; cin >> ngay;
		cout << "Thang: "; cin >> thang;
		cout << "Nam: "; cin >> nam;
	}

	void xuatdulieu()
	{
		cout << ngay << "/" << thang << "/" << nam;
	}

};

class NHANSU : public DATE
{
	int socmmd;
public:
	char ten[30];
	void nhapnhansu()
	{
		cout << "Ten: ";
		cin.ignore();
		cin.get(ten, 30);
		cout << "Thong tin ngay thang nam sinh: " << endl;
		DATE::nhapdulieu();
		cout << "So CMND: ";
		cin >> socmmd;
	}

	void xuatnhansu()
	{
		cout << setw(30)<<ten<<"   ";
		DATE::xuatdulieu();
		cout<< "         " << socmmd << endl;
		
	}
};


int main()
{
	int n, i,j;
	NHANSU temp;			// Khai bao doi tuong temp co kieu class
	cout << "So nhan su can nhap du lieu: "; cin >> n;
	NHANSU *dsns = new NHANSU[n];		// Cap phat dong

// Chuong trinh nhap du lieu cho n nhan su
	for (i = 0; i < n; i++)
	{
		cout << "Nhap du lieu cho nhan su thu " << i + 1 << endl;
		dsns[i].nhapnhansu();
	}
// Sap xep theo chieu tang dan cua ten
	for(i=0;i<n-1;i++)
		for (j = i + 1; j < n; j++)
		{
			if (dsns[i].ten < dsns[j].ten)
				temp = dsns[i];
			    dsns[i] = dsns[j];
			    dsns[j] = temp;
		}

//In ra man hinh danh sach nhan su sau khi xap sep
	for (i = 0; i < n; i++)
		dsns[i].xuatnhansu();

	system("pause");		// Dung man hinh
	return 0;
}

