# edu_yocto

 #ifndef STRING.H
 #define STRING.H
 
   class string {
      struct srep {
          char* s;           
          int n;           
  };
      srep *p;
 
   public:
      string(char *);        
      string();              
      string(string &);      
      string& operator=(char *);
      string& operator=(string &);
      ~string();
      char& operator[](int i);
 
       friend ostream& operator<<(ostream&, string&);
      friend istream& operator>>(istream&, string&);
  
      friend int operator==(string& x, char* s)
          {return strcmp(x.p->s, s) == 0; }
  
      friend int operator==(string& x, string& y)
          {return strcmp(x.p->s, y.p->s) == 0; }
 
       friend int operator!=(string& x, char* s)
          {return strcmp(x.p->s, s) != 0; }
 
       friend int operator!=(string& x, string& y)
          {return strcmp(x.p->s, y.p->s) != 0; }
  };
