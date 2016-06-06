#include<iostream>
#include<iomanip>

#define cell 4
using namespace std;

int main()
{
	int xMatrix[cell][cell];
	int i, j, tong = 0;
// Nhap gia tri cho ma tran
	for (i = 0; i < cell; i++)
		for (j = 0; j < cell; j++)
			xMatrix[i][j] = rand() % 101;

// In ma tran ra man hinh
	for (i = 0; i < cell; i++)
	{
		for (j = 0; j < cell; j++)
			cout << xMatrix[i][j] << "\t";
		    cout << endl;
	}

// Tinh tong duong cheo
	for (i = 0; i < cell; i++)
		for (j = 0; j < cell; j++)
			if (i == j) tong += xMatrix[i][j];
	cout << "Tong duong cheo cua ma tran: " << tong << endl;
	
	system("pause");
	return 0;
}