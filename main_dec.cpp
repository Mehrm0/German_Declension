#include<iostream>
//#include<cstdio>
#include<string>
#include"ohne_artikel.h"

int main()
{


char choice1; //variable to choose the exam.
char choice2; //variable to choose the end of the programm.
puts("===================================================");
puts("WELLECOME TO GERMAN GRAMMAR,PLEASE CHOOSE AN OPTION");
puts("===================================================");

puts("a)Declination of adjectives without article.");
puts("b)Declination of adjectives with definite article.");
puts("d)Declination of adjectives with indefinite article.");
std::cin>>choice1; 
switch(choice1)
          {
  case 'a' : without_adj();break;
default  : puts("It's not available yet, coming soon.");exit(0);break;
         }           

//without_adj();

puts("Choose an option");
puts("a)Repeat");
puts("b)Exit");

std:: cin >> choice2;

switch(choice2){

case 'a' :without_adj();break;
case 'b' :exit(0);break;
             }

return 0;
}






