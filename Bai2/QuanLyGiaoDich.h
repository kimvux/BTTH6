#ifndef QUANLYGIAODICH_H_INCLUDED
#define QUANLYGIAODICH_H_INCLUDED
#include "Dat.h"
#include "NhaPho.h"
#include "CanHoChungCu.h"
#include "GiaoDich.h"
class QuanLyGiaoDich {
private:
    vector<GiaoDich*> gd;
    int sogiaodich=0;
    int dat=0,nhapho=0,chungcu=0;
public:
    void Nhap();
    void Xuat();
    void SoLuongTungLoai();
    void TrungBinhThanhTienCanHoChungCu();
    void ThanhTienNhaPhoCaoNhat();
    void ListGiaoDich12_2024();
};


#endif // QUANLYGIAODICH_H_INCLUDED
