#ifndef LOAIA_H_INCLUDED
#define LOAIA_H_INCLUDED
#include "KhachHang.h"

class LoaiA : public KhachHang {
public:
    double SoTienPhaiTra(){return SoLuong*DonGiaHang*1.1;};
};


#endif // LOAIA_H_INCLUDED
