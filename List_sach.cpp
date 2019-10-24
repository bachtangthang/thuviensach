#include "List_sach.h"


int List_sach::NhapSach()
{
	int n;
	cout << "So luong cuon sach can nhap (<100): ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string a, b,d,e;
		double c;
		cin.ignore();
		cout << "Nhap ten sach " << i  + 1 << " : " ;
		getline(cin, a);
		ArraySach[i].SetTenSach(a);
		std::fflush(stdin);
		cout << "Nhap ma sach " << i + 1 << " : ";
		getline(cin, b);
		ArraySach[i].SetMaSach(b);
		std::fflush(stdin);
		cout << "Nhap nha xuat ban sach " << i + 1 << " : ";
		getline(cin, ArraySach[i].NhaXuatBan);
		std::fflush(stdin);
		cout << "Nhap tac gia sach " << i + 1 << " : ";
		getline(cin, ArraySach[i].TacGia);
		std::fflush(stdin);
		cout << "Nhap gia tien sach " << i + 1 << " : ";
		cin >> c;
		ArraySach[i].SetGiaTien(c);
	}

	return n;
}

void List_sach::XuatSach(int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ArraySach[i].GetTenSach() << endl;
		cout << ArraySach[i].GetMaSach() << endl;
		cout << ArraySach[i].GetGiaTien() << endl;
		cout << ArraySach[i].TacGia << endl;
		cout << ArraySach[i].NhaXuatBan << endl;
	}
}

void List_sach::TimSachTheoTen(string tenSach)
{
	int dem = 0;
	int ViTri = -1;
	for (int i = 0; i < n; i++)
	{
		if (ArraySach[i].GetTenSach() == tenSach)
		{
			dem++;
			ViTri = i;
		}
	}
	if (dem == 0)
	{
		cout << "Khong tim thay.";
	}
	else if (dem == 1)
	{
		int temp = InMenu();
		if (temp == 1)
		{
			ArraySach[ViTri].~Sach();
		}
		else if (temp == 2)
		{
			cout << "Nhap gia tien :" << endl;
			double price;
			cin >> price;
			ArraySach[ViTri].SetGiaTien(price);
		}
	}
	else
		TimSachTheoMa();
	
}

void List_sach::TimSachTheoMa()
{
	{
		cout << "Nhap ma sach can tim: ";
		string masach;
		cin >> masach;
		for (int i = 0; i < n; i++)
		{
			if (masach == ArraySach[i].GetMaSach())
			{
				int temp = InMenu();
				if (temp == 1)
				{
					ArraySach[i].~Sach();
				}
				else if (temp == 2)
				{
					cout << "Nhap gia tien :" << endl;
					double price;
					cin >> price;
					ArraySach[i].SetGiaTien(price);
				}
			}
		}
	}
}



int InMenu()
{
	cout << "Chon thao tac can thuc hien" << endl;
	cout << "1. Xoa sach" << endl;
	cout << "2. Thay doi gia tien" << endl;
	int n;
	cin >> n;
	return n;
}


List_sach::List_sach()
{

}


List_sach::~List_sach()
{
}
