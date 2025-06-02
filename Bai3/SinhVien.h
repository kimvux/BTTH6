#ifndef SINHVIEN_H_INCLUDED
#define SINHVIEN_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;

class SinhVien {
protected:
    string MSSV;
    string HoTen;
    string DiaChi;
    int TongSoTinChi;
    double DiemTrungBinh;
public:
    virtual void Nhap();
    virtual void Xuat();
    double getDTB(){return DiemTrungBinh;};
    virtual bool TotNghiep() = 0;
    virtual int getLoai() = 0;
};


#endif // SINHVIEN_H_INCLUDED
