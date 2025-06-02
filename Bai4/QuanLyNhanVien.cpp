#include "QuanLyNhanVien.h"

void QuanLyNhanVien::Nhap(){
    cout << "Nhap so nhan vien: ";
    int x;
    cin >> x;
    for (int i=0 ; i<x ; ++i){
        cout << "1.Lap trinh vien\n";
        cout << "2.Kiem chung vien\n";
        cout << "Moi ban chon: ";
        int pick;
        cin >> pick;
        if (pick == 1){
            NhanVien* a;
            a = new Coder;
            a->Nhap();
            nv.push_back(a);
        }
        else{
            NhanVien* a;
            a = new Tester;
            a->Nhap();
            nv.push_back(a);
        }
    }
}
void QuanLyNhanVien::Xuat(){
    cout << "\n===================================================\n";
    if (nv.empty()){
        cout << "Danh sach nhan vien trong\n";
        return;
    }
    int count = 0;
    cout << "Lap trinh vien:\n";
    for (unsigned long long i=0 ; i<nv.size() ; ++i){
        if (nv[i]->getLoai() == 1){
            nv[i]->Xuat();
            count++;
        }
    }
    if (count == 0)
        cout << "Khong co lap trinh vien trong danh sach...\n";

    count = 0;
    cout << "Kiem chung vien:\n";
    for (unsigned long long i=0 ; i<nv.size() ; ++i){
        if (nv[i]->getLoai() == 2){
            nv[i]->Xuat();
            count++;
        }
    }
    if (count == 0)
        cout << "Khong co kiem chung vien trong danh sach...\n";
}
void QuanLyNhanVien::ListNVcoLuongThapHonAVG(){
    cout << "\n===================================================\n";
    if (nv.empty()){
        cout << "Danh sach nhan vien trong\n";
        return;
    }
    double AVG = 0;
    for (unsigned long long i=0 ; i<nv.size() ; ++i){
        AVG += nv[i]->Luong();
    }
    AVG /= nv.size();

    int count = 0;
    cout << "Lap trinh vien co luong thap hon trung binh luong:\n";
    for (unsigned long long i=0 ; i<nv.size() ; ++i){
        if (nv[i]->getLoai() == 1 && nv[i]->Luong() < AVG){
            nv[i]->Xuat();
            count++;
        }
    }
    if (count == 0)
        cout << "Khong co ket qua nao...\n";

    count = 0;
    cout << "Kiem chung vien co luong thap hon trung binh luong:\n";
    for (unsigned long long i=0 ; i<nv.size() ; ++i){
        if (nv[i]->getLoai() == 2 && nv[i]->Luong() < AVG){
            nv[i]->Xuat();
            count++;
        }
    }
    if (count == 0)
        cout << "Khong co ket qua nao...\n";
}
void QuanLyNhanVien::NVcoLuongCaoNhat(){
    cout << "\n===================================================\n";
    if (nv.empty()){
        cout << "Danh sach nhan vien trong\n";
        return;
    }
    double maxLuong = -1;
    int pos = -1;
    for (unsigned long long i=0 ; i<nv.size() ; ++i){
        if (nv[i]->Luong() > maxLuong){
            maxLuong = nv[i]->Luong();
            pos = i;
        }
    }
    cout << "Nhan vien co luong cao nhat:\n";
    nv[pos]->Xuat();
}
void QuanLyNhanVien::NVcoLuongThapNhat(){
    cout << "\n===================================================\n";
    if (nv.empty()){
        cout << "Danh sach nhan vien trong\n";
        return;
    }
    double minLuong = 1e9;
    int pos = -1;
    for (unsigned long long i=0 ; i<nv.size() ; ++i){
        if (nv[i]->Luong() < minLuong){
            minLuong = nv[i]->Luong();
            pos = i;
        }
    }
    cout << "Nhan vien co luong thap nhat:\n";
    nv[pos]->Xuat();
}
void QuanLyNhanVien::CoderCoLuongCaoNhat(){
    cout << "\n===================================================\n";
    if (nv.empty()){
        cout << "Danh sach nhan vien trong\n";
        return;
    }
    double maxLuong = -1;
    int pos = -1;
    for (unsigned long long i=0 ; i<nv.size() ; ++i){
        if (nv[i]->getLoai() == 1 && nv[i]->Luong() > maxLuong){
            maxLuong = nv[i]->Luong();
            pos = i;
        }
    }
    cout << "Lap trinh vien co luong cao nhat:\n";
    if (pos == -1){
        cout << "Khong co lap trinh vien trong danh sach...\n";
        return;
    }
    nv[pos]->Xuat();
}
void QuanLyNhanVien::TesterCoLuongThapNhat(){
    cout << "\n===================================================\n";
    if (nv.empty()){
        cout << "Danh sach nhan vien trong\n";
        return;
    }
    double minLuong = 1e9;
    int pos = -1;
    for (unsigned long long i=0 ; i<nv.size() ; ++i){
        if (nv[i]->getLoai() == 2 && nv[i]->Luong() < minLuong){
            minLuong = nv[i]->Luong();
            pos = i;
        }
    }
    cout << "Kiem chung vien co luong thap nhat:\n";
    if (pos == -1){
        cout << "Khong co kiem chung vien trong danh sach...\n";
        return;
    }
    nv[pos]->Xuat();
}
