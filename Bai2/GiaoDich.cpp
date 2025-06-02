#include "GiaoDich.h"

void GiaoDich::Nhap(){
    cout << "Nhap ma giao dich: ";
    cin >> MGD;
    cout << "Nhap ngay giao dich: ";
    cin >> d >> m >> y;
    cout << "Nhap don gia: ";
    cin >> DonGia;
    cout << "Nhap vao so dien tich: ";
    cin >> DienTich;
}
void GiaoDich::Xuat(){
    cout << MGD << '\t' << d << "/" << m << "/" << y << '\t' << DonGia << '\t' << DienTich << '\t';
}

