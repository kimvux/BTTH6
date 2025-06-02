#ifndef CANHOCHUNGCU_H_INCLUDED
#define CANHOCHUNGCU_H_INCLUDED
#include "GiaoDich.h"
class CanHoChungCu : public GiaoDich {
private:
    int ViTriTang;
    string MaCanHo;
public:
    void Nhap();
    void Xuat();
    double ThanhTien();
    int getLoai(){return 3;};
};


#endif // CANHOCHUNGCU_H_INCLUDED
