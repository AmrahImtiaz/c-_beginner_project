//Login and Registration System
#include <iostream>
using namespace std;

void register(){
string name,gmail,password;

cout<<"Enter your Name : "<<endl;
cin>>name;

cout<<"Enter your Gmail : "<<endl;
cin>>gmail;

cout<<"Enter your Password : "<<endl;
cin>>password;

}

void login(){


}

int main(){

 char choice;

 cout<<" Do you already have an account? (y/n) ";
 cin>>choice;
 if(choice=='y'|| choice=='Y' ){
 login();
 }
 else{
 register();
 login();
 }

}