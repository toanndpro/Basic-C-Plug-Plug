//Bài tập 1
//Viết chương trình C++ nhập 10 giá trị nguyên, sau đó tìm giá trị lớn nhất, nhỏ nhất
//tìm giá trị có tần suất xuất hiện nhiều nhất, sắp xếp mảng theo thứ tự tăng dần và hiển thị kết quả.


#include<iostream>
#include<iomanip>
#define kichthuoc 10
using namespace std;

// Function Prototype
void SapXepTang(int a[], int n);    // Khai bao ham Sap xep mang theo thu tu tang dan.
int MAX(int a[], int n);		 // Khai bao ham tim gia tri Max cua mang  
int MIN(int a[], int n);		 // Khai bao ham tim gia tri Min cua mang


int main()
{
	int x[kichthuoc];
	int mode[kichthuoc][2];
	//int m = 0, n = 0, counter;

	cout << "Nhap 10 so nguyen\n";
	for (int l = 0; l<kichthuoc; l++)
	{
		cout << "Gia tri " << l << " la: ";
		cin >> x[l];
	}

	// Sap xep mang tang gian
	SapXepTang(x, kichthuoc);
	cout << "Mang sap xep theo thu tu tang dan: " << endl;
	for (int k = 0; k < kichthuoc; k++)
		cout << setw(4) << x[k];
	// Tim Max, Min cua mang
	cout << "\nGia tri lon nhat: " << MAX(x, kichthuoc);
	cout << "\nGia tri nho nhat: " << MIN(x, kichthuoc) << endl;

	//khoi tao mang 2 chieu de sap xep tan suat va gia tri
	int i, j;
	for (i = 0; i<2; i++)
		for (j = 0; j<10; j++)mode[j][i] = 0;
	mode[0][0] = 1;
	//tim tan suat 
	for (i = 0; i<10; i++)
		for (j = 0; j<10; j++)
			if (x[i] == x[j + 1])
			{
				++mode[i][0];
				mode[i][1] = x[i];
			}
	//tim so lan suat hien nhieu nhat 
	int max;
	int k = 0;
	max = mode[0][0];
	for (j = 0; j<10; j++)
		if (max<mode[j][0]) { max = mode[j][0]; k = j; }

	// in ket qua
	cout << "Gia tri xuat hien nhieu nhat la:" << mode[k][1] << "\n";
	cout << "Xuat hien " << max << " lan.";
	cout << "\n";


	system("pause");
	return 0;
}


// Function Definition
void SapXepTang(int a[], int n)
{
	int temp, i, j;
	for (i = 0; i < n - 1; i++)

		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
}

int MAX(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i]>max)
			max = a[i];
	return max;
}

// Function Definition: MIN Function
int MIN(int a[], int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
		if (a[i]<min)
			min = a[i];
	return min;
}
