#ifndef CAODANG_H_INCLUDED
#define CAODANG_H_INCLUDED
#include "SinhVien.h"

class CaoDang : public SinhVien {
private:
    double DiemThiTotNghiep;
public:
    void Nhap();
    void Xuat();
    bool TotNghiep();
    int getLoai(){return 1;};
};


#endif // CAODANG_H_INCLUDED
