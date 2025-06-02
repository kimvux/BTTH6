#include "QuanLySinhVien.h"

void QuanLySinhVien::Nhap(){
    cout << "Nhap so sinh vien: ";
    int x;
    cin >> x;
    for (int i=0 ; i<x ; ++i){
        cout << "\n=================================\n";
        cout << "1.Sinh vien Cao Dang\n";
        cout << "2.Sinh vien Dai Hoc\n";
        cout << "Moi ban chon: ";
        int pick;
        cin >> pick;
        if (pick == 1){
            SinhVien* a;
            a = new CaoDang;
            a->Nhap();
            sv.push_back(a);
            caodang++;
        }
        else {
            SinhVien* a;
            a = new DaiHoc;
            a->Nhap();
            sv.push_back(a);
            daihoc++;
        }
    }
}
void QuanLySinhVien::Xuat(){
    cout << "\n===================================================\n";
    if (caodang == 0 && daihoc == 0){
        cout << "Danh sach sinh vien trong\n";
        return;
    }
    cout << "Danh sach sinh vien:\n";
    for (unsigned long long i=0 ; i<sv.size() ; ++i){
        sv[i]->Xuat();
        cout << endl;
    }
}
void QuanLySinhVien::ListSinhVienTotNghiep(){
    cout << "\n===================================================\n";
    if (caodang == 0 && daihoc == 0){
        cout << "Danh sach sinh vien trong\n";
        return;
    }
    cout << "Danh sach cac sinh vien DU dieu kien tot nghiep:\n";
    int count = 0;
    for (unsigned long long i=0 ; i<sv.size() ; ++i){
        if (sv[i]->TotNghiep()){
            sv[i]->Xuat();
            cout << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "Khong co sinh vien nao DU dieu kien tot nghiep...\n";
}
void QuanLySinhVien::ListSinhVienKhongTotNghiep(){
    cout << "\n===================================================\n";
    if (caodang == 0 && daihoc == 0){
        cout << "Danh sach sinh vien trong\n";
        return;
    }
    cout << "Danh sach cac sinh vien KHONG DU dieu kien tot nghiep:\n";
    int count = 0;
    for (unsigned long long i=0 ; i<sv.size() ; ++i){
        if (!sv[i]->TotNghiep()){
            sv[i]->Xuat();
            cout << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "Khong co sinh vien nao KHONG DU dieu kien tot nghiep...\n";
}
void QuanLySinhVien::SinhVienDaiHocDTBCaoNhat(){
    cout << "\n===================================================\n";
    if (daihoc == 0){
        cout << "Danh sach sinh vien Dai Hoc trong\n";
        return;
    }
    double maxDTB = -1;
    int pos = -1;
    for (unsigned long long i=0 ; i<sv.size() ; ++i){
        if (sv[i]->getLoai() == 2 && sv[i]->getDTB() > maxDTB){
            pos = i;
            maxDTB = sv[i]->getDTB();
        }
    }
    cout << "Sinh vien Dai Hoc co DTB cao nhat:\n";
    sv[pos]->Xuat();
    cout << endl << "DTB: " << maxDTB << endl;
}
void QuanLySinhVien::SinhVienCaoDangDTBCaoNhat(){
    cout << "\n===================================================\n";
    if (caodang == 0){
        cout << "Danh sach sinh vien Cao Dang trong\n";
        return;
    }
    double maxDTB = -1;
    int pos = -1;
    for (unsigned long long i=0 ; i<sv.size() ; ++i){
        if (sv[i]->getLoai() == 1 && sv[i]->getDTB() > maxDTB){
            pos = i;
            maxDTB = sv[i]->getDTB();
        }
    }
    cout << "Sinh vien Cao Dang co DTB cao nhat:\n";
    sv[pos]->Xuat();
    cout << endl << "DTB: " << maxDTB << endl;
}
void QuanLySinhVien::SoLuongSVKhongTotNghiep(){
    cout << "\n===================================================\n";
    if (caodang == 0 && daihoc == 0){
        cout << "Danh sach sinh vien trong\n";
        return;
    }
    int count = 0;
    int sldaihoc=0,slcaodang=0;
    for (unsigned long long i=0 ; i<sv.size() ; ++i){
        if (!sv[i]->TotNghiep()){
            if (sv[i]->getLoai() == 1)
                slcaodang++;
            else
                sldaihoc++;
            count++;
        }
    }
    cout << "So luong sv Dai Hoc KHONG DU dieu kien tot nghiep: " << sldaihoc << endl;
    cout << "So luong sv Cao Dang KHONG DU dieu kien tot nghiep: " << slcaodang << endl;
}
