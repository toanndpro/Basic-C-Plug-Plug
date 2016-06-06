//Bài tập 4:
//Nhập và hiển thị một ma trận có kích thước là 5x5
//Trong đó: Các phần tử trên đường chéo được điền giá trị 0 
//          Các phần tử của tam giác dưới đường chéo được điền các giá trị - 1, 
//          và ở tam giác trên là được điền với các giá trị 1.

#include<iostream> 
#include<iomanip>
#define kichthuoc 5           
using namespace std;

int main()
{
	int x[kichthuoc][kichthuoc];	//Khai bao mang hai chieu
	int i, j;
	for (i = 0; i<kichthuoc; i++) //Gan cac gia tri cho mang hai chieu 
		for (j = 0; j < kichthuoc; j++)
		{
			if (i == j)
				x[i][j] = 0; //Dien gia tri 0 vao duong cheo
			else
				if (i>j)
					x[i][j] = -1; //Dien gia tri 1 vao phan tam giac tren
				else
					x[i][j] =  1; //Dien gia tri -1 vao phan tam giac duoi
		}

	// In mang ra man hinh
	for (i = 0; i<kichthuoc; i++)
	{
		for (j = 0; j<kichthuoc; j++)
			cout << setw(5) << x[i][j];
		cout << endl;
	}
	system("pause");
	return 0;
}