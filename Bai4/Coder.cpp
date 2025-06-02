#include "Coder.h"

void Coder::Nhap(){
    NhanVien::Nhap();
    cout << "Nhap so gio overtime: ";
    cin >> SoGioOverTime;
}
void Coder::Xuat(){
    NhanVien::Xuat();
    cout << SoGioOverTime << endl;
}
double Coder::Luong(){
    return LuongCoBan + SoGioOverTime * 200000;
}
