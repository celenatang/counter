//import the loan library, the time library and liquid crystal library to connect to your LCD module

#include <Loan.h>
#include <Time.h>
#include <LiquidCrystal.h>

//http://playground.arduino.cc/Code/Time

//"Loan" gets the values of your loan including: nameofyourloan(original amount, interest rate, date your loan was distributed);
//Loan nameofyourloan (original loan amount, interest rate, {0,0,0,0, day, month, year };

//initialize your loans here
Loan yourloan1(2000, 0.0680, {0,0,0,0,14,8,2012});
Loan yourloan2(1000, 0.0500, {0,0,0,0,15,1,2013});
Loan yourloan3(1000, 0.0500, {0,0,0,0,14,8,2014});

void setup() {
  //open up a serial connection to your arduino
  Serial.begin(9600);

  //begin a connection to your lcd
  lcd.begin(16,2);

}

void loop() {

  //calculate your loans here
  yourloan1.calculate();
  yourloan2.calculate();
  yourloan3.calculate();

  //you can do a test print here to see the debt of one of your loans
  //float debt = yourloan1.GetDebt();
  //Serial.print("Debt = $");
  //Serial.println(debt);

  //you can do a test print here to see how many days it's been since gou've received one of your loans
  //int days = yourloan1.GetDays();
  //Serial.print("Days = ");
  //Serial.println(days);

  //there's got to be a for loop I can write to simplify these:
  
  //see the total prinicpal of all your loans
  float principal = yourloan1.GetPrincipal() + yourloan2.GetPrincipal() + yourloan3.GetPrinicpal();
  
  //see how much interest you've been accruing
  float interest = yourloan1.GetInterest() + yourloan2.GetInterest() + yourloan3.GetInterest();

  //get the total debt accurate to the second!
  float thedebt = yourloan1.GetDebt() + yourloan2.GetDebt() + yourloan3.GetDebt();

  //print your debt to serial
  Serial.print("Debt = $");
  Serial.println(thedebt);
  delay(1000);

  //print your debt out to an LCD screen! 
  lcd.setCursor(1,0);
  lcd.print(thedebt);

}
