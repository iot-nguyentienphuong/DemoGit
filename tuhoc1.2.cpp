
#include <iostream>

using namespace std;

int main()
{
	double x,y,tong,hieu;
	cout << "Nhap tong: ";
	cin >> tong;
	
	cout << "Nhap hieu: ";		
	cin >> hieu;
	x = (tong + hieu) / 2;
	y = (tong - hieu) / 2;
		
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	double cc, cn;
	cout << "nhap chieu cao: ";
	cin >> cc;
	cout << "nhap can nang: ";
	cin >> cn;
	double bmi = cn / (cc * cc);
	cout << "Chi so BMI: " << bmi << endl;
	if (bmi < 15)
	{
		cout << "thân hình quá gầy: " << endl;
	}
	else if (bmi >= 15 && bmi < 16)
	{
		cout << "thân hình gầy: " << endl;
	}
	else if(bmi >= 16 && bmi < 18.5)
	{
			cout << "thân hình hơi gầy: " << endl;
		}
	else if (bmi >= 18.5 && bmi < 25)
	{
		cout << "thân hình bình thường: " << endl;
	}
	else if (bmi >= 25 && bmi < 30)
	{
		cout << "thân hình hơi béo: " << endl;
	}
	else if (bmi >= 30 && bmi < 35)
	{
		cout << "thân hình béo: " << endl;
	}
	else if (bmi >= 35)
	{
		cout << "thân hình béo phì: " << endl;
	}

}

