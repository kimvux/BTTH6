#include "SinhVien.h"

void SinhVien::Nhap(){
    cout << "Nhap ma so sinh vien: ";
    cin >> MSSV;
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin,HoTen);
    cout << "Nhap dia chi: ";
    getline(cin,DiaChi);
    cout << "Nhap so tin chi: ";
    cin >> TongSoTinChi;
    cout << "Nhap diem trung binh: ";
    cin >> DiemTrungBinh;
}
void SinhVien::Xuat(){
     cout << MSSV << '\t' << HoTen << '\t' << DiaChi << '\t' << TongSoTinChi << '\t' << DiemTrungBinh << '\t';
}
