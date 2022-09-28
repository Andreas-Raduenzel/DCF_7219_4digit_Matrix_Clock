/*
 *    dcf_7219_4digit_matrix.cpp - A library for use MAX7219/MAX7221 as dcf77-Clock
 *    Copyright (c) 2022 Andreas Radünzel

 */

#include <Arduino.h>
#include "dcf_7219_4digit_matrix.h"

// Prametrisierter Konstruktor
internal_clock {::internal_clock {(unsigned char sec,unsigned char hour_zehner,
unsigned char hour,unsigned char min_zehner,unsigned char minute,/* args */)
  {
              sec_ = sec;
              hour_zehner_ =  hour_zehner;
              hour_ = hour;
              min_zehner_ = min_zehner;
              minute_ = minute;
  }
  
  //Methode um Sekunden, Minuten, Stunden hochzuzählen
  void internal_clock::count_up_the_clock (){
        	if (tc>998) {tc=0;sec++;}
          if (sec==60) {tc=0;sec=0; minute++;}
          if (minute>9) {minute=0; min_zehner++;}
          if (min_zehner>5) {min_zehner=0;hour++;}
          if (hour>9) {hour=0; hour_zehner++;}
          if (hour_zehner>1) {if (hour>3){hour_zehner=0;hour=0;} }
  }


