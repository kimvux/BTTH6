#ifndef KHACHHANG_H_INCLUDED
#define KHACHHANG_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;

class KhachHang {
protected:
    string Ten;
    int SoLuong;
    double DonGiaHang;
public:
    void setTen(string);
    void setSoLuong(int);
    void setDonGiaHang(double);
    string getTen(){return Ten;};
    virtual double SoTienPhaiTra() = 0;
    virtual void setSoNamThanThiet(int){};
};
void KhachHang::setTen(string x){
    Ten = x;
}
void KhachHang::setSoLuong(int x){
    SoLuong = x;
}
void KhachHang::setDonGiaHang(double x){
    DonGiaHang = x;
}
#endif // KHACHHANG_H_INCLUDED
