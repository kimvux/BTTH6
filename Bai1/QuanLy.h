#ifndef QUANLY_H_INCLUDED
#define QUANLY_H_INCLUDED
#include "VanPhong.h"
#include "SanXuat.h"

class QuanLy {
private:
    NhanVien *nv[1000];
    int sonhanvien;
public:
    void Nhap();
    void Xuat();
    void TongLuong();
    void NVSXLuongThapNhat();
    void NVVPTuoiCaoNhat();
};


#endif // QUANLY_H_INCLUDED
