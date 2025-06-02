#include "QuanLy.h"
using namespace std;

int main(){
    QuanLy a;
    a.Nhap();
    cout << "\n====================================================\n";
    cout << "                 Danh sach nhan vien                \n";
    a.Xuat();
    cout << "\n====================================================\n";
    a.TongLuong();
    cout << "\n====================================================\n";
    cout << "Nhan vien san xuat co luong thao nhat:\n";
    a.NVSXLuongThapNhat();
    cout << "\n====================================================\n";
    cout << "Nhan vien van phong co tuoi cao nhat:\n";
    a.NVVPTuoiCaoNhat();

    return 0;
}
