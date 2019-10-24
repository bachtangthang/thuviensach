#include "Sach.h"



 void Sach::SetTenSach(const string& tensach)
{
	TenSach = tensach;
}

void Sach::SetMaSach(const string& masach)
{
	MaSach = masach;
}

void Sach::SetGiaTien(const double& giatien)
{
	this->GiaTien = giatien;
}

string Sach::GetTenSach()
{
	return TenSach;
}

string Sach::GetMaSach()
{
	return MaSach;
}


double Sach::GetGiaTien()
{
	return GiaTien;
}

Sach::Sach()
{
	TenSach = "";
	MaSach = "";
	GiaTien = 0;
	NhaXuatBan = "";
	TacGia = "";
}
Sach::~Sach()
{
	SetGiaTien(0);
	SetMaSach("");
	SetTenSach("");
	NhaXuatBan = "";
	TacGia = "";
}

const Sach& Sach::operator=(const Sach& A)
{
	TenSach = A.TenSach;
	MaSach = A.MaSach;
	GiaTien = A.GiaTien;
	NhaXuatBan = A.NhaXuatBan;
	TacGia = A.TacGia;
	return A;
}
