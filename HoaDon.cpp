#include "HoaDon.h"





void HoaDon::fXuatHoaDon()
{
	cout << a.GetTenSach() << " * " << soLuong << " = " << a.GetGiaTien() * soLuong << endl;
}



HoaDon::HoaDon()
{
	soLuong = 0;
}

HoaDon::HoaDon(Sach a, int soLuong)
{
	this->a = a;
	this->soLuong = soLuong;
}

HoaDon::~HoaDon()
{
}
