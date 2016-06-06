/*
Xây dựng lớp TIME mô tả các thông tin về giờ, phút, giây. Lớp TIME có các thành phần sau:
- Các thuộc tính mô tả giờ phút giây
- Hàm thiết lập có ba tham số giờ, phút, giây được lấy giá trị ngầm định là 0.
- Hàm thành phần Set(int,int,int) để xác lập thời gian
- Hàm hiển thị giờ yheo 24 tiếng
- Hàm hiển thị giờ theo 12 tiếng ( AM và PM)
*/

#include<iostream>
#include<stdio.h>
#include<Windows.h>
using namespace std;

// Khai bao lop TIME
class TIME
{
	// Thuoc tinh gio, phut va giay
	int hour, minute, second;
private:
	//Tang gio len 1
	void incHour() {
		hour++;
		// Chuyen ngay
		if (hour == 24)
			hour = 0;
	}
	// Tang phut len 1
	void incMinute() {
		minute++;
		//Chuyen gio
		if (minute == 60)
		{
			minute = 0;
			incHour();
		}
	}
public:
	TIME(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {};
	//~TIME();

	void set(int h, int m = 0, int s = 0) {
		// Ham xac lap thoi gian vowi phut va giay mac dinh la 0
		hour = h;
		minute = m;
		second = s;
	}

	//Ham thanh phan tick
	void tick() {
		//Tang giay len 1
		second++;
		if (second == 60)
		{
			second = 0;
			incMinute();
		}
	}

	// Cac ham xac lap tung thanh phan
	void setHour(int h) {
		hour = h;
	}

	void setMinute(int m) {
		minute = m;
	}

	void setSecond(int s) {
		second = s;
	}

	// Cac ham lay gia tri tung thanh phan
	int getHour() {
		return hour;
	}

	int getMinute() {
		return minute;
	}

	int getSecond() {
		return second;
	}

	// Ham hien thi gio theo 24 tieng
	void display24() {
		cout << hour << ":" << minute << ":" << second;
	}

	// Ham hien thi gio theo 12 tieng
	void display12() {
		if (hour > 12)
		{
			cout << hour - 12 << ":" << minute << ":" << second <<" PM"<< endl;
		}
		else
		{
			cout << hour << ":" << minute << ":" << second<< " AM" << endl;
		}
	}
};


int main() {
	TIME time(10,32,45);
	//time.display12();
		
	while (true)
	{
		system("cls");
		time.tick();
		time.display24();
		Sleep(1000);
			
	}
	system("pause");
	return 0;
}