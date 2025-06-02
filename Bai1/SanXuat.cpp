#include "SanXuat.h"

void SanXuat::Nhap(){
    this->NhanVien::Nhap();
    cout << "Nhap luong can ban: ";
    cin >> LuongCanBan;
    cout << "Nhap so san pham: ";
    cin >> SoSanPham;
}
void SanXuat::Xuat(){
    this->NhanVien::Xuat();
    cout << fixed << setprecision(0) << this->Luong();
}
double SanXuat::Luong(){
    return LuongCanBan + SoSanPham*5000;
}
