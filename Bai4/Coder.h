#ifndef CODER_H_INCLUDED
#define CODER_H_INCLUDED
#include "NhanVien.h"

class Coder : public NhanVien {
private:
    int SoGioOverTime;
public:
    void Nhap();
    void Xuat();
    double Luong();
    int getLoai(){return 1;};
};

#endif // CODER_H_INCLUDED
