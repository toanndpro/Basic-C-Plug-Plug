//Bài tập: xây dựng lớp phân số có các thông tin:Tử số, mẫu số và các phương thức
//-Phương thức thiết lập hai tham số
//-Phương thức nhập để nhập phân số
//-Phương thức xuất để hiên phân số ra màn hình
//-Phep toán công, nhân, tru hai phân số
//VIết chương trình chính thực hiện nhập hai phân số, tính tổng, tích, hiệu  của chúng và hiển thị kết quả ra màn hình.

#include<iostream>
using namespace std;

// Function Protype
int USCLN(int x, int y);

class PS
{
	int tu, mau;
public:
	friend ostream& operator << (ostream&, PS);
	friend istream& operator >> (istream&, PS&);
	PS operator+(PS);
	PS operator-(PS);
	PS operator*(PS);

};

ostream& operator<<(ostream& os,PS u)
{
	os << u.tu << "/" << u.mau << endl;
	return os;
}

istream& operator >> (istream& is, PS& u)
{
	cout << "Phan tu: "; is >> u.tu;
	cout << "Phan mau: "; is >> u.mau;
	return is;
}

PS PS:: operator+(PS v)
{
	PS w;
	int x;
	w.tu = tu*v.mau + v.tu*mau;
	w.mau = mau*v.mau;
	x = USCLN(w.tu, w.mau);
	w.tu = w.tu / x;
	w.mau = w.mau / x;
	return w;
}

PS PS:: operator-(PS h)
{
	PS g;
	int x;
	g.tu = tu*h.mau - h.tu*mau;
	g.mau = mau*h.mau;
	x= USCLN(g.tu, g.mau);
	g.tu = g.tu / x;
	g.mau = g.mau / x;
	return g;
}

PS PS:: operator*(PS k)
{
	PS f;
	int x;
	f.tu = tu*k.tu;
	f.mau = mau*k.mau;
	x = USCLN(f.tu, f.mau);
	f.tu = f.tu / x;
	f.mau = f.mau / x;
	return f;
}

// Main Function
int main()
{
	PS a, b, c, d,e;
	cin >> a; cout << a;
	cin >> b; cout << b;
	c = a + b; d = a - b; e = a*b;
	cout << "Ket qua phep cong: " << c;
	cout << "Ket qua phep tru: " << d;
	cout << "Ket qua phep nhan: " << e;
	system("pause");		// Dung man hinh
	return 0; 
}

//Definition Function
int USCLN(int x, int y)
{
	x = abs(x);
	y = abs(y);

	if (x*y == 0)
		return 1;
	else {
		while (x != y)
			if (x > y)
				x = x - y;
			else
				y = y - x;
		return x;
	}
}