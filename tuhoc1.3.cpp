

#include <iostream>
using namespace std;

int main()
{
	// vi du về switch case
	int thang;
	cout << "Nhap thang: ";
	cin >> thang;
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "Thang " << thang << " co 31 ngay." << endl;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "Thang " << thang << " co 30 ngay." << endl;
			break;
		case 2:
			cout << "Thang " << thang << " co 28 hoac 29 ngay." << endl;
			break;
		default:
			cout << "Thang khong hop le." << endl;
	}

	// nhap phim
	int phim;
	cout << "Nhap phim de tim kiem: ";
	cin >> phim;
	switch (phim)
	{
	case 1:
		cout << "tim theo ten: ";
		break;
	case 2:
		cout << "tim theo tac gia" << endl;
		break;
	case 3:
		cout << "tim theo nha xuat ban" << endl;
		break;
	case 4:
		cout << "tim theo tieu de" << endl;
		break;
	default:
		cout << "Ban vua nhap phim khong hop le." << endl;
	}
}
