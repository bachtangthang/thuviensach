#ifndef __SACH_H__
#define __SACH_H__
#include <iostream>
using namespace std;
#include <string>
class Sach
{
private:
	string TenSach;
	string MaSach;
	double GiaTien;
public:
	string NhaXuatBan;
	string TacGia;
	void SetTenSach(const string& tensach);
	void SetMaSach(const string& masach);
	void SetGiaTien(const double& giatien);
	string GetTenSach();
	string GetMaSach();
	double GetGiaTien();
	Sach();
	~Sach();
	const Sach& operator=(const Sach& A);
};

#endif