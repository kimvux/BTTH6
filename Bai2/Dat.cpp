#include "Dat.h"

void Dat::Nhap(){
    this->GiaoDich::Nhap();
    cout << "Nhap loai dat:\n";
    cout << "1. A\n";
    cout << "2. B\n";
    cout << "3. C\n";
    cin >> LoaiDat;
}
void Dat::Xuat(){
    this->GiaoDich::Xuat();
    if (LoaiDat == 1)
        cout << "A" << '\t' << DienTich;
    else if (LoaiDat == 2)
        cout << "B" << '\t' << DienTich;
    else
        cout << "C" << '\t' << DienTich;
}
double Dat::ThanhTien(){
    if (LoaiDat == 1) return DienTich*DonGia*1.5;
    return DienTich*DonGia;
}
