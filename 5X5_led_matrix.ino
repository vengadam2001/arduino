int r1=2;
int r2=3;
int r3=4;
int r4=5;
int r5=6;
int c1=12;
int c2=11;
int c3=10;
int c4=9;
int c5=8;
int t=2;
char ch='a';
void setup()
  
{
  
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(r5, OUTPUT);
  
  
  pinMode(c1, OUTPUT);
  pinMode(c2, OUTPUT);
  pinMode(c3, OUTPUT);
  pinMode(c4, OUTPUT);
  pinMode(c5, OUTPUT);
  Serial.begin(9600);
  Serial.println("enter a lower case lettter");
}
void onr(int r)
{
  digitalWrite(r,HIGH);
}
void onc(int c)
{
  digitalWrite(c,LOW);
}
void offr(int r)
{
  digitalWrite(r,LOW);
}
void offc(int c)
{
  digitalWrite(c,HIGH);
}
void off_all()
{
  
  offr(r1);
  offr(r2);
  offr(r3);
  offr(r4);
  offr(r5);
   
  offc(c1); 
  offc(c2); 
  offc(c3); 
  offc(c4); 
  offc(c5);
}
void a(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
  onr(r3);
  onr(r4);
  onr(r5);
  onc(c5);
  onc(c1);
  
  delay(t);
  
  off_all();
  onr(r4);
  onc(c1);
  onc(c2);
  onc(c3);
  onc(c4);
  onc(c5);
  
  delay(t);
  
  off_all();
  
  onr(r2);
  onc(c2);
  onc(c4);
  
  delay(t);
  
  off_all();
    
  onr(r1);
  onc(c3);
  delay(t);
  off_all();
  }
  off_all();
}
void b(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    
    onr(r1);
    onr(r3);
    onr(r5);
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    
    delay(t);
    off_all();
    
    onr(r2);
    onr(r4);
    onc(c1);
    onc(c5);
    delay(t);
    off_all();
  }
  off_all();
}
void c(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r5);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c5);
    
    delay(t);
    off_all();
    onr(r2);
    onr(r3);
    onr(r4);
    onc(c1);
    delay(t);
    off_all();
  }
  off_all();
}
void d(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r5);
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    delay(t);
    off_all();
    onc(c1);
    onc(c5);
    onr(r2);
    onr(r3);
    onr(r4);
    delay(t);
    off_all();
  }
  off_all();
}
void e(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c1);
    delay(t);
    off_all();
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c4);
    onc(c5);
    onr(r1);
    onr(r3);
    onr(r5);
    delay(t);
    off_all();
  }
  off_all();
}
void f(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c1);
    delay(t);
    off_all();
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c4);
    onc(c5);
    onr(r1);
    onr(r3);
    delay(t);
    off_all();
  }
  off_all();
}
void g(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c1);
    
    delay(t);
    off_all();
    
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c5);
    onr(r5);
    onr(r1);
    delay(t);
    off_all();
    
    onr(r3);
    onc(c3);
    onc(c4);
    onc(c5);
    
    delay(t);
    off_all();
  
    onc(c5);
    onr(r4);
    
    delay(t);
    off_all();
  }
  off_all();
}
void h(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c1);
    onc(c5);
    delay(t);
    off_all();
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c4);
    onc(c5);
    onr(r3);
    delay(t);
    off_all();
  }
  off_all();
}
void i(int n=100)
{
  for(int i=0;i<n;i++)
  {
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c5);
    onr(r1);
    onr(r5);
    delay(t);
    off_all();
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c3);
    delay(t);
    off_all();
  }
  off_all();
}
void j(int n=100)
{
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c5);
    
    delay(t);
    off_all();
    
    onc(c3);
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    
    delay(t);
    off_all();
    
    onr(r5);
    onc(c1);
    onc(c2);
    
    delay(t);
    off_all();
    
    onr(r4);
    onc(c1);
    
    delay(t);
    off_all();
    
  }
  off_all();
}
void k(int n=100)
{
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c1);
    
    delay(t);
    off_all();
    
    onr(r3);
    onc(c2);
    
    delay(t);
    off_all();
    
    onc(c3);
    onr(r2);
    onr(r4);
    
    delay(t);
    off_all();
    
    onc(c4);
    onr(r1);
    onr(r5);
    
    delay(t);
    off_all();
    
  }
  off_all();
}
void l(int n=100)
{
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c1);
    
    delay(t);
    off_all();
    
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c5);
    onr(r5);
    
    delay(t);
    off_all();
  }
  off_all();
}
void m(int n=100)
{
  for(int i=0;i<n;i++)
  {
  
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c1);
    onc(c5);
    
    delay(t);
    off_all();
    
    onc(c2);
    onc(c4);
    onr(r2);
    
    delay(t);
    off_all();
    
    onr(r3);
    onc(c3);
    
    delay(t);
    off_all();
  
  }
  off_all();
}
void n(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
  
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c1);
    onc(c5);
    
    delay(t);
    off_all();
    int ac[]={11,10,9};
    int ar[]={3,4,5};
    for(int i=0;i<3;i++)
    {
      onc(ac[i]);
      onr(ar[i]);
      delay(t);
      off_all();
    }
    delay(t);
    off_all();

  }
  off_all();
}
void o(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c1);
    onc(c5);
    
    delay(t);
    off_all();
    
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c5);
    onr(r1);
    onr(r5);
    
    delay(t);
    off_all();
  }
  off_all();
}
void p(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c1);
    
    delay(t);
    off_all();
    
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c5);
    onr(r1);
    onr(r3);
    
    delay(t);
    off_all();
    
    onr(r1);
    onr(r2);
    onr(r3);
    onc(c5);
    
    delay(t);
    off_all();
  }
  off_all();
}
void q(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {  onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onc(c1);
    onc(c5);
    
    delay(t);
    off_all();
    
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c5);
    onr(r1);
    onr(r4);
    
    delay(t);
    off_all();
   
   onc(c4);
   onr(r5);
   
   delay(t);
   off_all();
  
  }
  off_all();
}
void r(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c1);
    
    delay(t);
    off_all();
    
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c5);
    onr(r1);
    onr(r3);
    
    delay(t);
    off_all();
    
    onr(r1);
    onr(r2);
    onr(r3);
    onc(c5);
    
    delay(t);
    off_all();
    
    onr(r4);
    onc(c3);
    
    delay(t);
    off_all();
    
    onr(r5);
    onc(c4);
    
    delay(t);
    off_all();

  }
  off_all();
}
void s(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c5);
    
    onr(r5);
    onr(r3);
  onr(r1);
    
    delay(t);
    off_all();
    
    onr(r2);
    onc(c1);
    
    delay(t);
    off_all();
    onr(r4);
    onc(c5);
    
    delay(t);
    off_all();
    
  }
  off_all();
}

void T(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c5);
    
    delay(t);
    off_all();
    
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c3);
    
    delay(t);
    off_all();
    
  }
  off_all();
}
void u(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c1);
    onc(c5);
    
    delay(t);
    off_all();
   
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c5);
    onr(r5);
    delay(t);
    off_all();
  }
  off_all();
}

void v(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r2);
    onr(r3);
    onc(c1);
    onc(c5);
    
    delay(t);
    off_all();
   
    onc(c3);
    onr(r5);
    delay(t);
    off_all();
    
    onr(r4);
    onc(c2);
    onc(c4);
    delay(t);
    off_all();
  }
  off_all();
}
void w(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r2);
    onr(r3);
    onr(r4);
    onr(r5);
    onc(c1);
    onc(c5);
    
    delay(t);
    off_all();
    
    onr(r4);
    onc(c4);
    onc(c2);
    
    delay(t);
    off_all();
    
    onr(r3);
    onc(c3);
    
    delay(t);
    off_all();
    
  }
  off_all();
}
void x(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onr(r1);
    onr(r5);
    onc(c1);
    onc(c5);
   
    delay(t);
    off_all();
   
    onr(r2);
    onr(r4);
    onc(c2);
    onc(c4);
    
    delay(t);
    off_all();
    
    onr(r3);
    onc(c3);
    
    delay(t);
    off_all();
  }
  off_all();
}
void y(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    int ar[]={2,3,4,5,6};
    int ac[]={12,11,10,9,8};
    for(int i=0;i<3;i++)
    {
      onr(ar[i]);
      onc(ac[i]);
      delay(t);
      off_all();
    }
    for(int i=0;i<3;i++)
    {
      onr(ar[i]);
      onc(ac[4-i]);
      delay(t);
      off_all();
    }
    onr(r4);
    onr(r5);
    onc(c3);
    delay(t);
    off_all();
  }
  off_all();
}

void z(int n=100)
{
  off_all();
  for(int i=0;i<n;i++)
  {
    onc(c1);
    onc(c2);
    onc(c3);
    onc(c4);
    onc(c5);
    onr(r1);
    onr(r5);
    
    delay(t);
    off_all();
    
    onr(r2);
    onc(c4);
    
    delay(t);
    off_all();
    
    onr(r3);
    onc(c3);
    
    delay(t);
    off_all();
    
    onr(r4);
    onc(c2);
    
    delay(t);
    off_all();
    
  }
  off_all();
}

void loop()
{
  Serial.println(ch);
  while(Serial.available())
  {
   while (ch!=0)
    {
      ch=Serial.read();
     Serial.println("hi--");
      Serial.println(ch);
      switch(ch)
      {
        case 'a':
        a(100);
        break;
        
        case'b':
        b(100);
        break;
        
        
        case'c':
        c(100);
        break;
                
        
        case'd':
        d(100);
        break;
        
        case'e':
        e(100);
        break;
        
        case'f':
        f(100);
        break;
        
        case'g':
        g(100);
        break;
        
        case'h':
        h(100);
        break;
        
        case'i':
        i(100);
        break;
        
        case'j':
        j(100);
        break;
        
        case'k':
        k(100);
        break;
        
        case'l':
        l(100);
        break;
        
        case'm':
        m(100);
        break;
        
        case'n':
        n(100);
        break;
        
        case'o':
        o(100);
        break;
        
        case'p':
        p(100);
        break;
        
        case'q':
        q(100);
        break;
        
        case'r':
        r(100);
        break;
        
        case's':
        s(100);
        break;
        
        case't':
        T(100);
        break;
        
        case'u':
        u(100);
        break;
        
        case'v':
        v(100);
        break;
        
        case'w':
        w(100);
        break;
        
        case'x':
        x(100);
        break;
        
        case'y':
        y(100);
        break;
        
        case'z':
        z(100);
        break;
        
        default:
        Serial.println("enter the correct input");
      }
     Serial.println("enter a letter in lowercase:");
    }
  }
}
