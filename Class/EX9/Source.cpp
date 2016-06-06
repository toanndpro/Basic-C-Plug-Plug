//Xây dựng lớp cơ sở VECTO có các thông tin về hai tọa độ trong mặt phẳng hai chiều: x,y và các phương thức
// - Phương thức nhập để nhập tọa độ x,y
// - Phương thức xuất để hiện tọa độ các vecto ra màn hình
// - Các phép toán cộng trừ hai vector
//Viết chương trình nhập vào hai vector A, B. Tính tổng và hiệu hai vector, in kết quả ra màn hình.

#include<iostream>
#include<iomanip>
using namespace std;

class VECTOR;
class VECTO
{
private:
	int x, y;
public:
	friend ostream& operator<<(ostream&, VECTO);
	friend istream& operator>>(istream&, VECTO&);
	VECTO operator+(VECTO);
	VECTO operator-(VECTO);
};

ostream& operator<<(ostream& os, VECTO u)
{
	os << "(" << u.x << "," << u.y << ")" << endl;
	return os;
}

istream& operator>>(istream& is, VECTO &u)
{
	cout << "Nhap x: "; is >> u.x;
	cout << "Nhap y: "; is >> u.y;
	return is;
}

VECTO VECTO:: operator+(VECTO v)
{
	VECTO w;
	w.x = x + v.x;
	w.y = y + v.y;
	return w;
}

VECTO VECTO:: operator-(VECTO v)
{
	VECTO w;
	w.x = this->x - v.x;
	w.y = this->y - v.y;
	return w;
}

int main()
{
	VECTO a, b, c, d;
	cin >> a; cout << a;
	cin >> b; cout << b;
	c = a + b;
	d = a - b;
	cout << "Ket qua phep cong vec to: " << c;
	cout << "Ket qua phep tru vec to: " << d << endl;

	system("pause");			// Dung man hinh
	return 0;
}