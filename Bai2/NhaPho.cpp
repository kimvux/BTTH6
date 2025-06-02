#include "NhaPho.h"

void NhaPho::Nhap(){
    this->GiaoDich::Nhap();
    cout << "Nhap loai nha:\n";
    cout << "1. Cao cap\n";
    cout << "2. Thuong\n";
    cin >> LoaiNha;
    cout << "Nhap dia chi nha: ";
    cin >> DiaChi;
}
void NhaPho::Xuat(){
    this->GiaoDich::Xuat();
    if (LoaiNha == 1)
        cout << "Cao cap" << '\t' << DiaChi;
    else
        cout << "Thuong" << '\t' << DiaChi;
}
double NhaPho::ThanhTien(){
    if (LoaiNha == 1) return DienTich*DonGia;
    return DienTich*DonGia*0.9;
}
