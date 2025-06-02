#include "VanPhong.h"

void VanPhong::Nhap(){
    this->NhanVien::Nhap();
    cout << "Nhap so ngay lam viec: ";
    cin >> SoNgayLamViec;
}
void VanPhong::Xuat(){
    this->NhanVien::Xuat();
    cout << fixed << setprecision(0) << this->Luong();
}
double VanPhong::Luong(){
    return SoNgayLamViec*100000;
}
