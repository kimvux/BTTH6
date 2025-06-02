#include "CanHoChungCu.h"

void CanHoChungCu::Nhap(){
    this->GiaoDich::Nhap();
    cout << "Nhap ma can ho: ";
    cin >> MaCanHo;
    cout << "Nhap vi tri tang: ";
    cin >> ViTriTang;
}
void CanHoChungCu::Xuat(){
    this->GiaoDich::Xuat();
    cout << MaCanHo << '\t' << ViTriTang;
}
double CanHoChungCu::ThanhTien(){
    if (ViTriTang == 1) return DienTich*DonGia*2;
    if (ViTriTang >= 15) return DienTich*DonGia*1.2;
    return DienTich*DonGia;
}
