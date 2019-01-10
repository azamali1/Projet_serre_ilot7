/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueSerre.cpp
 * Author: snir2g2
 *
 * Created on 10 janvier 2019, 16:48
 */

#include "VueSerre.h"

VueSerre::VueSerre() {
    widget.setupUi(this);
   
}
void VueSerre::mettreAjour(){
    widget.hygrometrie->setText("1");
    widget.luminosite->setText("2");
    widget.temperature->setText("4");
    widget.positionOuvrants->setText("25");
}

VueSerre::~VueSerre() {
}
