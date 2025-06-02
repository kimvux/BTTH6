#ifndef TESTER_H_INCLUDED
#define TESTER_H_INCLUDED
#include "NhanVien.h"

class Tester : public NhanVien {
private:
    int SoLoiPhatHien;
public:
    void Nhap();
    void Xuat();
    double Luong();
    int getLoai(){return 2;};
};


#endif // TESTER_H_INCLUDED
