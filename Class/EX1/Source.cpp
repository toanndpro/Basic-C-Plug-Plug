#include<iostream>
using namespace std;

class House
{
private:
	int chieuCao;
	int chieuRong;
	int chieuDai;
	int soPhong;
public:
	void setChCao(int);		// Chi khai bao phuong thuc ben trong Class
	void setChRong(int);
	void setChDai(int);
	void setSoPhong(int);
	int getChCao() { return chieuCao; }	// Cai dat va khai bao phuong thuc
	int getChRong() { return chieuRong; }
	int getChDai() { return chieuDai; }
	int getSoPhong() { return soPhong; }
};

void House::setChCao(int cao)
{
	chieuCao = cao;
}

void House::setChRong(int rong)
{
	chieuRong = rong;
}

void House::setChDai(int dai)
{
	chieuDai = dai;
}

void House::setSoPhong(int soP)
{
	soPhong = soP;
}

int main()
{
	House Test;
	int temp;
	cout << "Nhap vao so do cho ngoi nha theo thu tu: Dai, Rong, Cao, So Phong" << endl;
	cin >> temp;
	Test.setChDai(temp);
	
	cin >> temp;
	Test.setChRong(temp);
	
	cin >> temp;
	Test.setChCao(temp);
	
	cin >> temp;
	Test.setSoPhong(temp);

	cout << "Thong tin ngoi nha ban vua nhap:" << endl;
	cout << "Chieu Dai: " << Test.getChDai() << endl;
	cout << "Chieu Rong: " << Test.getChRong() << endl;
	cout << "Chieu Cao: " << Test.getChCao() << endl;
	cout << "So phong: " << Test.getSoPhong() << endl;

	system("pause");
	return 0;
}