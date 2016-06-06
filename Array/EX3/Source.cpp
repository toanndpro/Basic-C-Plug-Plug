//Bài tập 3: Viết chương trình C++ để hiển thị một bảng các số như dưới đây:
//			 1	 2	 3	 4	 5
//			 6	 7	 8	 9	10
//			11	12	13	14	15
//			16	17	18	19	20
//			21	22	23	24	25


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
			if (i == 0) 
				x[0][j] = j + 1; //Dien vao hang dau tien 
			else
			if ((i>0) && (j == 0))
				x[i][0] = x[i - 1][kichthuoc-1] + 1; //Lay cac gia tri cua o cuoi cung trong hang truoc do
			else 
				x[i][j] = x[i][j - 1] + 1; //Dien vao cac o ke tiep 
		}

// In mang ra man hinh
	for (i = 0; i<kichthuoc; i++) 
	{
		for (j = 0; j<kichthuoc; j++)
			cout <<setw(5)<< x[i][j];
		cout << endl;
	}
	system("pause");

	return 0;

}