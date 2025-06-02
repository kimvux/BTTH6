#include "CaoDang.h"

void CaoDang::Nhap(){
    SinhVien::Nhap();
    cout << "Nhap diem thi tot nghiep: ";
    cin >> DiemThiTotNghiep;
}
void CaoDang::Xuat(){
    SinhVien::Xuat();
    cout << DiemThiTotNghiep;
}
bool CaoDang::TotNghiep(){
    if (TongSoTinChi>=120 && DiemTrungBinh>=5 && DiemThiTotNghiep>=5) return true;
    return false;
}
