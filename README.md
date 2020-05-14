# counter
A simple Arduino library and program to calculate your student loan debt and output the $amount to an LCD

About
This code was written in April 2016 and will definitely need some updates. 
I wrote this a while ago for a project called Counter. It was a practice and a reflection of deciphering one’s multiple government student loans from multiple loan servicers and getting the aggregate amount owed - accurate to the second. The library was written with the intention to help simplify the calculation and be shared openly for any pour soul to use. For this particular iteration, the Arduino program and LCD was housed in an installation exhibited as a hope to break the taboo ice about student debt. Let's talk about that "student-loan-debt-crisis"! 

The Code
Please forgive some of the code and calculations - I know it can be a lot more efficient! I'll make some needed updates as we go along. Figure I'd share this now rather then even later, hope this could be useful for anyone out there with an exorbitant student debt.


Get Started
- "Loan" - a custom C++ Arduino library I wrote to simplify the loan calculation. This library needs to be imported to run 
- "my_debt" is the Arduino file to run your student loan calculations and print it out to an LCD

Note, this uses
- Arduino Time library: to get today's date and calculate time between two dates
- LiquidCrystal library: to establish a connection to an LCD module and send a printout of your calculated debt

Cheers!
C