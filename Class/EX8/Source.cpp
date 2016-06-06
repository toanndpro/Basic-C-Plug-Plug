//Xây dựng lớp CDCANHAC có các thông tin: Tên đĩa, số lượng bài, giá tiền và phương thúc xuất nhập dữ liệu
//Viết chương trình nhập vào n cd ca nhạc. Sau đó hiển thị thông tin vừa nhập. Tìm và hiển thị thông tin 
//đĩa CD có số lượng bài hát lớn nhất.

#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;

class CDCANHAC
{
	char tendiacd[30];
	float giatien;
public:
	unsigned int soluong;
	void nhapdulieu()
	{
		cout << "Ten dia CD: "; 
		cin.ignore();
		cin.get(tendiacd, 30);
		cout << "So luong: "; cin >> soluong;
		cout << "Gia tien: "; cin >> giatien;
	}

	void xuatdulieu()
	{
		cout << setw(30) << tendiacd;
		cout << setw(10) << soluong;
		cout << setw(10) << giatien << endl;
	}
};

// Function Protype
void headlineDis();

// Main Function
int main()
{
	int n, i,j=0, temp;
	
// Nhap du lieu cho n dia CD
	cout << "So luong CD can nhap du lieu: "; cin >> n;
	CDCANHAC *dscd = new CDCANHAC[n];			// Cap phat bo nho dong
	for (i = 0; i < n; i++)
	{
		cout << "Nhap du lieu cho dia CD thu " << i + 1 << endl;
		dscd[i].nhapdulieu();
	}
// Hien thi thong tin vua nhap
	headlineDis();
	for (i = 0; i < n; i++)
		dscd[i].xuatdulieu();
// Tim CD co so luong lon nhat
	temp = dscd[0].soluong;
	for (i = 1; i < n; i++)
		if (dscd[i].soluong > temp)
		{
			temp = dscd[i].soluong;
			j = i;
		}
// Hien thi thong tin CD co so luong lon nhat
	cout << "Thong tin CD co so luong lon nhat" << endl;
	dscd[j].xuatdulieu();

	delete[] dscd;
	system("pause");		//Dung man hinh
	return 0;
}

void headlineDis()
{
	cout << setw(30) << "Ten Dia CD";
	cout << setw(10) << " So luong";
	cout << setw(10) << "Gia tien" << endl;
}