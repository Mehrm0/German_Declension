#include<iostream>
//#include<cstdio>
#include<string>
#include"ohne_artikel.h"
#include"definite.h"
#include"indefinite.h"

int main()
{


char choice1; //variable to choose the exam.
char choice2; //variable to choose the end of the programm.
puts("===================================================");
puts("WELLECOME TO GERMAN GRAMMAR,PLEASE CHOOSE AN OPTION");
puts("===================================================");

puts("a)Declination of adjectives without article.");
puts("b)Declination of adjectives with definite article.");
puts("c)Declination of adjectives with indefinite article.");
puts("====================================================");
std::cin>>choice1; 
switch(choice1)
          {
  case 'a' : without_adj();break;
  case 'b' : definite();break;
  case 'c' : indefinite();break;
default  : puts("It's not available yet, coming soon.");exit(0);break;
         }           

//without_adj();

puts("Choose an option");
puts("a)Repeat");
puts("b)Exit");

std:: cin >> choice2;

switch(choice2){

case 'a' :
puts("a)Declension of adjectives without article.");
puts("b)Declension of adjectives with definite article.");
puts("c)Declension of adjectives with indefinite article.");
puts("====================================================");
std::cin>>choice1; 
switch(choice1)
          {
  case 'a' : without_adj();break;
  case 'b' : definite();break;
  case 'c' : indefinite();break;
default  : puts("It's not available yet, coming soon.");exit(0);break;
         }           
/*************************************************************************/

case 'b' :exit(0);break;
             }

return 0;
}






