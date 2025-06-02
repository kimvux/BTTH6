#ifndef DAIHOC_H_INCLUDED
#define DAIHOC_H_INCLUDED
#include "SinhVien.h"

class DaiHoc : public SinhVien {
private:
    string TenLuanVan;
    double DiemLuanVan;
public:
    void Nhap();
    void Xuat();
    bool TotNghiep();
    int getLoai(){return 2;}
};


#endif // DAIHOC_H_INCLUDED
