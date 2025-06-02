#ifndef GIAODICH_H_INCLUDED
#define GIAODICH_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
class GiaoDich {
protected:
    string MGD;
    double DonGia;
    double DienTich;
    int d,m,y;
public:
    virtual void Nhap();
    virtual void Xuat();
    int getM(){return m;};
    int getY(){return y;};
    virtual double ThanhTien() = 0;
    virtual int getLoai() = 0;
};


#endif // GIAODICH_H_INCLUDED
