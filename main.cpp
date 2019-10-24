#include "Sach.h"
#include"List_sach.h"
#include "HoaDon.h"
#include "ListHoaDon.h"
int main()
{
	List_sach O;
	O.n = O.NhapSach();
	O.XuatSach(O.n);
	cin.ignore();
	/*cout << "Nhap ten sach can tim" << endl;
	string ten;
	cin >> ten;
	O.TimSachTheoTen(ten);
	O.XuatSach(O.n);*/
	ListHoaDon a;
	for (int i = 0; i < 2; i++)
	{
		a.fThemSachVaoListHoaDon(O, O.n);
		cin.ignore();
	}
	a.fXuatListHoaDon();
}