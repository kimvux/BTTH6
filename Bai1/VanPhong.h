#ifndef VANPHONG_H_INCLUDED
#define VANPHONG_H_INCLUDED
#include "NhanVien.h"

class VanPhong : public NhanVien {
private:
    int SoNgayLamViec;
public:
    void Nhap();
    void Xuat();
    double Luong();
    int getLoai(){return 2;}
};

#endif // VANPHONG_H_INCLUDED
