#include "NhanVien.h"

void NhanVien::Nhap(){
    cout << "Nhap ten nhan vien: ";
    getline(cin,Ten);
    cout << "Nhap ngay sinh: ";
    cin >> d >> m >> y;
}

void NhanVien::Xuat(){
    cout << Ten << '\t' << d << "/" << m << "/" << y << '\t';
}
