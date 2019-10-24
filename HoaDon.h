#ifndef __HOADON_H__
#define __HOADON_H__
#include "List_sach.h"
#include "Sach.h"
class HoaDon
{
public:
	Sach a;
	int soLuong;
	void fXuatHoaDon();
	HoaDon();
	HoaDon(Sach a, int soLuong);
	~HoaDon();
};
#endif