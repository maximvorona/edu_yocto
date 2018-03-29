# edu_yocto

main()
  {
      string x[100];
      int n;
  
      cout << "отсюда начнем";
      for (n = 0; cin>>x[n]; n++) {
          string y;
          if (n==100) error("слишком много строк");
          cout << (y = x[n]);
          if (y=="done") break;
      }
 
 
      cout << "отсюда мы пройдем обратно";
      for (int i=n-1; 0<=i; i--) cout << x[i];
  }
