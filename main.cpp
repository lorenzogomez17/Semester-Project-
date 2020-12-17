#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

int main(){
int h, m, s;

cout<<"What is the hour of the day there?:"<<endl;
cin>>h;
cout<<"What are the minutes?:"<<endl;
cin>>m;
cout<<"What are the seconds running?:"<<endl;
cin>>s;
while (true){

  cout<<"\t"<<h<<" : "<<m<<" : "<< s<<endl;
  cout<< string(15, '\n');
  s++;
  if (s==60){
    m++;
    s=0;
    if (m==60){
      h++;
      m=0;
      if (h==13){
        h=1;
      }
    }
  }
  
   

sleep (1);
}
return 0;
}


