#include<iostream> 
#include<iomanip>
#define kichthuoc 10
using namespace std;

int main()
{
	int x[kichthuoc];
	int i, j, temp;

// Nhap gia tri cho mang.
	cout << "Nhap gia tri cho mang: " << endl;
	for (i = 0; i < kichthuoc; i++)
	{
		cout << "x[" << i << "] = ";
		cin >> x[i];
	}
	
// Sap xep mang theo thu tu tang dan
	for (i = 0; i < kichthuoc - 1; i++)

		for (j = i + 1; j < kichthuoc; j++)
		{
			if (x[i] > x[j])
			{
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
// In mang ra man hinh
	cout << "Sap xep mang theo thu tu tang dan:";
	for (j = 0; j < kichthuoc;j++)
		cout << setw(4)<<x[j];
	cout << endl;
// In mang ra man hinh
	cout << "Sap xep mang theo thu tu giam dan:";
	for (j = kichthuoc-1; j >=0; j--)
		cout << setw(4) << x[j];
	cout << endl;

	system("pause");		//Dung man hinh
	return 0;
}