#include "LoaiA.h"
#include "LoaiB.h"
#include "LoaiC.h"
using namespace std;
int main(){
    int x,y,z;
    vector<KhachHang*> khach;
    string ten;
    int soluong;
    double dongia;
    int namthanthiet;

    ifstream file("XYZ_INP.txt");

    if (file.is_open()) {
        file >> x >> y >> z;
        for (int i=0 ; i<x ; ++i){
            KhachHang *a;
            a = new LoaiA;
            file.ignore();
            getline(file,ten);
            file >> soluong;
            file >> dongia;
            a->setTen(ten);
            a->setSoLuong(soluong);
            a->setDonGiaHang(dongia);
            khach.push_back(a);
        }

        for (int i=0 ; i<y ; ++i){
            KhachHang *a;
            a = new LoaiB;
            file.ignore();
            getline(file,ten);
            file >> soluong;
            file >> dongia;
            file >> namthanthiet;
            a->setTen(ten);
            a->setSoLuong(soluong);
            a->setDonGiaHang(dongia);
            a->setSoNamThanThiet(namthanthiet);
            khach.push_back(a);
        }

        for (int i=0 ; i<z ; ++i){
            KhachHang *a;
            a = new LoaiC;
            file.ignore();
            getline(file,ten);
            file >> soluong;
            file >> dongia;
            a->setTen(ten);
            a->setSoLuong(soluong);
            a->setDonGiaHang(dongia);
            khach.push_back(a);
        }
        file.close();
        cout << "Da nhap file\n";
    }
    else {
        cout << "Khong mo dc file\n";
    }

    ofstream outfile("XYZ_OUT.txt");

    double sum = 0;
    if (outfile.is_open()){
        outfile << x << " " << y << " " << z << endl;
        for (int i=0 ; i<khach.size() ; ++i){
            if (i == x || i == x+y)
                outfile << endl;
            sum += khach[i]->SoTienPhaiTra();
            outfile << khach[i]->getTen() << endl;
            outfile << khach[i]->SoTienPhaiTra() << endl;
        }
        outfile << sum;
        outfile.close();
        cout << "Da luu file\n";
    }
    else{
        cout << "Khong mo duoc file\n";
    }
    return 0;
}
