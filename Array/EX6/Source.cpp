//Bài tập 6
//Viết chương trình C++ để nhập và hiển thị tam giác Pascal.

#include<iostream> 
#include<conio.h> 
#include<iomanip>
using namespace std;

// Function Prototype
void tgPascal(int size);

int main()
{
	int size;
	cout << "Nhap kich co cua tam giac Pascal: ";
	cin >> size;
	tgPascal(size);
	system("pause");
	return 0;

}


void tgPascal(int size) 
{
	int PascalTr[100][100];
	int hang, cot;
	//Gan gia tri 0 cho moi phan tu mang 
	for (hang = 0; hang<size; hang++)
		for (cot = 0; cot<size; cot++)  PascalTr[hang][cot] = 0;
	//Thiet lap gia tri hang thu nhat va thu hai la 1   
	PascalTr[0][0] = 1;
	PascalTr[1][0] = 1;
	PascalTr[1][1] = 1;

	for (hang = 2; hang<size; hang++) 
	 {
		PascalTr[hang][0] = 1;
		for (cot = 1; cot <= hang; cot++) 
		{
			PascalTr[hang][cot] = PascalTr[hang - 1][cot - 1] + PascalTr[hang - 1][cot];
		}
	  }


	//hien thi tam giac Pascal 
	for (hang = 0; hang < size; hang++) {
		for (cot = 0; cot <= hang; cot++)
		{
			cout << setw(3)<< PascalTr[hang][cot] ;
		}
			cout << endl;
	}
	
}