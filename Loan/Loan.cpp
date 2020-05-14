/*
 * Loan.h - Library for calculating your student loan.
 * Created by Celena Tang, April 16, 2016.
 */

#include "Arduino.h"
#include "Loan.h"
#include "Time.h"

Loan::Loan (float a, float r, tmElements_t d) {

_amount = a;
 _rate = r;
 _disbursement = d;
  
}


void Loan::calculate() {
    
    //get today's date and time in seconds 
    _today = {0,30,17,0,18,4,2016};
    _todaysec = makeTime(_today);
    setTime(_todaysec);

	//get disbursement date
    _disbursec = makeTime(_disbursement);
    
    //get how many seconds its been since your the date your loan was disbursed
    _difference = _todaysec - _disbursec;
    _days = _difference /SECS_PER_DAY;
    
    
  
  _interestfactor = _rate / 365.25; 
  _interest = _amount * _days * _interestfactor;
  _debt = _amount + _interest;
  
  
}

//get disbursement date
tmElements_t Loan::GetDisbursement(){
    return _disbursement;
}

//get how many days it's been since the disbursement of your loan
float Loan::GetDays(){
    return _days;
}

//get the original amount loaned
float Loan::GetPrincipal(){
    
    return _amount;
}

//get the interest of a particular loan
float Loan::GetInterest(){
    
    return _interest;
}

//get the debt from the particular loan
float Loan::GetDebt(){
    
    return _debt;
}

//print the debt
void Loan::printdebt(){
    Serial.print("Debt = $");
    Serial.println(_debt);
    
}