#ifndef QUANLYNHANVIEN_H_INCLUDED
#define QUANLYNHANVIEN_H_INCLUDED
#include "Coder.h"
#include "Tester.h"

class QuanLyNhanVien {
private:
    vector<NhanVien*> nv;
public:
    void Nhap();
    void Xuat();
    void ListNVcoLuongThapHonAVG();
    void NVcoLuongCaoNhat();
    void NVcoLuongThapNhat();
    void CoderCoLuongCaoNhat();
    void TesterCoLuongThapNhat();
};


#endif // QUANLYNHANVIEN_H_INCLUDED
