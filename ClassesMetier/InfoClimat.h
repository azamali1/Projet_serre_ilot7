/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InfoClimat.h
 * Author: snir2g2
 *
 * Created on 15 janvier 2019, 15:41
 */

#ifndef INFOCLIMAT_H
#define INFOCLIMAT_H

class InfoClimat {
public:
    int hygrometrie;
    int temperature;
    int positionOuvrants;
    int luminosite;
    int date;
    InfoClimat();
    InfoClimat(const InfoClimat& orig);
    virtual ~InfoClimat();
private:

};

#endif /* INFOCLIMAT_H */

