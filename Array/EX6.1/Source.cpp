
#include<iostream>
#include<iomanip>
using namespace std;

//Function Prototype
long Giaithua(int n);
long TinhToHop(int k, int n);
void VetgPasscal(int h);

int main()
{
	int h;
	cout << "Nhap vao chieu cao tam giac Passcal: ";
	cin >> h;
	//cout<<Giaithua(h);
	VetgPasscal(h);
	system("pause");
}

long Giaithua(int n)
{
	if (n == 0) return 1;
	else return n*Giaithua(n - 1);
}

long TinhToHop(int k, int n)
{
	return Giaithua(n) / (Giaithua(k)*Giaithua(n - k));
}

void VetgPasscal(int h)
{
	int i, j;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j <= i; j++)
			cout << setw(4)<<TinhToHop(j, i);
		cout << endl;

	}

}