#include "NhanVien.h"

void NhanVien::Nhap(){
    cout << "Nhap ma NV: ";
    cin >> MaNV;
    cout << "Nhap ho va ten nhan vien: ";
    cin.ignore();
    getline(cin,HoTen);
    cout << "Nhap tuoi: ";
    cin >> Tuoi;
    cout << "Nhap so dien thoai: ";
    cin >> SDT;
    cout << "Nhap email: ";
    cin >> Email;
    cout << "Nhap luong co ban: ";
    cin >> LuongCoBan;
}
void NhanVien::Xuat(){
    cout << MaNV << "   " << HoTen << "   " << Tuoi << "   " << SDT << "   " << Email << "   " << fixed << setprecision(0) << LuongCoBan << "   ";
}
