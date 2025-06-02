#ifndef NHANVIEN_H_INCLUDED
#define NHANVIEN_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;

class NhanVien {
protected:
    string MaNV,HoTen,SDT,Email;
    int Tuoi;
    double LuongCoBan;
public:
    virtual void Nhap();
    virtual void Xuat();
    virtual double Luong() = 0;
    virtual int getLoai() = 0;
};


#endif // NHANVIEN_H_INCLUDED
