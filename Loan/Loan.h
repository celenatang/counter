/*
 * Loan.h - Library for calculating your student loan.
 * Created by Celena Tang, April 16, 2016.
 */

#ifndef Loan_h
#define Loan_h

#include "Arduino.h"
#include "Time.h"

class Loan {
 
 public: 

    Loan (float a, float r, tmElements_t d);
   void calculate();
   void printdebt();
    float GetPrincipal();
    float GetInterest();
    float GetDebt();
    float GetDays();
    tmElements_t GetDisbursement();
 
 private:
    float _amount;
    float _rate;
    tmElements_t _disbursement;

    tmElements_t _today;
    
    time_t _todaysec;
    time_t _disbursec;
    time_t _difference;
    int _days;

    float _interestfactor;
    float _interest;
    float _debt;
    
    
  
};

#endif
