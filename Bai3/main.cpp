#include "QuanLySinhVien.h"
using namespace std;

int main()
{
    QuanLySinhVien a;
    a.Nhap();
    a.Xuat();
    a.ListSinhVienTotNghiep();
    a.ListSinhVienKhongTotNghiep();
    a.SinhVienDaiHocDTBCaoNhat();
    a.SinhVienCaoDangDTBCaoNhat();
    a.SoLuongSVKhongTotNghiep();
}
