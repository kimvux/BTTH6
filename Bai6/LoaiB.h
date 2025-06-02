#ifndef LOAIB_H_INCLUDED
#define LOAIB_H_INCLUDED
#include "KhachHang.h"

class LoaiB : public KhachHang {
private:
    int SoNamThanThiet;
public:
    void setSoNamThanThiet(int x){SoNamThanThiet = x;};
    double SoTienPhaiTra(){return (SoLuong*DonGiaHang)*(1-max(SoNamThanThiet*0.05,0.5))*1.1;};
};


#endif // LOAIB_H_INCLUDED
