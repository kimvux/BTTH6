#include "DaiHoc.h"

void DaiHoc::Nhap(){
    SinhVien::Nhap();
    cout << "Nhap ten luan van: ";
    cin.ignore();
    getline(cin,TenLuanVan);
    cout << "Nhap diem luan van: ";
    cin >> DiemLuanVan;
}
void DaiHoc::Xuat(){
    SinhVien::Xuat();
    cout << TenLuanVan << '\t' << DiemLuanVan;
}
bool DaiHoc::TotNghiep(){
    if (TongSoTinChi>=170 && DiemTrungBinh>=5 && DiemLuanVan>=5) return true;
    return false;
}
