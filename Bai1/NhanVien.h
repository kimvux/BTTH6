#ifndef NHANVIEN_H_INCLUDED
#define NHANVIEN_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;

class NhanVien {
protected:
    string Ten;
    int d,m,y;
public:
    virtual void Nhap();
    virtual void Xuat();
    virtual double Luong() = 0;
    virtual int getLoai() = 0;
    int getY(){return y;}
};


#endif // NHANVIEN_H_INCLUDED
