#include "QuanLyGiaoDich.h"

void QuanLyGiaoDich::Nhap(){
    cout << "Nhap so luong giao dich: ";
    cin >> sogiaodich;
    for (int i=0 ; i<sogiaodich ; ++i){
        cout << "\n===================================\n";
        cout << "1.Giao dich Dat\n";
        cout << "2.Giao dich Nha Pho\n";
        cout << "3.Giao dich Can Ho Chung Cu\n";
        cout << "Moi ban chon: ";
        int pick;
        cin >> pick;
        if(pick == 1){
            GiaoDich *a;
            a = new Dat;
            a->Nhap();
            gd.push_back(a);
            dat++;
        }
        else if(pick == 2){
            GiaoDich *a;
            a = new NhaPho;
            a->Nhap();
            gd.push_back(a);
            nhapho++;
        }
        else{
            GiaoDich *a;
            a = new CanHoChungCu;
            a->Nhap();
            gd.push_back(a);
            chungcu++;
        }
    }
}
void QuanLyGiaoDich::Xuat(){
    cout << "\n===================================================\n";
    if (sogiaodich == 0){
        cout << "Danh sach giao dich trong...\n";
        return;
    }
    cout << "Danh sach giao dich Dat:\n";
    if (dat == 0)
        cout << "Khong co giao dich Dat trong danh sach...\n";
    for (int i=0 ; i<sogiaodich ; ++i){
        if (gd[i]->getLoai() == 1){
            gd[i]->Xuat();
            cout << endl;
        }
    }

    cout << "Danh sach giao dich Nha Pho:\n";
    if (nhapho == 0)
        cout << "Khong co giao dich Nha Pho trong danh sach...\n";
    for (int i=0 ; i<sogiaodich ; ++i){
        if (gd[i]->getLoai() == 2){
            gd[i]->Xuat();
            cout << endl;
        }
    }

    cout << "Danh sach giao dich Can Ho Chung Cu:\n";
    if (chungcu == 0)
        cout << "Khong co giao dich Can Ho Chung Cu trong danh sach...\n";
    for (int i=0 ; i<sogiaodich ; ++i){
        if (gd[i]->getLoai() == 3){
            gd[i]->Xuat();
            cout << endl;
        }
    }
}
void QuanLyGiaoDich::SoLuongTungLoai(){
    cout << "\n===================================================\n";
    cout << "So luong giao dich Dat: " << dat << endl;
    cout << "So luong giao dich Nha Pho: " << nhapho << endl;
    cout << "So luong giao dich Can Ho Chung Cu: " << chungcu << endl;
}
void QuanLyGiaoDich::TrungBinhThanhTienCanHoChungCu(){
    cout << "\n===================================================\n";
    if (chungcu == 0){
        cout << "Danh sach giao dich Can Ho Chung Cu trong...\n";
        return;
    }
    double sum = 0;
    for (int i=0 ; i<sogiaodich ; ++i)
        sum += gd[i]->ThanhTien();
    cout << "Trung binh thanh tien cua giao dich Can Ho Chung Cu: " << fixed << setprecision(0) << sum/sogiaodich << endl;
}
void QuanLyGiaoDich::ThanhTienNhaPhoCaoNhat(){
    cout << "\n===================================================\n";
    if (nhapho == 0){
        cout << "Danh sach giao dich Nha Pho trong...\n";
        return;
    }
    double maxNhaPho = 0;
    int pos = -1;
    for (int i=0 ; i<sogiaodich ; ++i){
        if (gd[i]->ThanhTien() > maxNhaPho){
            maxNhaPho = gd[i]->ThanhTien();
            pos = i;
        }
    }
    cout << "Giao dich Nha Pho co gia tri cao nhat:\n";
    gd[pos]->Xuat();
    cout << "\nThanh tien: " << fixed << setprecision(0) << maxNhaPho << endl;
}
void QuanLyGiaoDich::ListGiaoDich12_2024(){
    cout << "\n===================================================\n";
    if (sogiaodich == 0){
        cout << "Danh sach giao dich trong...\n";
        return;
    }
    int count = 0;
    cout << "Danh sach giao dich thang 12/2024:\n";
    for (int i=0 ; i<sogiaodich ; ++i){
        if (gd[i]->getM() == 12 && gd[i]->getY() == 2024){
            gd[i]->Xuat();
            cout << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "Khong co giao dich trong thang 12/2024\n";
}
