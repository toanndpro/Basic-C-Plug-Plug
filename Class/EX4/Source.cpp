//Bài tập: Tạo lớp CARD để quản lý sách trong thư viện. Yêu cầu mỗi loại sách cần lưu trữ các thông tin:
//Tựa đề sách, tác giả, số lượng sách.
//Xây dựng các phương thức để nhập và hiển thị các thông tin sách. Viết chương trình thực hiện
//* Nhập thông tin cho n cuốn sách.
//* Hiển thị ra màn hình những thông tin về những cuốn sách có số lượng lớn nhất.

#include<iostream>
#include<iomanip>
using namespace std;

class CARD
{
	char tuadesach[100];
	char tacgia[100];
	
public:
	int soluong;

	void nhap()
	{
		cout << "Tua de sach: ";
		cin.ignore();
		cin.get(tuadesach, 100);
		cout << "Tac gia: ";
		cin.ignore();
		cin.get(tacgia, 100);
		cout << "So luong: "; cin >> soluong;
	}

	void xuat()
	{
		cout << setw(30) << tuadesach;
		cout << setw(30) << tacgia;
		cout << setw(10) << soluong << endl;
	}

private:

};

// Function Prototype
void DisplayHeadline();

// Main Function
int main()
{
	int n, i,j=0, max;
// Chuong trinh thuc hien nhap so cuon sach can nhap du lieu
	cout << "So luong cuon sach can nhap thong tin: ";
	cin >> n;

// Tao n doi tuong cuon sach cho n cuon sach can nhap du lieu
	CARD *cuonsach = new CARD[n];		// Khai bao cap phat dong

// Nhap thong tin cho n cuon sach
	for (i = 0; i < n; i++) 
	{
		cout << "Nhap du lieu cho cuon sach thu " << i + 1 << endl;
		cuonsach[i].nhap();
	}
		

// Hien thi danh sach thong tin cho cac cuon sach
	DisplayHeadline();
	for (i = 0; i < n; i++)
		cuonsach[i].xuat();

// Tim tua de sach co so luong lon nhat
	max = cuonsach[0].soluong;
	for (i = 1; i < n; i++)
	{
		if (cuonsach[i].soluong>max)
		{
			max = cuonsach[i].soluong;
			j = i;
		}
		
	}

	// Hien thi tua de sach co so luong lon nhat
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "Thong tin cuon sach co so luong lon nhat: " << endl;
	cuonsach[j].xuat();

	delete[] cuonsach;		//Thu hoi vung nho cap phat dong
	
	system("pause");		// Dung man hinh
	return 0;

}

// Definite Function
void DisplayHeadline()
{
	cout << setw(30) << "Tua de sach";
	cout << setw(30) << "Tac gia";
	cout << setw(10) << "So luong" << endl;
}
