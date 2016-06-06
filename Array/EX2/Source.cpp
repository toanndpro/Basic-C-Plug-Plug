//Bài tập 2
//Viết một chương trình C++ để hiển thị một menu cho phép người dùng lựa chọn 
//hoặc quan sát tất cả bản ghi của sinh viên hoặc
//chỉ quan sát các bản ghi của một sinh viên cụ thể bởi lựa chọn id của sinh viên đó.

#include<iostream>
#include<iomanip>
#define hang 4
#define cot 5

using namespace std;

// Function Prototype
void DisplayMenu();
void Showheading();
void ViewAll(int stu[hang][cot]);
void ViewbyID(int stu[hang][cot]);
int HighValue(int stu[hang][cot]);
int LowValue(int stu[hang][cot]);

int main()
{
	//xay dung mang hai chieu de luu tru ban ghi cua sinh vien
	int stu[hang][cot] = { { 6001,7,7,8,4 },{ 6002,6,8,5,8 },{ 6003,5,6,6,7 },{ 6004,5,9,8,9 } };
	int luachon;
	char confirm;
	// Hien thi Menu	
	DisplayMenu();


	do
	{
		cout << "Ban hay nhap lua chon: ";
		cin >> luachon;
		switch (luachon)
		{
		case 1: ViewAll(stu); break;
		case 2: ViewbyID(stu); break;
		case 3: cout << "Diem cuoi ky cao nhat: " << HighValue(stu) << endl;
			cout << "Diem cuoi ky thap nhat: " << LowValue(stu) << endl;
			break;
		default: cout << "Khong hop le." << endl;
			break;
		}
		cout << "Press y or Y to continous:";
		cin >> confirm;
	} while (confirm == 'y' || confirm == 'Y');

	system("pause");
	return 0;
}


// Function Definition
void DisplayMenu()
{
	cout << "==========================================================" << endl;
	cout << "		           MENU " << endl;
	cout << "==========================================================" << endl;
	cout << "1. Quan sat tat ca ban ghi cua sinh vien" << endl;
	cout << "2. Quan sat mot ban ghi cua sinh vien boi ID" << endl;
	cout << "3. Hien thi diem thi cuoi ky cao nhat va thap nhat" << endl;
}

void Showheading()
{
	cout << "=========================================================================\n";
	cout << "ID          Kiemtra1        Kiemtra2         Giuaky          Cuoiky\n";
	cout << "=========================================================================\n";
}

void ViewAll(int stu[hang][cot])
{
	int i, j;
	Showheading();
	for (i = 0; i<hang; i++) {
		for (j = 0; j<cot; j++) cout << stu[i][j] << "\t\t";
		cout << "\n";
	}
}

void ViewbyID(int stu[hang][cot])
{
	int id, i, j;
	bool l = false;
	cout << "Nhap vao ID: ";
	cin >> id;
	for (i = 0; i < hang; i++)
	{
		if (stu[i][0] == id)
		{
			Showheading();
			l = true;
			for (j = 0; j < cot; j++)
				cout << stu[i][j] << "\t\t";
		}
	}
	cout << endl;
	if (l == false) cout << "Xin loi, khong tim thay!";
}

int HighValue(int stu[hang][cot])
{
	int max;
	max = stu[0][4];
	for (int i = 1; i < hang; i++)
		if (stu[i][4]>max)
			max = stu[i][4];
	return (max);
}

int LowValue(int stu[hang][cot])
{
	int min;
	min = stu[0][4];
	for (int i = 1; i < hang; i++)
		if (stu[i][4]<min)
			min = stu[i][4];
	return (min);

}
