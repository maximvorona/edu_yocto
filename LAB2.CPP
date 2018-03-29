# edu_yocto

#include <STRING.H>
#include"iostream"
using namespace std;
STRING::STRING()
  {
      p = new srep;
      p->s = 0;
      p->n = 1;
  }
 
  string::string(char* s)
  {
      p = new srep;
      p->s = new char[ strlen(s)+1 ];
      strcpy(p->s, s);
      p->n = 1;
  }
 
  string::string(string& x)
  {
      x.p->n++;
      p = x.p;
  }
  
  string::~string()
  {
      if (--p->n == 0) {
          delete p->s;
          delete p;
      }
  }
