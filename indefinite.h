/*Adjective declension, type 2, without article;.*/
class ques2
{
private:
 std::string  ans;

public: 

std::string  get;
bool res;
int note;
void setAns(std::string  a)
  {
ans=a;
  }

std::string getAns()
  {
return ans;
  }

};
/***************************************************************************************/
extern int indefinite()
{
int total_score;
char choice;

ques2 q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15,q16,q17,q18,q19,q20;

puts("===========================================================");
puts("Declension of Adjectives,Type 3, with  Indefinite Article. ");
puts("===========================================================");
puts("Hint: signs  in the bracket represent case, number, gender respectively.");

/*******************************************************/
/*1*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");

q1.setAns("er");


std::cout<<"1)ein rot...Stein.[N.S.M]\n";
std::cin >> q1.get;
if(q1.getAns().compare(q1.get)==0)
    {
    q1.res=true;
    }
else
   {
    q1.res=false;
   }
/*****************************************************/
switch(q1.res)
{
case true :   q1.note=5;break;
case false:   q1.note=0;break;
}
/*****************************************************/
(q1.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q1.getAns()<<std::endl;
/******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note<<" out\
of 5"<<std::endl;

/*******************************************************/
/*2*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q2.setAns("en");


std::cout<<"2)einen rot...Stein.[A.S.M]\n";
std::cin >> q2.get;
if(q2.getAns().compare(q2.get)==0)
    {
    q2.res=true;
    }
else
   {
    q2.res=false;
   }
/*****************************************************/
switch(q2.res)
{
case true :   q2.note=5;break;
case false:   q2.note=0;break;
}
/*****************************************************/
(q1.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q2.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note<<" out of 10"<<std::endl
;

/*******************************************************/
/*3*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q3.setAns("en");


std::cout<<"3)einem rot...Stein[D.S.M].\n";
std::cin >> q3.get;
if(q3.getAns().compare(q3.get)==0)
    {
    q3.res=true;
    }
else
   {
    q3.res=false;
   }
/*****************************************************/
switch(q3.res)
{
case true :   q3.note=5;break;
case false:   q3.note=0;break;
}
/*****************************************************/
(q1.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q3.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+q3.note<<" out of 15"<<std::endl
;

/*******************************************************/
/*4*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q4.setAns("en");


std::cout<<"4)eines rot...Steines.[G.S.M]\n";
std::cin >> q4.get;
if(q4.getAns().compare(q4.get)==0)
    {
    q4.res=true;
    }
else
   {
    q4.res=false;
   }
/*****************************************************/
switch(q4.res)
{
case true :   q4.note=5;break;
case false:   q4.note=0;break;
}
/*****************************************************/
(q1.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q4.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+q3.note+q4.note<<" out of 20"<<std::endl
;

/*******************************************************/
/*5*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q5.setAns("es");


std::cout<<"5)ein hell...Licht.[N.S.N]\n";
std::cin >> q5.get;
if(q5.getAns().compare(q5.get)==0)
    {
    q5.res=true;
    }
else
   {
    q5.res=false;
   }
/*****************************************************/
switch(q5.res)
{
case true :   q5.note=5;break;
case false:   q5.note=0;break;
}
/*****************************************************/
(q5.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q5.getAns()<<std::endl;
/*******************************************************/
std::cout <<"Your note until now is:\n"<< q1.note+ q2.note+q3.note+
q4.note+q5.note<<" out of 25"<<std::endl;

/*******************************************************/
/*6*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q6.setAns("es");


std::cout<<"6)ein hell...Licht.[A.S.N]\n";
std::cin >> q6.get;
if(q6.getAns().compare(q6.get)==0)
    {
    q6.res=true;
    }
else
   {
    q6.res=false;
   }
/*****************************************************/
switch(q6.res)
{
case true :   q6.note=5;break;
case false:   q6.note=0;break;
}
/*****************************************************/
(q6.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q6.getAns()<<std::endl;
/*******************************************************/
std::cout <<"Your note until now is:\n"<< q1.note+ q2.note+q3.note+
q4.note+ q5.note+q6.note<<" out of 30"<<std::endl;

/*******************************************************/
/*7*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q7.setAns("en");


std::cout<<"7)einem hell...Licht.[D.S.N]\n";
std::cin >> q7.get;
if(q7.getAns().compare(q7.get)==0)
    {
    q7.res=true;
    }
else
   {
    q7.res=false;
   }
/*****************************************************/
switch(q7.res)
{
case true :   q7.note=5;break;
case false:   q7.note=0;break;
}
/*****************************************************/
(q7.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q7.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+ q3.note+q4.note+q5.note+ q6.note+q7.note+q8.note<<" out of 35"<<std::endl;


/*******************************************************/
/*8*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q8.setAns("en");


std::cout<<"8)eines hell...Licht.[G.S.N]\n";
std::cin >> q8.get;
if(q8.getAns().compare(q8.get)==0)
    {
    q8.res=true;
    }
else
   {
    q8.res=false;
   }
/*****************************************************/
switch(q8.res)
{
case true :   q8.note=5;break;
case false:   q8.note=0;break;
}
/*****************************************************/
(q8.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q8.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+ q2.note+q3.note+ q4.note+q5.note+q6.note+ q7.note+q8.note<<" out of 40"<<std::endl
;


/*******************************************************/
/*9*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q9.setAns("e");


std::cout<<"9)eine klar...Luft.[N.S.F]\n";
std::cin >> q9.get;
if(q9.getAns().compare(q9.get)==0)
    {
    q9.res=true;
    }
else
   {
    q9.res=false;
   }
/*****************************************************/
switch(q9.res)
{
case true :   q9.note=5;break;
case false:   q9.note=0;break;
}
/*****************************************************/
(q9.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q9.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+ q3.note+q4.note+ q5.note+q6.note+q7.note+ q8.note+q9.note<<" out of 45"<<std::endl;


/*******************************************************/
/*10*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q10.setAns("e");


std::cout<<"10)eine klar...Luft.[A.S.F]\n";
std::cin >> q10.get;
if(q10.getAns().compare(q10.get)==0)
    {
    q10.res=true;
    }
else
   {
    q10.res=false;
   }
/*****************************************************/
switch(q10.res)
{
case true :   q10.note=5;break;
case false:   q10.note=0;break;
}
/*****************************************************/
(q10.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q10.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+q3.note+ q4.note+q5.note+ q6.note+q7.note+q8.note+ q9.note+q10.note<<" out of 50"<<std::endl;


/*******************************************************/
/*11*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q11.setAns("en");


std::cout<<"11)einer klar...Luft.[D.S.F]\n";
std::cin >> q11.get;
if(q11.getAns().compare(q11.get)==0)
    {
    q11.res=true;
    }
else
   {
    q11.res=false;
   }
/*****************************************************/
switch(q11.res)
{
case true :   q11.note=5;break;
case false:   q11.note=0;break;
}
/*****************************************************/
(q11.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q11.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+q3.note+ q4.note+q5.note+ q6.note+q7.note+q8.note+ q9.note+q10.note+q11.note<<" out of 55"<<std::endl;


/*******************************************************/
/*12*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q12.setAns("en");


std::cout<<"12)einer klar...Luft.[G.S.F]\n";
std::cin >> q12.get;
if(q12.getAns().compare(q12.get)==0)
    {
    q12.res=true;
    }
else
   {
    q12.res=false;
   }
/*************************************************************/
switch(q12.res)
{
case true :   q12.note=5;break;
case false:   q12.note=0;break;
}
/************************************************************/
(q12.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q12.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+q3.note+q4.note+ q5.note+q6.note+ q7.note+q8.note+q9.note+ q10.note+q11.note+q12.note<<" out of 60"<<std::endl;


/*******************************************************/
/*13*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q13.setAns("e");


std::cout<<"13)--rund...Formen.[N.P.-]\n";
std::cin >> q13.get;
if(q13.getAns().compare(q13.get)==0)
    {
    q13.res=true;
    }
else
   {
    q13.res=false;
   }
/*****************************************************/
switch(q13.res)
{
case true :   q13.note=5;break;
case false:   q13.note=0;break;
}
/*****************************************************/
(q13.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q13.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note <<" out of 65"<<std::endl;


/*******************************************************/
/*14*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q14.setAns("e");


std::cout<<"14)--rund...Formen[A.P.-]\n";
std::cin >> q14.get;
if(q14.getAns().compare(q14.get)==0)
    {
    q14.res=true;
    }
else
   {
    q14.res=false;
   }
/*****************************************************/
switch(q14.res)
{
case true :   q14.note=5;break;
case false:   q14.note=0;break;
}
/*****************************************************/
(q14.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q14.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note<<" out of 70"<<std::endl;


/*******************************************************/
/*15*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q15.setAns("en");


std::cout<<"15)--rund...Formen[D.P.-].\n";
std::cin >> q15.get;
if(q15.getAns().compare(q15.get)==0)
    {
    q15.res=true;
    }
else
   {
    q15.res=false;
   }
/*****************************************************/
switch(q15.res)
{
case true :   q15.note=5;break;
case false:   q15.note=0;break;
}
/*****************************************************/
(q15.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q15.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note<<" out of 75"<<std::endl;


/*******************************************************/
/*16*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q16.setAns("er");


std::cout<<"16)--runde...Formen[G.P.-].\n";
std::cin >> q16.get;
if(q16.getAns().compare(q16.get)==0)
    {
    q16.res=true;
    }
else
   {
    q16.res=false;
   }
/*****************************************************/
switch(q16.res)
{
case true :   q16.note=5;break;
case false:   q16.note=0;break;
}
/*****************************************************/
(q16.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q16.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note<<" out of 80"<<std::endl
;

/*******************************************************/
/*17*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q17.setAns("en");


std::cout<<"17)einer klar....Luft[G.S.F]\n";
std::cin >> q17.get;
if(q17.getAns().compare(q17.get)==0)
    {
    q17.res=true;
    }
else
   {
    q17.res=false;
   }
/*****************************************************/
switch(q17.res)
{
case true :   q17.note=5;break;
case false:   q17.note=0;break;
}
/*****************************************************/
(q17.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q17.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note<<" out of 85"<<std::endl;

/*******************************************************/
/*18*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q18.setAns("en");


std::cout<<"18)einer klar....Luft[D.S.F]\n";
std::cin >> q18.get;
if(q18.getAns().compare(q18.get)==0)
    {
    q18.res=true;
    }
else
   {
    q18.res=false;
   }
/*****************************************************/
switch(q18.res)
{
case true :   q18.note=5;break;
case false:   q18.note=0;break;
}
/*****************************************************/
(q18.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q18.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note + q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note<<" out of 90"<<std::endl
;
/*******************************************************
* /*19*/  
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q19.setAns("e");


std::cout<<"19)--rund....Formen[N.P.-]\n";
std::cin >> q19.get;
if(q19.getAns().compare(q19.get)==0)
    {
    q19.res=true;
    }
else
   {
    q19.res=false;
   }
/*****************************************************/
switch(q19.res)
{
case true :   q19.note=5;break;
case false:   q19.note=0;break;
}
/*****************************************************/
(q19.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q19.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note<<" out of 95"<<std::endl;

/*******************************************************/
/*20*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q20.setAns("en");


std::cout<<"20)einer klar....Luft[D.S.F]\n";
std::cin >> q20.get;
if(q20.getAns().compare(q20.get)==0)
    {
    q20.res=true;
    }
else
   {
    q20.res=false;
   }
/*****************************************************/
switch(q20.res)
{
case true :   q20.note=5;break;
case false:   q20.note=0;break;
}
/*****************************************************/
(q20.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q20.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note<<" out of 100"<<std::endl;

/********************************************************************
*                       Total Score
********************************************************************/

puts("=========================================================");
                   puts( "Your Total Score");                                           
puts("=========================================================");
total_score=q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ 
q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note;

std::cout<<"Your total score is"<< total_score <<" out of 100\n";
puts("=========================================================");
puts("=========================================================");

return 0; 
}











