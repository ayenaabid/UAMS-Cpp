#include <iostream>
#include <conio.h>
using namespace std;
void header();
int menu();
int option1();
int option2();
int option3();
int option4();
int option5();
string sname1,sname2;
int option;
float matricMarks1,matricMarks2;
float firstYearMarks1,firstYearMarks2;
float eCatMarks1,eCatMarks2;
float merit1,merit2 ;
int main()
{
    int option;
    header();
    while(true)
    {
option=menu();
        if (option==1)
        {
            option1();
        }
        if (option==2)
        {
           option2();
        }
        if (option==3)
        {
            option3();
        }
         if (option==4)
        {
            option4();
        }
        if (option==5)
       {
         option5();
        }
        cout<<"Press any key to continue:..";
        getch();
        system("cls");
    }      
    }
   
    void header()
    {
        cout<<"*****************************************"<<endl;
        cout<<"* University Admission Managment System *"<<endl;
        cout<<"*****************************************"<<endl;
        cout<<endl;
    }
     int menu()
     {
      cout<<"Select one of the following options:.."<<endl;
      cout<<"1.Add First Student Record"<<endl;
      cout<<"2.Add Second Student Record"<<endl;
      cout<<"3.Calculate Aggregates"<<endl;
      cout<<"4.Print Both Students Data"<<endl;
      cout<<"5.Exit"<<endl;
      cout<<"Your Option:.."<<endl;
      cin>>option;
      return option;
     }
     int option1()
     { 
        cout<<"Enter First Student Name.."<<endl;
        cin>>sname1;
        cout<<"Enter Otained Marks in matric.."<<endl;
        cin>>matricMarks1;
        cout<<"Enter Obtained Marks in First Year.."<<endl;
        cin>>firstYearMarks1;
        cout<<"Enter eCat Marks.."<<endl;
        cin>>eCatMarks1;
       }
        int option2()
        {
        cout<<"Enter Second Student Name.."<<endl;
        cin>>sname2;
        cout<<"Enter Otained Marks in matric.."<<endl;
        cin>>matricMarks2;
        cout<<"Enter Obtained Marks in First Year.."<<endl;
        cin>>firstYearMarks2;
        cout<<"Enter eCat Marks.."<<endl;
        cin>>eCatMarks2;
        }
        int option3()
        {
       merit1 = (0.25 * matricMarks1 / 1200) + (0.35 * firstYearMarks1 / 550) + (0.40 * eCatMarks1 / 400);

        merit2 = (0.25 * matricMarks2 / 1200) + (0.35 * firstYearMarks2 / 550) + (0.40 * eCatMarks2 / 400);
       cout << "First Student Merit = " << merit1 * 100 << "%" << endl;
        cout << "Second Student Merit = " << merit2 * 100 << "%" << endl;
        
        }
        int option4()
        {
        cout<<"Following Students exists in the system:"<<endl;
        cout<<"Following Students exists in the system:"<<endl;
        cout<<"Name\tMatric\tFirst Year\teCat\tMerit"<<endl;
        cout<<sname1<<"\t"<<matricMarks1<<"\t"<<firstYearMarks1<<"\t"<<eCatMarks1<<"\t"<<merit1<<endl;
        cout<<sname2<<"\t"<<matricMarks2<<"\t"<<firstYearMarks2<<"\t"<<eCatMarks2<<"\t"<<merit2<<endl;
        
    }
        int option5()
        {
            return 0;
        
    
        
        }

       