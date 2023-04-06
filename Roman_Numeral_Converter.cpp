/* 
Write a C++ program to convert a given integer to a roman numeral.
From Wikipedia:
Roman numerals are a numeral system that originated in ancient Rome and remained the usual way of writing numbers throughout Europe well into the Late Middle Ages. 
Numbers in this system are represented by combinations of letters from the Latin alphabet. 
Modern usage employs seven symbols, each with a fixed integer value:[1]
Symbol: I   V   X   L   C    D    M
Value:  1   5   10  50  100  500  1000
*/
#include <iostream>
using namespace std;
int number = 0;
int number_of_digits = 0;



int numberofdigits (int a){
    int temp = 0;
    int number2 = 0;
    number2 = number;
while(number2 != 0){
    temp = number2 / 10;
    number_of_digits = number_of_digits + 1;
    number2 = temp;
}
return number_of_digits;
}

int main(){
int units_digit = 0;
int tens_digit = 0;
int hundreds_digit = 0;
int thousands_digit = 0;
int number3 = 0;
int temp2 = 0;
int x,y,z = 0;
char romen_numerals [8] = {'I','V','X','L','C','D','M','\n'};
//                          1   5   10  50  100 500 1000      values of romen numerals
int digit_array[4] = {};
cout<<"Hello, this program will convert your numbers into Romen numerals."<<endl;
cout<<"Important warning romen numerals only up to M(1000)"<<endl;
cout<<"Biggest romen numerals we can form is 3999 therefore, do not exceed the limit."<<endl;
cout<<"Please enter a number: ";
cin>>number;
number_of_digits = numberofdigits (number); // function to calculate number of digits
cout<<"Number you entered has a "<<number_of_digits<<" digis"<<endl;
//calculating the how many digit number has
while((number > 3999) ){
    cout<<"You are exceeding the maximum limit, which romen numerals can express"<<endl;
    cout<<"Please enter a number which is smaller than 4000 or, has 4 or less digit: ";
    cin>>number;
    }
    number3 = number;
//printing the each digit individually
for(int i = 0; i < number_of_digits; i++){

    temp2 = number3 % 10; // this will take the units digit of the number then tens digit and so on
    digit_array[i] = temp2;
    number3 = number3 / 10;
}

// thousands digit
if(number_of_digits == 4) {
switch(digit_array[number_of_digits - 1]){
case 1:
cout<<romen_numerals[6];
break;

case 2:
cout<<romen_numerals[6];
cout<<romen_numerals[6];
break;

case 3:
cout<<romen_numerals[6];
cout<<romen_numerals[6];
cout<<romen_numerals[6];
break;

}
}
// hundreds digit
if((number_of_digits == 3) || (number_of_digits == 4)){
    if(number_of_digits == 3){
        x = 1;
    }
    else if(number_of_digits == 4){
        x = 2;
    }
switch(digit_array[number_of_digits - x ]){
case 1:
cout<<romen_numerals[4];
break;
case 2:
cout<<romen_numerals[4];
cout<<romen_numerals[4];
break;
case 3:
cout<<romen_numerals[4];
cout<<romen_numerals[4];
cout<<romen_numerals[4];
break;
case 4:
cout<<romen_numerals[4];
cout<<romen_numerals[5];
break;
case 5:
cout<<romen_numerals[5];
break;
case 6:
cout<<romen_numerals[5];
cout<<romen_numerals[4]; 
break;
case 7:
cout<<romen_numerals[5];
cout<<romen_numerals[4];
cout<<romen_numerals[4];
break;
case 8:
cout<<romen_numerals[5];
cout<<romen_numerals[4];
cout<<romen_numerals[4];
cout<<romen_numerals[4];
break;
case 9:
cout<<romen_numerals[4];
cout<<romen_numerals[6];
break;

}
}
// tens digit
if((number_of_digits == 3) || (number_of_digits == 4) || (number_of_digits == 2)){
    if(number_of_digits == 2){
        y = 1;
    }
    if(number_of_digits == 3){
        y = 2;
    }
    if(number_of_digits == 4){
        y = 3;
    }
switch(digit_array[number_of_digits - y]){
case 1: 
cout<<romen_numerals[2];
break;
case 2:
cout<<romen_numerals[2];
cout<<romen_numerals[2];
break;
case 3:
cout<<romen_numerals[2];
cout<<romen_numerals[2];
cout<<romen_numerals[2];
break;
case 4:
cout<<romen_numerals[2];
cout<<romen_numerals[3];
break;
case 5:
cout<<romen_numerals[3];
break;
case 6:
cout<<romen_numerals[3];
cout<<romen_numerals[2];
break;
case 7:
cout<<romen_numerals[3];
cout<<romen_numerals[2];
cout<<romen_numerals[2];
break;
case 8:
cout<<romen_numerals[3];
cout<<romen_numerals[2];
cout<<romen_numerals[2];
cout<<romen_numerals[2];
break;
case 9:
cout<<romen_numerals[2];
cout<<romen_numerals[4];
break;
}
}
// units digit
if((number_of_digits == 3) || (number_of_digits == 4) || (number_of_digits == 2) || (number_of_digits == 1)){
if(number_of_digits == 4){
    z = 4;
}
if(number_of_digits == 3){
    z = 3;
}
if(number_of_digits == 2){
    z = 2;
}
if(number_of_digits == 1){
    z = 1;
}
switch(digit_array[number_of_digits - z]) {

case 1: 
        cout<<romen_numerals[0];
   
break;
case 2: 
        cout<<romen_numerals[0];
        cout<<romen_numerals[0];
    
break;
case 3:
        cout<<romen_numerals[0];
        cout<<romen_numerals[0];
        cout<<romen_numerals[0];
  
break;
case 4: 
        cout<<romen_numerals[0];
        cout<<romen_numerals[1];
   
break;
case 5: 
        cout<<romen_numerals[1];

break;
case 6: 
        cout<<romen_numerals[1];
        cout<<romen_numerals[0];
    
break;
case 7:
        cout<<romen_numerals[1];
        cout<<romen_numerals[0];
        cout<<romen_numerals[0];
    
break;
case 8: 
        cout<<romen_numerals[1];
        cout<<romen_numerals[0];
        cout<<romen_numerals[0];
        cout<<romen_numerals[0];
    

break;
case 9: 
        cout<<romen_numerals[0];
        cout<<romen_numerals[2];
        
break;
}
}
}