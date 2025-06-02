#include "QuanLy.h"

void QuanLy::Nhap(){
    cout << "Nhap so nhan vien: ";
    cin >> sonhanvien;
    for (int i=0 ; i<sonhanvien ; ++i){
        cout << "\n1.Nhan vien San Xuat\n";
        cout << "2.Nhan vien Van Phong\n";
        cout << "Moi ban chon: ";
        int pick;
        cin >> pick;
        cin.ignore();
        if (pick == 1){
            nv[i] = new SanXuat;
            nv[i]->Nhap();
        }
        else{
            nv[i] = new VanPhong;
            nv[i]->Nhap();
        }
    }
}
void QuanLy::Xuat(){
    if (sonhanvien == 0)
        cout << "Danh sach nhan vien trong\n";
    for (int i=0 ; i<sonhanvien ; ++i){
        nv[i]->Xuat();
        cout << endl;
    }
}
void QuanLy::TongLuong(){
    double sum = 0;
    for (int i=0 ; i<sonhanvien ; ++i)
        sum += nv[i]->Luong();
    cout << "Tong luong cong ty phai tra cho nhan vien: " << fixed << setprecision(0) << sum << endl;
}
void QuanLy::NVSXLuongThapNhat(){
    int i;
    for(i=0 ; i<sonhanvien ; ++i){
        if (nv[i]->getLoai() == 1)
        break;
    }
    if (i == sonhanvien){
        cout << "Khong co nhan vien San Xuat\n";
        return;
    }
    double minLuong = nv[i]->Luong();
    for (int j=i+1 ; j<sonhanvien ; ++j){
        if (nv[j]->Luong() < minLuong && nv[j]->getLoai() == 1){
            minLuong = nv[j]->Luong();
            i = j;
        }
    }
    nv[i]->Xuat();
    cout << endl << "So luong: " << fixed << setprecision(0) << minLuong << endl;
}
void QuanLy::NVVPTuoiCaoNhat(){
    int i;
    for(i=0 ; i<sonhanvien ; ++i){
        if (nv[i]->getLoai() == 2)
        break;
    }
    if (i == sonhanvien){
        cout << "Khong co nhan vien Van Phong\n";
        return;
    }
    double maxTuoi = nv[i]->getY();
    for (int j=i+1 ; j<sonhanvien ; ++j){
        if (nv[j]->getY() > maxTuoi && nv[j]->getLoai() == 2){
            maxTuoi = nv[j]->getY();
            i = j;
        }
    }
    nv[i]->Xuat();
    cout << endl << "Sinh nam: " << maxTuoi << endl;
}
