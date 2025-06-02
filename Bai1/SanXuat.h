#ifndef SANXUAT_H_INCLUDED
#define SANXUAT_H_INCLUDED
#include "NhanVien.h"

class SanXuat : public NhanVien {
private:
    double LuongCanBan;
    int SoSanPham;
public:
    void Nhap();
    void Xuat();
    double Luong();
    int getLoai(){return 1;}
};


#endif // SANXUAT_H_INCLUDED
