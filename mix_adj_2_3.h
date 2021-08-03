/*Adjective declination, comparison of types 2 and 3, withou
t article and with indefinite article.*/

class ques3
{
private:
 std :: string  ans;

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
/***********************************************************
***************************/

extern int mix_adj_2_3()
{
int total_score;
char choice;


ques3 q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15,q16
,q17,q18,q19,q20,q21,q22,q23,q24,q25,q26,q27,q28,q29,q30,q31
,q32;


puts("==========================================================");
puts("Mixed Declension of Adjectives, Types 2 and 3,\n without Article and with indefinite Article.");
puts("==========================================================");


/*******************************************************/
/*1*/
/*******************************************************/

puts("=========================================================");
puts("=========================================================");

q1.setAns("er");


std::cout<<"1)rot...Stein.[N.S.M]\n";
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
case true :   q1.note=1;break;
case false:   q1.note=0;break;
}
/*****************************************************/
(q1.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q1.getAns()<<std::endl;
/******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note/1)*100 << " out of 100"<<std::endl;

/*******************************************************/
/*2*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q2.setAns("er");


std::cout<<"2)ein rot...Stein.[N.S.M]\n";
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
case true :   q2.note=1;break;
case false:   q2.note=0;break;
}
/*****************************************************/
(q1.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q2.getAns()<<std::endl;
/*******************************************************/
std::cout<<"Your note until now is:\n"<< (q1.note+q2.note)/2.0
*100<<" out of 100"<< std::endl;

/*******************************************************/
/*3*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q3.setAns("en");


std::cout<<"3)rot...Stein[A.S.M].\n";
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
case true :   q3.note=1;break;
case false:   q3.note=0;break;
}
/*****************************************************/
(q1.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q3.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note)/3.0*100<<" out of 100"<<std::endl
;

/*******************************************************/
/*4*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q4.setAns("en");


std::cout<<"4)einen rot...Stein.[A.S.M]\n";
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
case true :   q4.note=1;break;
case false:   q4.note=0;break;
}
/*****************************************************/
(q1.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q4.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note)/4.0*100<<" out of 100"<<std::endl
;

/*******************************************************/
/*5*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q5.setAns("em");


std::cout<<"5)hell...Licht.[D.S.M]\n";
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
case true :   q5.note=1;break;
case false:   q5.note=0;break;
}
/*****************************************************/
(q5.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q5.getAns()<<std::endl;
/*******************************************************/
std::cout <<"Your note until now is:\n"<< (q1.note+ q2.note+q3.note+q4.note+q5.note)/5.0*100<<" out of 100"<<std::endl;

/*******************************************************/
/*6*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q6.setAns("en");


std::cout<<"6)einem hell...Licht.[D.S.M]\n";
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
case true :   q6.note=1;break;
case false:   q6.note=0;break;
}
/*****************************************************/
(q6.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q6.getAns()<<std::endl;
/*******************************************************/
std::cout <<"Your note until now is:\n"<< (q1.note+ q2.note+q3.note+q4.note+ q5.note+q6.note)/6.0*100<<" out of 100"<<std::endl;

/*******************************************************/
/*7*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q7.setAns("en");


std::cout<<"7)hell...Lichtes.[G.S.M]\n";
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
case true :   q7.note=1;break;
case false:   q7.note=0;break;
}
/*****************************************************/
(q7.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q7.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+ q3.note+q4.note+q5.note+ q6.note+q7.note)/7.0*100<<" out of 100"<<std::endl;


/*******************************************************/
/*8*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q8.setAns("en");


std::cout<<"8)eines hell...Lichtes.[G.S.M]\n";
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
case true :   q8.note=1;break;
case false:   q8.note=0;break;
}
/*****************************************************/
(q8.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q8.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+ q2.note+q3.note+ q4.note+q5.note+q6.note+ q7.note+q8.note)/8.0*100<<" out of 100"<<std::endl;

/*******************************************************/
/*9*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q9.setAns("es");


std::cout<<"9)hell...Licht.[N.S.N]\n";
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
case true :   q9.note=1;break;
case false:   q9.note=0;break;
}
/*****************************************************/
(q9.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q9.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<<(q1.note+q2.note+ q3.note+q4.note+ q5.note+q6.note+q7.note+ q8.note+q9.note)/9.0*100<<" out of100"<<std::endl;

/*******************************************************/
/*10*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q10.setAns("es");


std::cout<<"10)ein hell...Licht.[N.S.N]\n";
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
case true :   q10.note=1;break;
case false:   q10.note=0;break;
}
/*****************************************************/
(q10.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q10.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+ q4.note+q5.note+ q6.note+q7.note+q8.note+ q9.note+q10.note)/10.0*100<<" out of 100"<<std::endl;


/*******************************************************/
/*11*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q11.setAns("es");


std::cout<<"11)hell...Licht.[A.S.N]\n";
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
case true :   q11.note=1;break;
case false:   q11.note=0;break;
}
/*****************************************************/
(q11.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q11.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+ q4.note+q5.note+ q6.note+q7.note+q8.note+ q9.note+q10.note+q11.note)/11.0*100<<" out of 100"<<std::endl;


/*******************************************************/
/*12*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q12.setAns("es");


std::cout<<"12)ein hell...Licht.[A.S.N]\n";
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
case true :   q12.note=1;break;
case false:   q12.note=0;break;
}
/************************************************************/
(q12.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q12.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+ q5.note+q6.note+ q7.note+q8.note+q9.note+ q10.note+q11.note+q12.note)/12.0*100<<" out of 100"<<std::endl;


/*******************************************************/
/*13*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q13.setAns("em");


std::cout<<"13)hell...Licht.[D.S.N]\n";
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
case true :   q13.note=1;break;
case false:   q13.note=0;break;
}
/*****************************************************/
(q13.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q13.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note)/13.0*100 <<" out of 100"<<std::endl;


/*******************************************************/
/*14*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q14.setAns("en");


std::cout<<"14)einem hell...Licht[D.S.N]\n";
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
case true :   q14.note=1;break;
case false:   q14.note=0;break;
}
/*****************************************************/
(q14.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q14.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note)/14.0*100<<" out of 100"<<std::endl;


/*******************************************************/
/*15*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q15.setAns("en");


std::cout<<"15)hell...Lichtes[G.S.N].\n";
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
case true :   q15.note=1;break;
case false:   q15.note=0;break;
}
/*****************************************************/
(q15.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q15.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note)/15.0*100<<" out of 100"<<std::endl;


/*******************************************************/
/*16*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q16.setAns("en");


std::cout<<"16)eines hell...Lichtes[G.S.N].\n";
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
case true :   q16.note=1;break;
case false:   q16.note=0;break;
}
/*****************************************************/
(q16.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q16.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note)/16.0*100<<" out of 100"<<std::endl;

/*******************************************************/
/*17*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q17.setAns("e");


std::cout<<"17)klar....Luft[N.S.F]\n";
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
case true :   q17.note=1;break;
case false:   q17.note=0;break;
}
/*****************************************************/
(q17.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q17.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note)/17.0*100<<" out of 100"<<std::endl;

/*******************************************************/
/*18*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q18.setAns("e");


std::cout<<"18)eine klar....Luft[N.S.F]\n";
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
case true :   q18.note=1;break;
case false:   q18.note=0;break;
}
/*****************************************************/
(q18.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q18.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note + q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note)/18.0*100<<" out of 100"<<std::endl
;
/*******************************************************
* /*19*/  
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q19.setAns("e");


std::cout<<"19)klar....Luft[A.S.F]\n";
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
case true :   q19.note=1;break;
case false:   q19.note=0;break;
}
/*****************************************************/
(q19.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q19.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note)/19.0*100<<" out of 100"<<std::endl;

/*******************************************************/
/*20*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q20.setAns("e");


std::cout<<"20)eine klar....Luft[A.S.F]\n";
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
case true :   q20.note=1;break;
case false:   q20.note=0;break;
}
/*****************************************************/
(q20.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q20.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note)/20.0*100<<" out of 100"<<std::endl;


/*******************************************************/
/*21*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q21.setAns("er");


std::cout<<"21)klar....Luft[D.S.F]\n";
std::cin >> q21.get;
if(q21.getAns().compare(q21.get)==0)
    {
    q21.res=true;
    }
else
   {
    q21.res=false;
   }
/*****************************************************/
switch(q21.res)
{
case true :   q21.note=1;break;
case false:   q21.note=0;break;
}
/*****************************************************/
(q21.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q21.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note+q21.note)/21.0*100<<" out of 100"<<std::endl;
/*******************************************************/
/*22*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q22.setAns("en");


std::cout<<"22)einer klar....Luft[D.S.F]\n";
std::cin >> q22.get;
if(q22.getAns().compare(q22.get)==0)
    {
    q22.res=true;
    }
else
   {
    q22.res=false;
   }
/*****************************************************/
switch(q22.res)
{
case true :   q22.note=1;break;
case false:   q22.note=0;break;
}
/*****************************************************/
(q22.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q22.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note+q21.note+q22.note)/22.0*100<<" out of 100"<<std::endl;
/*******************************************************/
/*23*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q23.setAns("er");


std::cout<<"23)klar....Luft[G.S.F]\n";
std::cin >> q23.get;
if(q23.getAns().compare(q23.get)==0)
    {
    q23.res=true;
    }
else
   {
    q23.res=false;
   }
/*****************************************************/
switch(q23.res)
{
case true :   q23.note=1;break;
case false:   q23.note=0;break;
}
/*****************************************************/
(q23.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q23.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note+q21.note+q22.note+q23.note)/23.0*100<<" out of 100"<<std::endl;
/*******************************************************/
/*24*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q24.setAns("en");


std::cout<<"24)einer klar....Luft[G.S.F]\n";
std::cin >> q24.get;
if(q24.getAns().compare(q24.get)==0)
    {
    q24.res=true;
    }
else
   {
    q24.res=false;
   }
/*****************************************************/
switch(q24.res)
{
case true :   q24.note=1;break;
case false:   q24.note=0;break;
}
/*****************************************************/
(q24.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q24.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note+q21.note+q22.note+q23.note+q24.note)/24.0*100<<" out of 100"<<std::endl;
/*******************************************************/
/*25*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q25.setAns("e");


std::cout<<"25)rund....Formen[N.P.-]\n";
std::cin >> q25.get;
if(q25.getAns().compare(q25.get)==0)
    {
    q25.res=true;
    }
else
   {
    q25.res=false;
   }
/*****************************************************/
switch(q25.res)
{
case true :   q25.note=1;break;
case false:   q25.note=0;break;
}
/*****************************************************/
(q25.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q25.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note+q21.note+q22.note+q23.note+q24.note+q25.note)/25.0*100<<" out of 100"<<std::endl;
/*******************************************************/
/*26*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q26.setAns("e");


std::cout<<"26)--rund....Formen(indef)[N.P.-]\n";
std::cin >> q26.get;
if(q26.getAns().compare(q26.get)==0)
    {
    q26.res=true;
    }
else
   {
    q26.res=false;
   }
/*****************************************************/
switch(q20.res)
{
case true :   q26.note=1;break;
case false:   q26.note=0;break;
}
/*****************************************************/
(q26.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q26.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note+q21.note+q22.note+q23.note+q24.note+q25.note+q26.note)/26.0*100<<" out of 100"<<std::endl;
/*******************************************************/
/*27*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q27.setAns("e");


std::cout<<"27)rund....Formen[A.P.-]\n";
std::cin >> q27.get;
if(q27.getAns().compare(q27.get)==0)
    {
    q27.res=true;
    }
else
   {
    q27.res=false;
   }
/*****************************************************/
switch(q27.res)
{
case true :   q27.note=1;break;
case false:   q27.note=0;break;
}
/*****************************************************/
(q27.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q27.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note+q21.note+q22.note+q23.note+q24.note+q25.note+q26.note+q27.note)/27.0*100<<" out of 100"<<std::endl;

/*******************************************************/
/*28*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q28.setAns("e");


std::cout<<"28)--rund....Formen(indef)[A.P.-]\n";
std::cin >> q28.get;
if(q28.getAns().compare(q28.get)==0)
    {
    q28.res=true;
    }
else
   {
    q28.res=false;
   }
/*****************************************************/
switch(q28.res)
{
case true :   q28.note=1;break;
case false:   q28.note=0;break;
}
/*****************************************************/
(q28.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q28.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note+q21.note+q22.note+q23.note+q24.note+q25.note+q26.note+q27.note+q28.note)/28.0*100<<" out of 100"<<std::endl;


/*******************************************************/
/*29*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q29.setAns("en");


std::cout<<"29)rund....Formen[D.P.-]\n";
std::cin >> q29.get;
if(q29.getAns().compare(q29.get)==0)
    {
    q29.res=true;
    }
else
   {
    q29.res=false;
   }
/*****************************************************/
switch(q29.res)
{
case true :   q29.note=1;break;
case false:   q29.note=0;break;
}
/*****************************************************/
(q29.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q29.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note+q21.note+q22.note+q23.note+q24.note+q25.note+q26.note+q27.note+q28.note+q29.note)/29.0*100<<" out of 100"<<std::endl;




/*******************************************************/
/*30*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q30.setAns("en");


std::cout<<"30)--rund....Formen(indef)[D.P.-]\n";
std::cin >> q30.get;
if(q30.getAns().compare(q30.get)==0)
    {
    q30.res=true;
    }
else
   {
    q30.res=false;
   }
/*****************************************************/
switch(q30.res)
{
case true :   q30.note=1;break;
case false:   q30.note=0;break;
}
/*****************************************************/
(q30.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q30.getAns()<<std::endl;
/*******************************************************/

std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note+q21.note+q22.note+q23.note+q24.note+q25.note+q26.note+q27.note+q28.note+q29.note+q30.note)/30.0*100<<" out of 100"<<std::endl;



/*******************************************************/
/*31*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q31.setAns("er");


std::cout<<"31)rund....Formen[G.P.-]\n";
std::cin >> q31.get;
if(q31.getAns().compare(q31.get)==0)
    {
    q31.res=true;
    }
else
   {
    q31.res=false;
   }
/*****************************************************/
switch(q31.res)
{
case true :   q31.note=1;break;
case false:   q31.note=0;break;
}
/*****************************************************/
(q31.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q31.getAns()<<std::endl;
/*******************************************************/

std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note+q21.note+q22.note+q23.note+q24.note+q25.note+q26.note+q27.note+q28.note+q29.note+q30.note+q31.note)/31.0*100<<" out of 100"<<std::endl;



/*******************************************************/
/*32*/
/*******************************************************/
puts("=========================================================");
puts("=========================================================");
q32.setAns("er");


std::cout<<"32)--rund....Formen(indef)[G.S.-]\n";
std::cin >> q32.get;
if(q32.getAns().compare(q32.get)==0)
    {
    q32.res=true;
    }
else
   {
    q32.res=false;
   }
/*****************************************************/
switch(q32.res)
{
case true :   q32.note=1;break;
case false:   q32.note=0;break;
}
/*****************************************************/
(q32.res==true)?
std::cout<<"True\n":
std::cout<<"False, the answer is:"<< q32.getAns()<<std::endl;
/*******************************************************/
std :: cout <<"Your note until now is:\n"<< (q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note+q21.note+q22.note+q23.note+q24.note+q25.note+q26.note+q27.note+q28.note+q29.note+q30.note+q31.note+q32.note)/32.0*100<<" out of 100"<<std::endl;


/********************************************************************
*                       Total Score
********************************************************************/

puts("=========================================================");
                   puts( "Your Total Score");                                           
puts("=========================================================");
total_score=(q1.note+q2.note+q3.note+q4.note+q5.note+ q6.note+q7.note+ q8.note+q9.note+q10.note+ q11.note+q12.note+q13.note+q14.note+q15.note+q16.note+q17.note+q18.note+q19.note+q20.note+q21.note+q22.note+q23.note+q24.note+q25.note+q26.note+q27.note+q28.note+q29.note+q30.note+q31.note+q32.note)/32.00*100;

std::cout<<"Your total score is"<< total_score <<" out of 100\n";
puts("=========================================================");
puts("=========================================================");

return 0; 
}











