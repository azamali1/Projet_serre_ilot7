/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueSerre.h
 * Author: snir2g2
 *
 * Created on 10 janvier 2019, 16:48
 */

#ifndef _VUESERRE_H
#define _VUESERRE_H

#include "ui_VueSerre.h"

class VueSerre : public QWidget {
    Q_OBJECT
public:
    VueSerre();
    virtual ~VueSerre();
    void mettreAjour();
private:
    Ui::VueSerre widget;
};

#endif /* _VUESERRE_H */
