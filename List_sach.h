#ifndef __LIST_SACH_H__
#define __LIST_SACH_H__
#include "Sach.h"

class List_sach
{
private:
	
	
public:
	Sach ArraySach[10];
	int n;
	int NhapSach();
	void XuatSach(int& n);
	void TimSachTheoTen(string tenSach);
	void TimSachTheoMa();
	List_sach();
	~List_sach();
};
int InMenu();
#endif