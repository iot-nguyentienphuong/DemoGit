
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
	double bim = cn / (cc * cc);
	cout << "Chi so BMI: " << bim << endl;
	if (bim < 15)
	{
		cout << "thân hình quá gầy: " << endl;
	}
	else if (bim >= 15 && bim < 16)
	{
		cout << "thân hình gầy: " << endl;
	}
	else if(bim >= 16 && bim < 18.5)
	{
			cout << "thân hình hơi gầy: " << endl;
		}
	else if (bim >= 18.5 && bim < 25)
	{
		cout << "thân hình bình thường: " << endl;
	}
	else if (bim >= 25 && bim < 30)
	{
		cout << "thân hình hơi béo: " << endl;
	}
	else if (bim >= 30 && bim < 35)
	{
		cout << "thân hình béo: " << endl;
	}
	else if (bim >= 35)
	{
		cout << "thân hình béo phì: " << endl;
	}

}

