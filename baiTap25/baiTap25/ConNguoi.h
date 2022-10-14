//
//  ConNguoi.h
//  baiTap25
//
//  Created by Finch on 2022/10/14.
//

#ifndef ConNguoi_h
#define ConNguoi_h
#pragma once

#include "Header.h"
#include <string>

class ConNguoi
{
private:
    string hoTen;
    int tuoi;
    string quocTich;

public:
    void set();
    void setHoTen();
    void setTuoi();
    void setQuocTich(string _quocTich);

public:
    string getHoTen();
    int getTuoi();
    string getQuocTich();
};

#endif /* ConNguoi_h */
