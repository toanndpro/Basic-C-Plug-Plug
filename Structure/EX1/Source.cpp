//Bài tập
//Viết chương trình Book Entry đơn giản sử dụng Structure trong C++.

#include<iostream>
using namespace std;


// Creat struct bookentry
struct bookentry
{
	char tensach[20];
	char tacgia[20];
}a[50];

// 
void ImportData();

int main()
{
	int i,n;
	ImportData();

	/*cout << "================================================\n";
	cout << " STT\t| Ten Sach\t|   Tac gia\n";
	cout << "=====================================================";
	for (i = 0; i<n; i++)
	{
		cout << "\n  " << i + 1 << "\t|" << a[i].tensach << "\t| " << a[i].tacgia;
	}
	cout << "\n=================================================";*/

	return 0;
}

void ImportData() {
	int i, n;
	cout << "So cuon sach can nhap du lieu: ";
	cin >> n;
	cout << "\nNhap thong tin ve cho cac cuon sach" << endl;
	cout << "--------------------------------------\n";

	for (i = 0; i<n; i++)
	{
		cout << "Thong tin ve cuon sach so " << i + 1 << "\n";
		cout << "Ten Sach: ";
		cin >> a[i].tensach;
		cout << "Tac gia: ";
		cin >> a[i].tacgia;
		cout << "----------------------\n";
	}

}