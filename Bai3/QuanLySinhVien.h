#ifndef QUANLYSINHVIEN_H_INCLUDED
#define QUANLYSINHVIEN_H_INCLUDED
#include "DaiHoc.h"
#include "CaoDang.h"

class QuanLySinhVien {
private:
    vector<SinhVien*> sv;
    int daihoc=0,caodang=0;
public:
    void Nhap();
    void Xuat();
    void ListSinhVienTotNghiep();
    void ListSinhVienKhongTotNghiep();
    void SinhVienDaiHocDTBCaoNhat();
    void SinhVienCaoDangDTBCaoNhat();
    void SoLuongSVKhongTotNghiep();
};


#endif // QUANLYSINHVIEN_H_INCLUDED
