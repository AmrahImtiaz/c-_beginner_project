#include <iostream>
#include <cstdlib> // for system()
#include <thread> // for sleep_for
#include <chrono> // for chrono

using namespace std;

void loadscreen() {  // you can remove this if you want 
    for (int i = 0; i <= 100; i++) { // i just added this to make it fancy fancy
        cout << "\t\t\t\t\t\t Loading " << i << "%" << endl;
        this_thread::sleep_for(chrono::milliseconds(50)); // Adding delay for loading effect
    }
    system("CLS");
}

void calintro() {
  cout<<"\t\t\tSimple Calculator \t\t\t"<<endl;
  cout << "\t\t\t-----------------\t\t\t"<< endl;
  cout << "\t\t\t| 7 | 8 | 9 | + |\t\t\t"<< endl;
  cout << "\t\t\t-----------------\t\t\t"<< endl;
  cout << "\t\t\t| 4 | 5 | 6 | - |\t\t\t"<< endl;
  cout << "\t\t\t-----------------\t\t\t"<< endl;
  cout << "\t\t\t| 1 | 2 | 3 | x |\t\t\t"<< endl;
  cout << "\t\t\t-----------------\t\t\t"<< endl;
  cout << "\t\t\t| 0 | . | = | / |\t\t\t"<< endl;
  cout << "\t\t\t-----------------\t\t\t"<< endl;
  
}

void calculator() {
  char choice;
  float result;
  float a;
  float b;
  cout<<"Enter the first number :"<<endl;
  cin>>a;
  cout<<"Enter the second number :"<<endl;
   cin>>b;
  cout<<" Choose the Operation you want to perform : "<<endl;
  cout<<" Press a ) for Addition "<<endl;
  cout<<" Press b ) for Substraction "<<endl;
  cout<<" Press c ) for Multiplication "<<endl;
  cout<<" Press d ) for Division "<<endl;
  cin >> choice;
  cout<<"\n";
  cout<<"------------------------\n"<<endl;
  switch(choice){
     
     case 'a' :{
         result=a+b;
          
         cout<<result;
         cout<<"\n"<<endl;
           cout<<"------------------------"<<endl;
         break;
     }
      case 'b' :{
         result=a-b;
         cout<<result;
           cout<<"\n"<<endl;
           cout<<"------------------------"<<endl;
         break;
     }
      case 'c' :{
         result=a*b;
       
         cout<<result;  
           cout<<"\n"<<endl;
         cout<<"------------------------"<<endl;
         break;
     }
      case 'd' :{
         result=a/b;
         cout<<result;
          cout<<"\n"<<endl;
           cout<<"------------------------"<<endl;
         break;
     }
       default: {
            cout << "Incorrect option chosen" << endl;
        }
    }
}

int main() {
  loadscreen();
  system("color 97");
  calintro();
  calculator();
  
  return 0;
  
}
