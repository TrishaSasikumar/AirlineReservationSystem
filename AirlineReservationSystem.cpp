#include<iostream>
#include<iomanip>
#include<windows.h>
#include<string>
#include<fstream>
using namespace std;
class Flight
{
public:
void getInfo()
{
cout<<setw(40)<<"\n\PASSENGER INFORMATION";
cout<<"\n\n\nENTER FIRST NAME: "<<endl;
cin>>fname;
cout<<"ENTER LAST NAME: "<<endl;
cin>>lname;
 cout<<endl<<endl;
system("CLS");
};
int num,r;
char fname[60];
char lname[60];
};
class booking: public Flight
{
public:
void chooseAirlineInternational()
{
 cout<<"\nIn which AIRLINE you want to travel: "<<endl<<endl;
 cout<<"(1) – Qantas Airways"<<endl;
 cout<<"(2) – British Airways"<<endl;
 cout<<"(3) – Singapore Airlines"<<endl;
 cout<<"(4) – Qatar Airways"<<endl;
 cout<<"(5) – Emirates Air"<<endl;
 cout<<"(6) – Luftansa "<<endl;
 cout<<"(7) – Swiss International Airlines"<<endl;
 cout<<"(8) – Thai Airways"<<endl;
 cout<<"(9) – Malaysia Airlines"<<endl;
cout<<"\nEnter your choice: ";
cin>>airline;
system ("cls");
 switch(airline)
 {
 case 1:
cout<<"\n\n"<<setw(55)<<"WELCOME TO Qantas Airways "<<endl;
chooseInternationalDestination();
 break;
 case 2:
cout<<"\n\n"<<setw(55)<<"WELCOME TO British Airways "<<endl;
 chooseInternationalDestination();
 break;
 case 3:
cout<<"\n\n"<<setw(55)<<"WELCOME TO Singapore Airlines "<<endl;
 chooseInternationalDestination();
 break;
 case 4:
cout<<"\n\n"<<setw(55)<<"WELCOME TO Qatar Airways "<<endl;
 chooseInternationalDestination();
 break;
 case 5:
cout<<"\n\n"<<setw(55)<<"WELCOME TO Emirates Air "<<endl;
 chooseInternationalDestination();
 break;
 case 6:
 if(airline==6)
cout<<"\n\n"<<setw(55)<<"WELCOME TO Luftansa "<<endl;
 chooseInternationalDestination();
 break;
 case 7:
 if(airline==7)
cout<<"\n\n"<<setw(55)<<"WELCOME TO Swiss International Airlines "<<endl;
 chooseInternationalDestination();
 break;
 case 8:
 if(airline==8)
cout<<"\n\n"<<setw(55)<<"WELCOME TO Thai Airways "<<endl;
 chooseInternationalDestination();
 break;
 case 9:
 if(airline==9)
cout<<"\n\n"<<setw(55)<<"WELCOME TO Malaysia Airlines "<<endl;
chooseInternationalDestination();
 break;
 default:
 cout<<"\n\nInvalid Choice! Try Again.";
 }
};
void chooseAirlineLocal()
{
cout<<"\nIn which AIRLINE you want to travel"<<endl<<endl;
cout<<"(1) – Vistara"<<endl;
cout<<"(2) – AirAsia"<<endl;
 cout<<"(3) – IndiGo"<<endl;
 cout<<"(4) – SpiceJet"<<endl;
 cout<<"(5) – GoAir"<<endl;
 cout<<"(6) – Jet Airways"<<endl;
 cout<<"(7) – Kingfisher Airlines"<<endl;
cout<<"\nEnter your choice: ";
cin>>airline;
system ("cls");
 switch(airline)
 {
 case 1:
cout<<"\n\n"<<setw(55)<<"WELCOME TO Vistara"<<endl;
chooseLocalDestination();
 break;
 case 2:
 if(airline==2)
cout<<"\n\n"<<setw(55)<<"WELCOME TO AirAsia"<<endl;
chooseLocalDestination();
break;
 case 3:
 if(airline==2)
cout<<"\n\n"<<setw(55)<<"WELCOME TO IndiGo"<<endl;
chooseLocalDestination();
break;
 case 4:
 if(airline==2)
cout<<"\n\n"<<setw(55)<<"WELCOME TO SpiceJet"<<endl;
chooseLocalDestination();
break;
 case 5:
 if(airline==2)
cout<<"\n\n"<<setw(55)<<"WELCOME TO GoAir"<<endl;
chooseLocalDestination();
 break;
 case 6:
 if(airline==2)
cout<<"\n\n"<<setw(55)<<"WELCOME TO Jet Airways"<<endl;
chooseLocalDestination();
break;
 case 7:
if(airline==2)
cout<<"\n\n"<<setw(55)<<"WELCOME TO Kingfisher Airlines"<<endl;
chooseLocalDestination();
 break;
 default:
 cout<<"\n\nInvalid Choice! Try Again.";
 }
};
void chooseLocalDestination()
{
cout<<"Here are the available Destinations:"<<endl;
cout<<"---------------"<<endl;
cout<<"(1) – Rajiv Gandhi International Airport, Hyderabad"<<endl;
cout<<"(2) – Chhatrapati Shivaji International Airport, Mumbai"<<endl;
cout<<"(3) – Chennai International Airport, Chennai"<<endl;
cout<<"(4) – Kempegowda International Airport, Bangalore"<<endl;
cout<<"(5) – Coimbatore International Airport, Coimbatore"<<endl;
cout<<"(6) – Dabolim Airport, Goa"<<endl;
cout<<"(7) – Veer Savarkar International Airport, Port Blair"<<endl;
cout<<"(8) – Lengpui Airport, Mizoram"<<endl;
cout<<"(9) – Srinagar International Airport, Srinagar"<<endl;
cout<<"\n(0) – Go Back"<<endl;
cout<<"---------------"<<endl;
cout<<"\nEnter your choice: ";
cin>>destinationChoice;
cout<<endl<<endl;
switch(destinationChoice)
{
case 1:
destination="Rajiv Gandhi International Airport, Hyderabad";
price=2800;
break;
case 2:
destination="Chhatrapati Shivaji International Airport, Mumbai";
price=3200;
break;
case 3:
destination="Chennai International Airport, Chennai";
price=4100;
break;
case 4:
destination="Kempegowda International Airport, Bangalore";
price=4700;
break;
case 5:
destination="Coimbatore International Airport, Coimbatore";
price=5750;
break;
case 6:
destination="Dabolim Airport, Goa";
price=5000;
break;
case 7:
destination="Veer Savarkar International Airport, Port Blair";
price=7500;
break;
 case 8:
destination="Lengpui Airport, Mizoram";
price=10000;
break;
 case 9:
destination="Srinagar International Airport, Srinagar";
price=2300;
break;
case 0:
system("cls");
chooseAirlineLocal();
break;
default:
cout<<"\nInvalid Choice! Sorry, the program will exit now.\n\n";
system("cls");
 exit(0);
}
chooseTrip();
};
void chooseInternationalDestination()
{
booking b;
cout<<"Here are the available INTERNATIONAL flights:"<<endl<<endl;
cout<<"---------------"<<endl;
cout<<"(1) – BANGKOK"<<endl;
cout<<"(2) – BEIJING"<<endl;
cout<<"(3) – DUBAI"<<endl;
cout<<"(4) – HONGKONG"<<endl;
cout<<"(5) – SEOUL"<<endl;
cout<<"(6) – MACAU"<<endl;
cout<<"(7) – OSAKA"<<endl;
 cout<<"(8) – MIAMI"<<endl;
 cout<<"(9) – GENEVA"<<endl;
cout<<"\n(0) – Go Back"<<endl;
cout<<"---------------"<<endl;
cout<<"\nEnter your choice: ";
cin>>destinationChoice;
switch(destinationChoice)
{
case 1:
destination="BANGKOK";
price=7200;
break;
case 2:
destination="BEIJING";
price=22000;
break;
case 3:
destination="DUBAI";
price=7500;
break;
case 4:
destination="HONGKONG";
price=12000;
break;
case 5:
destination="SEOUL";
price=25000;
break;
case 6:
destination="MACAU";
price=30800;
break;
case 7:
destination="OSAKA";
price=28000;
break;
case 8:
 destination="MIAMI";
 price=50000;
 break;
 case 9:
 destination="GENEVA";
 price=20000;
 break;
case 0:
system("cls");
chooseAirlineInternational();
break;
default:
cout<<"\nInvalid Choice! Sorry, the program will exit now.\n\n";
system("cls");
exit(0);
}
chooseTrip();
};
void chooseTrip()
{
cout<<"\nOne-way or Round Trip?"<<endl;
cout<<"----------------------"<<endl;
cout<<"(1) – One-way Trip"<<endl;
cout<<"(2) – Round Trip"<<endl;
cout<<"----------------------"<<endl;
cout<<"\nEnter your choice: ";
cin>>tripChoice;
switch(tripChoice)
{
case 1:
trip="ONE WAY";
break;
case 2:
trip="ROUND TRIP";
price=price*2;
break;
case 0:
system("cls");
break;
default:
cout<<"\nInvalid Choice! Sorry, the program will exit now.\n\n";
system("cls");
exit(0);
}
chooseDate();
};
void chooseDate()
{
cout<<"\nchoose THE DATE OF YOUR DEPARTURE: "<<endl;
 cout<<"Enter Year(20-21): "<<endl;
 cin>>year;
 cout<<"Enter Month(<=12): "<<endl;
 cin>>month;
 cout<<"Enter Date(<=31): "<<endl;
 cin>>date;
 chooseTime();
};
void chooseTime()
{
cout<<"\Navailable TIMES FOR DEPARTURE"<<endl;
cout<<"----------------------"<<endl;
cout<<"(1) – 5:00 AM"<<endl;
cout<<"(2) – 7:45 AM"<<endl;
cout<<"(3) – 8:30 AM"<<endl;
cout<<"(4) – 9:45 AM"<<endl;
cout<<"(5) – 11:30 AM"<<endl;
cout<<"(6) – 2:30 PM "<<endl;
cout<<"(7) – 4:00 PM"<<endl;
cout<<"(8) – 6:00 PM"<<endl;
cout<<"(9) – 9:45 PM"<<endl;
cout<<"\n(0) – Go Back"<<endl;
cout<<"----------------------"<<endl;
cout<<"\nEnter your choice: ";
cin>>timeChoice;
switch(timeChoice)
{
case 1:
time="5:00 AM";
break;
case 2:
time="7:45 AM";
break;
case 3:
time="8:30 AM";
break;
case 4:
time="9:45 AM";
break;
 case 5:
time="11:30 AM";
break;
 case 6:
time="2:30 PM";
break;
 case 7:
time="4:00 PM";
break;
 case 8:
time="6:00 PM";
break;
 case 9:
time="9:45 PM";
break;
case 0:
system("cls");
chooseDate();
break;
default:
cout<<"\nInvalid Choice! Sorry, the program will exit now.\n\n";
system("cls");
exit(0);
}
chooseClass();
};
void chooseClass()
{
cout<<"\nIn which class you want to travel?"<<endl;
cout<<"\n---------------"<<endl;
cout<<"(1) – BUSINESS CLASS"<<endl;
cout<<"(2) – ECONOMY CLASS"<<endl;
cout<<"\n(0) – Go Back"<<endl;
cout<<"---------------"<<endl;
cout<<"\nEnter your choice: ";
cin>>classChoice;
switch(classChoice)
{
case 1:
classType="BUSINESS CLASS";
price=price*3;
break;
case 2:
classType="ECONOMY CLASS";
break;
case 0:
system("cls");
chooseTime();
break;
default:
cout<<"\nInvalid Choice! Sorry, the program will exit now.\n\n";
system("cls");
exit(0);
}
enterSeats();
};
void enterSeats()
{
cout<<"\nEnter number of seats to be booked: "<<endl;
cin>>seats;
price=price*seats;
getInfo();
};
 void show()
{
 int t = 1;
 int r = 1;
 cout<<setw(50)<<"Bros TICKETING"<<endl;
 cout<<setw(45)<<"AIRLINE TICKET DETAILS"<<endl<<endl;
 cout<<"|Ticket No: "<<t<<"\t\t\tReference No: "<<r;
cout<<endl<<"|_________________________";
cout<<endl<<" PASSENGER INFORMATION";
cout<<endl<<" Name: "<<fname<<""<<lname;
cout<<endl<<"|_________________________";
cout<<endl<<" FLIGHT INFORMATION";
cout<<endl<<" Origin: Indira Gandhi International Airport, Delhi";
cout<<endl<<" Destination: "<<destination;
cout<<endl<<" Date: "<<date<<"/"<<month<<"/ 20"<<year;
cout<<endl<<" Time: "<<time;
cout<<endl<<endl<<""<<trip;
cout<<endl<<""<<classType;
cout<<endl<<" Number of seat/s: "<<seats;
cout<<endl<<"_________________________";
cout<<endl<<" PRICE: "<<price<<endl;
};
void payment()
{
 cout <<"Select payment mode"<< endl;
 cout<<"1.Online Banking"<<endl;
 cout<<"2.Debit Card"<<endl;
 cout<<"3.Credit card"<<endl;
 cin>>a;
 switch (a)
 {
 case 1:
 cout<<"Choose Bank"<<endl;
 cout<<"1.State Bank of India"<<endl;
 cout<<"2.Punjab National Bank"<<endl;
 cout<<"3.Bank of Baroda"<<endl;
 cout<<"4.HDFC"<<endl;
 cout<<"5.Syndicate Bank"<<endl;
 cout<<"6.ICICI"<<endl;
 cout<<"7.Kotak Bank"<<endl;
 cout<<"8.Swiss Bank"<<endl;
 cin>>b;
 cout<<"Enter account No."<<endl;
 cin>>account;
 cout<<"Enter PIN"<<endl;
 cin>>ifc;
 if(ifc==176061)
 {
 cout<<"Enter Captcha"<<endl;
 cout<<"Enter Odd Digits Divisible By 7"<<endl;
 cout<<"21 25 97"<<endl;
 cout<<"35 87 22"<<endl;
 cout<<"58 49 30"<<endl;
 cin>>o;
 cin>>t;
 cin>>p;
 if(o==21&&t==35&&p==49)
 {
 cout<<"Enter 0 To Proceed To Payment"<<endl;
 cin>>P;
 if(P==0)
 {
 cout<<"Total Price:"<<price<<endl;
 cout<<"Payment Successful"<<endl;
 cout<<"Thanks for using"<<endl;
 }}}
 break;
 case 2:
 cout<<"Choose Bank"<<endl;
 cout<<"1.State Bank of India"<<endl;
 cout<<"2.Punjab National Bank"<<endl;
 cout<<"3.Bank of Baroda"<<endl;
 cout<<"4.HDFC"<<endl;
 cout<<"5.Syndicate Bank"<<endl;
 cout<<"6.ICICI"<<endl;
 cout<<"7.Kotak Bank"<<endl;
 cout<<"8.Swiss Bank"<<endl;
 cin>>b;
 cout<<"Enter Card No."<<endl;
 cin>>Dcard;
 cout<<"Enter CVV"<<endl;
 cin>>cvv;
 cout<<"Enter card holder name"<<endl;
 cin>>Cname;
 cout<<"Enter Captcha"<<endl;
 cout<<"Enter Odd Digits Divisible By 7"<<endl;
 cout<<"21 25 97"<<endl;
 cout<<"35 87 22"<<endl;
 cout<<"58 49 30"<<endl;
 cin>>o;
 cin>>t;
 cin>>p;
 if(o==21&&t==35&&p==49)
 {
 cout<<"Enter 0 To Proceed To Payment"<<endl;
 cin>>P;
 if(P==0)
 {
 cout<<"Total Price:"<<price<<endl;
 cout<<"Payment Successful"<<endl;
 cout<<"Thanks for using"<<endl;}}
 break;
 case 3:
 cout<<"Choose Bank"<<endl;
 cout<<"1.State Bank of India"<<endl;
 cout<<"2.Punjab National Bank"<<endl;
 cout<<"3.Bank of Baroda"<<endl;
 cout<<"4.HDFC"<<endl;
 cout<<"5.Syndicate Bank"<<endl;
 cout<<"6.ICICI"<<endl;
 cout<<"7.Kotak Bank"<<endl;
 cout<<"8.Swiss Bank"<<endl;
 cin>>b;
 cout<<"Enter Card No."<<endl;
 cin>>Ccard;
 cout<<"Enter CVV"<<endl;
 cin>>cvv;
 cout<<"Enter card holder name"<<endl;
 cin>>Cname;
 cout<<"Enter Captcha"<<endl;
 cout<<"Enter Odd Digits Divisible By 7"<<endl;
 cout<<"21 25 97"<<endl;
 cout<<"35 87 22"<<endl;
 cout<<"58 49 30"<<endl;
 cin>>o;
 cin>>t;
 cin>>p;
 if(o==21&&t==35&&p==49)
 {
 cout<<"Enter 0 To Proceed To Payment"<<endl;
 cin>>P;
 if(P==0)
{
 cout<<"Total Price:"<<price<<endl;
 cout<<"Payment Successful"<<endl;
 cout<<"Thanks for using"<<endl;
 }}}
 };
public:
 int a,b,account,t,o,p,P,cvv;
 long double ifc,Dcard,Ccard;
 char Cname[15];
int airline;
int destinationChoice;
string destination;
int tripChoice;
string trip;
 int year;
 int month;
int date;
int timeChoice;
string time;
int classChoice;
string classType;
double price;
int seats;
}b;
int main()
{
 ifstream output;
 ofstream input;
 char ch;
 int key;
 int menu_choice;
 SetConsoleTitle("AIRLINE RESERVATION SYSTEM");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t WELCOME TO PLANET WAY ROUND ";
Sleep(1500);
system ("cls");
while(menu_choice=4)
{
 cout<<"**********************"<<endl;
 cout<<"* AIRLINE RESERVATION SYSTEM *"<<endl;
 cout<<"* Instruction:-All flights will take off from: *"<<endl;
 cout<<"* **Indira Gandhi International Airport, Delhi** *"<<endl;
 cout<<"* MAIN MENU *"<<endl;
 cout<<"* LOGO ENTER YOUR CHOICE *"<<endl;
 cout<<"* ($$) *PRESS 1 FOR LOCAL BOOKING *"<<endl;
 cout<<"* ($$) *PRESS 2 FOR INTERNATIONAL BOOKING *"<<endl;
 cout<<"* *PRESS 3 FOR TICKET INFORMATION *"<<endl;
 cout<<"* *PRESS 4 TO EXIT *"<<endl;

cout<<"***********************"<<endl<<endl<<endl;
 cout<<" ENTER YOUR CHOICE: ";
 cin>>menu_choice;
 input.open("information.dat",ios::app);
 input<<b.fname<<'\n'<<b.lname<<'\n'<<b.destination<<'\n'<<b.date<<":"<<b.month<<":"<<b.year<<'\n'<<b.time<<'\n'<<b.trip<<'\n'<<b.classType<<'\n'<<b.seats<<'\n'<<b.price<<'\n';
 input.close();
 system("cls");
 switch(menu_choice)
 {
 case 1:
 b.chooseAirlineLocal();
 b.show();
 b.payment();
 break;
 case 2:
 b.chooseAirlineInternational();
 b.show();
 b.payment();
 break;
 case 3:
 cout<<"Ticket Details:"<<endl;
 output.open("information.dat",ios::in);
 while(output)
 {output.get(ch);
 cout<<ch; }
 cout<<"Ticket number:"<<b.date<<b.seats<<b.price<<endl;
 output.close();
 cout<<"Press any key";
 cin>>key;
 system("cls");
 break;
 case 4:
 exit (0);
}
}
system("pause");
return 0;
}
