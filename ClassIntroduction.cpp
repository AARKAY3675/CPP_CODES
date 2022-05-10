#include<iostream>
using namespace std;

class Employee  {
    public:
    string Name;
    string Company;
    int Age;
 void introduceyourself()
 {
     cout<<"Name "<< Name <<endl <<"Company = "<<Company <<endl <<"Age = "<<Age <<endl;
 }
};

int main ()
{
   Employee employee1 ;
   employee1.Name= "Rithik";
   employee1.Company= "Yt-Psycho";
   employee1.Age= 25;
   employee1.introduceyourself();
   }
