#include<iostream> 
#include<iomanip>
#include<math.h>

#define hang 10     
#define cot 6
using namespace std;

int main()
{
	int x[hang][cot];          // Khai bao ma tran x[][]
	int h, c;
	int tonghang = 0, tongcot = 0, tongduongcheo = 0;

	srand(time(NULL));
// Nhap gia tri cho ma tran x[][]
	for (h = 0; h < hang; h++)
		for (c = 0; c < cot; c++)
			x[h][c] = rand() % 100;   //Tao so ngau nhien

// In ma tran x ra man hinh
	cout << "       MA TRAN X["<<hang<<"]["<<cot<<"]" << endl;
	cout << "------------------------------------------------" << endl;
	for (h = 0; h<hang; h++)
	{
	for (c = 0; c<cot; c++)
	cout << setw(5) << x[h][c];
	cout << endl;
	}
	cout << "------------------------------------------------" << endl;
// Kiem tra neu so hang bang so cot thi tinh tong duong cheo

	if (hang == cot)
	{
		for (h = 0; h < hang; h++)
			for (c = 0; c < cot; c++)
		{
			if (h == c)
				tongduongcheo += x[h][c];
		}
		
		cout << "Tong duong cheo la: " << tongduongcheo << endl;
		cout << "------------------------------------------------" << endl;
		tongduongcheo = 0;
	}

// Tinh tong cac hang
	for (h = 0; h < hang; h++)

	{
		for (c = 0; c < cot; c++)
			tonghang += x[h][c];
		cout << "Tong hang " << h + 1 << " la: "<< tonghang << endl;
		tonghang = 0;
	}
	cout << "------------------------------------------------" << endl;
// Tinh tong cac cot
	for (c= 0; c < cot; c++)
	{
		for (h = 0; h< hang; h++)
			tongcot += x[h][c];
		cout << "Tong cot " << c + 1 << " la:" << tongcot << endl;
		tongcot = 0;
	}

	system("pause");
	return 0;
}