/*
 *    dcf_7219_4digit_matrix.h - A library for use MAX7219/MAX7221 as dcf77-Clock
 *    Copyright (c) 2022 Andreas Radünzel
 */

#ifndef dcf_7219_4digit_matrix_h
#define dcf_7219_4digit_matrix_h
#include <Arduino.h>


/*
 * internal Clock
 * 
 */

  class internal_clock {
  {
  private:
    /* data */
    unsigned char 
              sec_;
              hour_zehner_;
              hour_;
              min_zehner_;
              minute_;

  public:
    internal_clock (unsigned char, unsigned char, unsigned char, unsigned char); //Konstruktur
    void count_up_the_clock ();
  
  


#endif	//dcf_7219_4digit_matrix.h



