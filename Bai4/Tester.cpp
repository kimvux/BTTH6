#include "Tester.h"

void Tester::Nhap(){
    NhanVien::Nhap();
    cout << "Nhap so loi phat hien: ";
    cin >> SoLoiPhatHien;
}
void Tester::Xuat(){
    NhanVien::Xuat();
    cout << SoLoiPhatHien << endl;
}
double Tester::Luong(){
    return LuongCoBan + SoLoiPhatHien * 50000;
}
