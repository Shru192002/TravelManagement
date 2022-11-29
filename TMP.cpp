#include<iostream>
#include<fstream>
#include<windows.h>
#include<string.h>

using namespace std;
void menu();

class ManageMenu{
    protected :
    string username;
    string admin;
    public:
    ManageMenu(){
        system ("CLS");
        system ("color 0A");
        cout<<"\n\n------------------------------------------------------------------------------------\n"<<endl;
        cout<<"\t\t           ***Travel Management project***\n"<<endl;
        cout<<"------------------------------------------------------------------------------------\n"<<endl;
        cout<<"\n\t\t\tGuided by Prajakta Maam \n";
        cout<<"\n\tGroup Details :\n";
        cout<<"\t\t\t37.Bhagyashree Patil\n";
        cout<<"\t\t\t44.Shruti Rawool\n";
        cout<<"\t\t\t45.Ayushi Sagar\n";
        Sleep(3330);
        cout<<"\n\n\n\n\tEnter your Name to continue as a admin:";
        cin>>username;
        admin="Shruti";
        if (username==admin){
            system ("CLS");
             menu();
        }
        else
        system("CLS");
       

    }

    ~ManageMenu(){

    }
};
class customers{
public:
string  name;
string gender,add;
int age;
int mblNo;
static int cusID;
char all[999];
void getDetails(){
    ofstream out("old-customers.txt",ios::app);{
    cout<<"Enter customer ID :";
    cin>>cusID;
    cout<<"Enter customer Name :";
    cin>>name;
    cout<<"Enter customer Gender (F/M/O)  :";
    cin>>gender;
   
    cout<<"Enter customer Age :";
    cin>>age;
    cout<<"Enter Mobile number :";
    cin>>mblNo;
    cout<<"Enter customer Address :";
    cin>>add;
    }
    out<<"\nCustomer Id :"<<cusID<<"\n Name :"<<name<<"\nAge :"<<age<<"\n Mobile No :"<<mblNo<<"\nAddress :"<<add<<"\nGender"<<gender<<endl;
   out.close();
   cout<<"\nsaved\nNOte : We save your details for future purposes";
}

void showDetails(){
   ifstream in("old-customers.txt");
   {
    if(!in){
        cout<<"File Error!"<<endl;
    }
    while(!(in.eof())){
        in.getline(all,999);
        cout<<all<<endl;
    }
    in.close();
   }
}
};

class cabs{
public:
int cabchoice;
int kilometers;
float cost;
static float lastcost; 

void cabdetails(){
    cout<<"We provide fastest ,safest and smartest services around the country"<<endl;
    cout<<"1.Rent a economy cab for Rs. 25 per km"<<endl;
    cout<<"2.Rent a luxury cab for Rs. 40 per km"<<endl;

    cout<<"\n To calculate the cost for your journey: "<<endl;
    cout<<"\nEnter the cab choice of your requirement: ";
    cin>>cabchoice;
    cout<<"\nEnter Kilometers you have to travel:";
    cin>>kilometers;


    int hirecab;
    if (cabchoice==1){
        cost=kilometers * 25;
        cout<<"\n Your travel cost is Rs "<<cost<<" for economy cab"<<endl;
        cout<<"Press 1 to select this cab: or ";
        cout<<"\nPress 2 to select another cab :";
        cin>>hirecab;

        system ("CLS");
        if(hirecab==1){
            lastcost=cost;
            cout<<"\n You have successfully hired an economy cab";
            cout<<"\n goto  menu and take the receipt";

        }
        else if(hirecab == 2){
            cabdetails();

        }
        else{
            cout<<"Invalid Input ! Redirecting to previous menu \n Please wait "<<endl;
            Sleep(999);
            system("CLS");
            cabdetails();
        }
    }

    else if(cabchoice==2){
        cost=kilometers * 40;
        cout<<"\n Your travel cost is Rs "<<cost<<" for Luxury cab"<<endl;
        cout<<"Press 1 to select this cab: or ";
        cout<<"\nPress 2 to select another cab :";
        cin>>hirecab;

        system ("CLS");
        if(hirecab==1){
            lastcost=cost;
            cout<<"\n You have successfully hired an Luxury cab";
            cout<<"\n goto  menu and take the receipt";

        }
        else if(hirecab == 2){
            cabdetails();

        }
        else{
            cout<<"Invalid Input ! Redirecting to previous menu \n Please wait "<<endl;
            Sleep(999);
            system("CLS");
            cabdetails();
        }

    }

    else{
       cout<<"Invalid Input ! Redirecting to previous menu \n Please wait "<<endl;
            Sleep(999);
            system("CLS");
            menu();
    }
cout<<"\n Press 1 to Redirect to main menu : ";
cin>>hirecab;
system("CLS");
if(hirecab==1){
    menu();
}
else{
    menu();
}
}
};

class Booking{
public:
    int choicehotel;
    int package;
    static float hotelcost;
    int gotomenu;

    void hotels(){
         string hotelNo[]={ "Taj","Oberoi","GokulAnand"};
         for(int a=0;a<3;a++){
            cout<<(a+1)<<".Hotel"<<hotelNo[a]<<endl;

         }
         cout<<"\nCurrently we have collabaration with above hotels!"<<endl;
         cout<<"Enter Number of the hotel you want to book :\n or press any key to go back ";

         cin>>choicehotel;
         system("CLS");

         if(choicehotel==1){
            cout<<"******Welcome to Taj Hotel*******\n "<<endl;
            cout<<"Packages offered by Taj per day :\n";
            cout<<"1.Standard package :  All basic facilities you need just for Rs.5000 "<<endl;
            cout<<"2.Premium Package  :  Enjoy Premium Facicilities just for Rs.10000"<<endl;
            cout<<"3.Luxury Packae    :  Get a feel of luxury life at just Rs.15000"<<endl;
            cout<<"\n Press another key to back or \n Enter package number you want to book: ";
            cin>>package;
system ("CLS");

            if(package==1){
                hotelcost=5000;
                cout<<"You have successfully booked Standard package "<<endl;
                cout<<"Goto menu and take the receipt"<<endl;
            }
            else if(package==2){
                hotelcost=10000;
                cout<<"You have successfully booked Premium package "<<endl;
                cout<<"Goto menu and take the receipt"<<endl;
            }
            else if(package==3){
                hotelcost=15000;
                cout<<"You have successfully booked Luxury package "<<endl;
                cout<<"Goto menu and take the receipt"<<endl;
            }
            else{
                cout<<"Invalid Input ! Redirecting to previous menu \n Please wait "<<endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            cout<<"\n Press 1 to redirect main menu :";
         cin>>gotomenu;
         system ("CLS");
         if (gotomenu ==1)
         {
            menu();
         }
         else{
            menu();
         }
        }
        if(choicehotel==2){
            cout<<"******Welcome to Oberoi Hotel*******\n "<<endl;
            cout<<"Packages offered by Oberoi per day :\n";
            cout<<"1.Standard package :  All basic facilities you need just for Rs.3000 "<<endl;
            cout<<"2.Premium Package  :  Enjoy Premium Facicilities just for Rs.8000"<<endl;
            cout<<"3.Luxury Packae    :  Get a feel of luxury life at just Rs.10000"<<endl;
            cout<<"\n Press another key to back or \n Enter package number you want to book: ";
            cin>>package;
system ("CLS");

            if(package==1){
                hotelcost=3000;
                cout<<"You have successfully booked Standard package "<<endl;
                cout<<"Goto menu and take the receipt"<<endl;
            }
            else if(package==2){
                hotelcost=8000;
                cout<<"You have successfully booked Premium package "<<endl;
                cout<<"Goto menu and take the receipt"<<endl;
            }
            else if(package==3){
                hotelcost=10000;
                cout<<"You have successfully booked Luxury package "<<endl;
                cout<<"Goto menu and take the receipt"<<endl;
            }
            else{
                cout<<"Invalid Input ! Redirecting to previous menu \n Please wait "<<endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
             cout<<"\n Press 1 to redirect main menu :";
         cin>>gotomenu;
         system ("CLS");
         if (gotomenu ==1)
         {
            menu();
         }
         else{
            menu();
         }
        }
         if(choicehotel==3){
            cout<<"******Welcome to Gokul Anand Hotel*******\n "<<endl;
            cout<<"Packages offered by GokulAnand per day :\n";
            cout<<"1.Standard package :  All basic facilities you need just for Rs.2500 "<<endl;
            cout<<"2.Premium Package  :  Enjoy Premium Facicilities just for Rs.5000"<<endl;
            cout<<"3.Luxury Packae    :  Get a feel of luxury life at just Rs.9000"<<endl;
            cout<<"\n Press another key to back or \n Enter package number you want to book: ";
            cin>>package;

system ("CLS");
            if(package==1){
                hotelcost=2500;
                cout<<"You have successfully booked Standard package "<<endl;
                cout<<"Goto menu and take the receipt"<<endl;
            }
            else if(package==2){
                hotelcost=5000;
                cout<<"You have successfully booked Premium package "<<endl;
                cout<<"Goto menu and take the receipt"<<endl;
            }
            else if(package==3){
                hotelcost=9000;
                cout<<"You have successfully booked Luxury package "<<endl;
                cout<<"Goto menu and take the receipt"<<endl;
            }
            else{
                cout<<"Invalid Input ! Redirecting to previous menu \n Please wait "<<endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
cout<<"\n Press 1 to redirect main menu :";
         cin>>gotomenu;
         system ("CLS");
         if (gotomenu ==1)
         {
           menu();
         }
         else{
            menu();
         }
        }
         
         else{
            cout<<"Invalid input !! Redirecting you to main menu :";
            Sleep(1100);
            system("CLS");
            menu();
         }
         
         
         }

};
//Using Inheritence concept (multiple Inheritence)
float cabs::lastcost;
float Booking ::hotelcost;
int customers ::cusID;
class charges: public Booking,cabs,customers
{
public:
void printbill(){
 ofstream outf("receipt.txt");
 {
    outf<<"---CE Travel Agency----- "<<endl;
    outf<<"---------Receipt-------- "<<endl;
    outf<<"-________________________"<<endl;
    outf<<"Customer Id : "<<customers::cusID<<endl<<endl;
    outf<<"Description\t\t Total "<<endl;
    outf<<"Hotel cost:\t\t "<<fixed<<Booking::hotelcost<<endl;
    outf<<"Travel (cab) cost: \t "<<fixed<<cabs::lastcost<<endl;

    outf<<"__________________________"<<endl;
    outf<<"Total cost: \t "<<fixed<<Booking::hotelcost+cabs::lastcost<<endl;
    outf<<"__________________________"<<endl;
    outf<<"----------Thank You--------"<<endl;
 }
 outf.close();
}
void showbill(){
    ifstream inf("receipt.txt");
    {
        if(inf){
            cout<<"File opening error"<<endl;
        }
        while(!(inf.eof())){
            inf.getline(all,999);
            cout<<all <<endl;

        }
    }
    inf.close();
}
};

void menu(){
int mainchoice;
int choice;
int gotomenu;
    cout<<"\t\t           * CE Travels*\n"<<endl;
    cout<<"---------------------Main menu---------------------"<<endl;
    cout<<"\t---------------------------------------"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;
    cout<<"\t|\tCustomer Management -> 1\t|"<<endl;
    cout<<"\t|\tCabs Management     -> 2\t|"<<endl;
    cout<<"\t|\tBookings Management -> 3\t|"<<endl;
    cout<<"\t|\tCharges and Bills   -> 4\t|"<<endl;
    cout<<"\t|\tExit                -> 5\t|"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl; 
    cout<<"\t----------------------------------------"<<endl; 

    cout<<"\nEnter your choice: ";
    cin>>mainchoice;
    system("CLS");
    customers a;
    cabs b;
    Booking c;
    charges d;

    if (mainchoice==1){
        cout<<"----Customers Details----\n\n";
        cout<<"1.Enter New customer "<<endl;
        cout<<"2.Details of Old Customers"<<endl;
        cout<<"\n Enter Choice: ";
        cin>>choice;

        system("CLS");
        if (choice==1){
            a.getDetails();

        }
        else if(choice==2){
            a.showDetails();
        }
        else{
cout<<"Invalid input !! Redirecting you to main menu :";
            Sleep(1100);
            system("CLS");
            menu();
        }
cout<<"\n  Press 1 to redirect to main menu:";
cin>>gotomenu;
system ("CLS");
if (gotomenu==1){
    menu();
}
else{
    menu();
}


    }
else if(mainchoice==2){
    b.cabdetails();
}
else if(mainchoice==3){
    cout<<"----Hotel booking System----"<<endl;
    c.hotels();
}
else if(mainchoice==4){
  cout<<"----Get your Receipt here----"<<endl;
  d.printbill();
  cout<<"To display your receipt on console press 1 or press another key to goto main menu: ";
  cin>>gotomenu;

  if(gotomenu==1){
    system("CLS");
    d.showbill();
    cout<<"\n Press 1 to go to main menu";
    cin>>gotomenu;
    system("CLS");
    if(gotomenu==1){
        menu();
    
    }
    else{
        menu();
    }
  }
  else{
    system("CLS");
    menu();
  }
}
else if (mainchoice==5){
    cout<<"----THANK YOU AND GOOD BYE----"<<endl;
    Sleep(1100);
    system("CLS");
    menu();
}
else{
     cout<<"Invalid input !! Redirecting you to main menu :";
            Sleep(1100);
            system("CLS");
            menu();
}
}
int main(){
    ManageMenu admin;

    return 0;
}