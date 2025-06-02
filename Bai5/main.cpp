#include <bits/stdc++.h>
using namespace std;

class Thu {
protected:
    int SoLuongCon = 0;
    int Sua = 0;
public:
    int getSoLuongCon(){return SoLuongCon;};
    int getSua(){return Sua;};
    virtual void Sound() = 0;
    virtual int getLoai() = 0;
};

class Bo : public Thu {
public:
    Bo();
    void Sound();
    int getLoai(){return 1;};
};
Bo::Bo(){
    SoLuongCon = rand()%101;
    Sua = rand()%20;
}
void Bo::Sound(){
    cout << "Bo..0o0o.oo ";
}

class Cuu : public Thu {
public:
    Cuu();
    void Sound();
    int getLoai(){return 2;};
};
Cuu::Cuu(){
    SoLuongCon = rand()%101;
    Sua = rand()%5;
}
void Cuu::Sound(){
    cout << "Be....eeee ";
}

class De : public Thu {
public:
    De();
    void Sound();
    int getLoai(){return 3;};
};
De::De(){
    SoLuongCon = rand()%101;
    Sua = rand()%10;
}
void De::Sound(){
    cout << "Ee....eE.eeee ";
}
int main(){
    srand(time(0));
    vector<Thu*> thu;
    cout << "Nhap so luong Bo: ";
    int x;
    cin >> x;
    for (int i=0 ; i<x ; ++i){
        Thu *a;
        a = new Bo;
        thu.push_back(a);
    }

    cout << "Nhap so luong Cuu: ";
    cin >> x;
    for (int i=0 ; i<x ; ++i){
        Thu *a;
        a = new Cuu;
        thu.push_back(a);
    }

    cout << "Nhap so luong De: ";
    cin >> x;
    for (int i=0 ; i<x ; ++i){
        Thu *a;
        a = new De;
        thu.push_back(a);
    }

    cout << "=================================\n";
    cout << "Gia su gia suc trong nong trai deu doi, thu ban nghe thay la:\n";
    for (unsigned long long i=0 ; i<thu.size() ; ++i){
        thu[i]->Sound();
    }

    cout << "\n=================================\n";
    unsigned long long sum = 0;
    for (unsigned long long i=0 ; i<thu.size() ; ++i)
        sum += thu[i]->getSua();
    int SLbocon = 0;
    int SLcuucon = 0;
    int SLdecon = 0;
    for (unsigned long long i=0 ; i<thu.size() ; ++i){
        if (thu[i]->getLoai() == 1)
            SLbocon += thu[i]->getSoLuongCon();
        else if (thu[i]->getLoai() == 2)
            SLcuucon += thu[i]->getSoLuongCon();
        else
            SLdecon += thu[i]->getSoLuongCon();
    }
    cout << "Tong luong sua cua tat ca gia suc: " << sum << " lit" << endl;
    cout << "So luong con sau 1 lua sinh cua nong trai (khong tinh so luong ban dau):\n";
    cout << "1. Bo: " << SLbocon << endl;
    cout << "2. Cuu: " << SLcuucon << endl;
    cout << "3. De: " << SLdecon << endl;
    return 0;
}
