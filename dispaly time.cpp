 #include<iostream>
 using namespace std;
 class Time
 {
  public:
  int hour,minute,second;
 void input()
   {
    cout<<"Enter hour:";
    cin>>hour;
    cout<<"\nEnter minute:";
    cin>>minute;
    cout<<"\nEnter second:";
    cin>>second;
    }
   void display()
   {
    cout<<"\nTime :"<<hour<<":"<<minute<<":"<<second;
    }
 };
 int main()
 {
  Time ritesh;
  ritesh.input();
  ritesh.display();
  return 0;
  }