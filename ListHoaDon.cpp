#include "ListHoaDon.h"

void ListHoaDon::fThemSachVaoListHoaDon(List_sach A, int n)
{
	string tenSach;
	cout << "Nhap ten cuon sach can tim: " << endl;
	getline(cin, tenSach);
	std::fflush(stdin);
	int dem = 0;
	HoaDon temp;
	for (int i = 0; i < n; i++)
	{
		if (A.ArraySach[i].GetTenSach() == tenSach)
		{
			dem++;
			temp.a = A.ArraySach[i];
		}
	}
	if (dem != 0)
	{
		cout << "Nhap so luong sach can mua : ";
		int m;
		cin >> m;
		temp.soLuong = m;
		list.push_back(temp);
	}
	else
		cout << "Khong tim thay sach ban can tim";
}

void ListHoaDon::fXuatListHoaDon()
{
	for (auto i = list.begin(); i != list.end(); ++i)
	{
		(*i).fXuatHoaDon();
	}
}
