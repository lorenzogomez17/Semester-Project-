#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

int main(){
int hr, min, sec;

cout<<"What is the hour of the day there?:"<<endl;
cin>>hr;
cout<<"What are the minutes?:"<<endl;
cin>>min;
cout<<"What are the seconds running?:"<<endl;
cin>>sec;
while (true){

  cout<<"\t"<<hr<<" : "<<min<<" : "<< sec<<endl;
  cout<< string(15, '\n');
  sec++;
  if (sec==60){
    min++;
    sec=0;
    if (min==60){
      hr++;
      min=0;
      if (hr==13){
        hr=1;
      }
    }
  }
  
   

sleep (1);
}
return 0;
}


