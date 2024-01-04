#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
void firstMenu();

class Management
{ 
  public:
     Management()
	 {
	 	firstMenu();
	 } 
};

class Details
{
	public:
		static string name,gender;
		int phNo;
		int age;
		string add;
		static int cID;
		char arr[100];
		
		void information()
		{
		    cout<<"Enter the Customer ID : ";
			cin>>cID;
		    cout<<"\nEnter the Customer Name : ";
			cin>>name;
			cout<<"\nEnter the Customer Age : ";
			cin>>age;
			cout<<"\nEnter the Customer Address : ";
			cin>>add;
			cout<<"\nEnter the Customer Gender : ";
			cin>>gender;
			cout<<"\nYour Details Are Saved With us";
		}
};

int Details::cID;
string Details::name;
string Details::gender;

class registration
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights()
		{
			string flightN[]={"India","Canada","Dubai","United Kingdom","USA","Australia"};
			
			for(int a=0;a<6;a++)
			{
				cout<<(a+1)<<" Flight To "<<flightN[a]<<endl;
			}
			cout<<"\nWELCOME TO AIRLINES"<<endl;
			cout<<"\nPRESS THE NUMBER OF COUNTRY OF WHICH YOU WANT TO BOOK FLIGHTS = ";
			cin>>choice;
			
			switch(choice)
			{
				case 1:
					{
						cout<<"\nWelcome to AIR INDIA"<<endl;
						cout<<"\nAtithi Dev Bhav"<<endl;
						cout<<"\n______________________________________";
						cout<<"\nFOLLOWING ARE THE FLIGHTS "<<endl;
						
						cout<<"1.AirIn . 234"<<endl;
						cout<<"\t04-01-2024 , 7:00 AM , 4hrs ,Rs. 25000"<<endl;
						cout<<"2.AirIn . 237"<<endl;
						cout<<"\t06-01-2024 , 3:00 PM , 3hrs ,Rs. 20000"<<endl;
						cout<<"3.AirIn . 239"<<endl;
						cout<<"\t08-01-2024 , 3:00 AM , 4hrs ,Rs. 25000"<<endl;
						
						cout<<"Enter Your Choice of Flight: ";
						cin>>choice1;
						if(choice1==1)
						{
							charges=25000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AirIn . 234"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges=20000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AirIn . 237"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=25000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AirIn . 239"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else
						{
							cout<<"INVALID INPUT,shifting to the PREVIOUS MENU "<<endl;
							flights();
						}
						cout<<"\nPress Any Key To Go Back To Main Menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							firstMenu();
						}
						else
						{
							firstMenu();
						}
					}
					case 2:
					{
					    cout<<"\nWelcome to AIR CANADA"<<endl;
						cout<<"\nFLY WITH COMFORT AND EASE"<<endl;
						cout<<"\n______________________________________";
						cout<<"\nFOLLOWING ARE THE FLIGHTS "<<endl;
						
						cout<<"1.AirCn . 345"<<endl;
						cout<<"\t04-01-2024 , 5:00 AM , 5hrs ,Rs. 35000"<<endl;
						cout<<"2.AirCn . 347"<<endl;
						cout<<"\t06-01-2024 , 6:00 PM , 4hrs ,Rs. 30000"<<endl;
						cout<<"3.AirCn . 349"<<endl;
						cout<<"\t08-01-2024 , 10:00 PM , 5hrs ,Rs. 35000"<<endl;
						
						cout<<"Enter Your Choice of Flight: ";
						cin>>choice1;
						if(choice1==1)
						{
							charges=35000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AirCn . 345"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges=30000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AirCn . 347"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=35000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AirCn . 349"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else
						{
							cout<<"INVALID INPUT,shifting to the PREVIOUS MENU "<<endl;
							flights();
						}
						cout<<"\nPress Any Key To Go Back To Main Menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							firstMenu();
						}
						else
						{
							firstMenu();
						}
				    }
				    case 3:
				    {
						cout<<"\nWelcome to DUBAI EMIRATES"<<endl;
						cout<<"\nWELCOME TO THE JPURNEY WITH WINGS,FLY HIGH WITH SECURITY"<<endl;
						cout<<"\n______________________________________";
						cout<<"\nFOLLOWING ARE THE FLIGHTS "<<endl;
						
						cout<<"1.DUB . 401"<<endl;
						cout<<"\t04-01-2024 , 6:00 AM , 4hrs ,Rs. 20000"<<endl;
						cout<<"2.AirIn . 403"<<endl;
						cout<<"\t06-01-2024 , 4:00 PM , 3hrs ,Rs. 15000"<<endl;
						cout<<"3.AirIn . 405"<<endl;
						cout<<"\t08-01-2024 , 1:00 AM , 4hrs ,Rs. 20000"<<endl;
						
						cout<<"Enter Your Choice of Flight: ";
						cin>>choice1;
						if(choice1==1)
						{
							charges=20000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT DUB . 401"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges=15000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT DUB . 403"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=20000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT DUB . 405"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else
						{
							cout<<"INVALID INPUT,shifting to the PREVIOUS MENU "<<endl;
							flights();
						}
						cout<<"\nPress Any Key To Go Back To Main Menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							firstMenu();
						}
						else
						{
							firstMenu();
						}
					}
					case 4:
					{	
						cout<<"\nWelcome to BRITISH AIRWAYS"<<endl;
						cout<<"\nENJOY FLYING WITH US"<<endl;
						cout<<"\n______________________________________";
						cout<<"\nFOLLOWING ARE THE FLIGHTS "<<endl;
						
						cout<<"1.BriAir . 101"<<endl;
						cout<<"\t05-01-2024 , 4:00 AM , 4hrs ,Rs. 45000"<<endl;
						cout<<"2.BriAir . 103"<<endl;
						cout<<"\t07-01-2024 , 7:00 PM , 3hrs ,Rs. 40000"<<endl;
						cout<<"3.AirIn . 239"<<endl;
						cout<<"\t10-01-2024 , 2:00 AM , 4hrs ,Rs. 45000"<<endl;
						
						cout<<"Enter Your Choice of Flight: ";
						cin>>choice1;
						if(choice1==1)
						{
							charges=45000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT BriAir .101"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges=40000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT BriAir . 103"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=45000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT BriAir . 104"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else
						{
							cout<<"INVALID INPUT,shifting to the PREVIOUS MENU "<<endl;
							flights();
						}
						cout<<"\nPress Any Key To Go Back To Main Menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							firstMenu();
						}
						else
						{
							firstMenu();
						}
					}
					case 5:
					{
					  cout<<"\nWelcome to AMERICAN AIRLINES"<<endl;
						cout<<"\nENJOY THE SAFE AND EXOTIC FLY WITH US "<<endl;
						cout<<"\n______________________________________";
						cout<<"\nFOLLOWING ARE THE FLIGHTS "<<endl;
						
						cout<<"1.Air.AMR . 634"<<endl;
						cout<<"\t05-01-2024 , 10:00 AM , 5hrs ,Rs. 40000"<<endl;
						cout<<"2.AirAMR . 637"<<endl;
						cout<<"\t07-01-2024 , 1:00 PM , 4hrs ,Rs. 35000"<<endl;
						cout<<"3.AirAMR . 639"<<endl;
						cout<<"\t11-01-2024 , 9:00 PM , 5hrs ,Rs. 40000"<<endl;
						
						cout<<"Enter Your Choice of Flight: ";
						cin>>choice1;
						if(choice1==1)
						{
							charges=40000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AirAMR . 634"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges=35000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AirAMR . 637"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=40000;
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AirAMR . 639"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else
						{
							cout<<"INVALID INPUT,shifting to the PREVIOUS MENU "<<endl;
							flights();
						}
						cout<<"\nPress Any Key To Go Back To Main Menu"<<endl;
						cin>>back;
						
						if(back==1)
						{
							firstMenu();
						}
						else
						{
							firstMenu();
						}
					}		
				    case 6:
					{
						cout<<"\nWelcome to QUANTAS"<<endl;
						cout<<"\nFLY HIGH WITH US "<<endl;
						cout<<"\n______________________________________";
						cout<<"\nFOLLOWING ARE THE FLIGHTS "<<endl;
						
						cout<<"1.QUA . 734"<<endl;
						cout<<"\t04-01-2024 , 11:00 AM , 4hrs ,Rs. 35000"<<endl;
						cout<<"2.QUA . 737"<<endl;
						cout<<"\t06-01-2024 , 2:00 PM , 3hrs ,Rs. 20000"<<endl;
						cout<<"3.QUA . 739"<<endl;
						cout<<"\t08-01-2024 , 6:00 PM , 4hrs ,Rs. 35000"<<endl;
						
						cout<<"Enter Your Choice of Flight: ";
						cin>>choice1;
						if(choice1==1)
						{
							charges=35000;
							cout<<"\n____________________________________________________________";
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT QUA . 734"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else if(choice1==2)
						{
							charges=20000;
							cout<<"\n____________________________________________________________";
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT QUA . 737"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=35000;
							cout<<"\n____________________________________________________________";
							cout<<"\nYOU HAVE SUCCESSFULLY BOOKED THE FLIGHT QUA . 739"<<endl;
							cout<<"\nYou can go back to menu and take ticket"<<endl;
						}
						else
						{
							cout<<"INVALID INPUT,shifting to the PREVIOUS MENU "<<endl;
							flights();
						}
						cout<<"\nPress Any Key To Go Back To Main Menu "<<endl;
						cin>>back;
						
						if(back==1)
						{
							firstMenu();
						}
						else
						{
							firstMenu();
						}
					}
					default:
						{
							cout<<"INVALID INPUT, Shifting to the Main Menu"<<endl;
							firstMenu();
							break;
						}
						
			}
	    }
};
float registration::charges;
int registration::choice;

class ticket : public registration,Details
{
	public:
		void Bill()
		{
			string destination="";
			ofstream outf("records.txt");
			{
				outf<<"     AIRINDO FLIGHTS     "<<endl;
				outf<<"          TICKET          "<<endl;
				outf<<"__________________________"<<endl;
				
				outf<<"Customer ID : "<<Details::cID<<endl;
				outf<<"Customer Name : "<<Details::name<<endl;
				outf<<"Customer Gender : "<<Details::gender<<endl;
				outf<<"Description"<<endl<<endl;
				
				if(registration::choice==1)
				{
					destination="INDIA";
				}
				else if(registration::choice==2)
				{
					destination="CANADA";
				}
				else if(registration::choice==3)
				{
					destination="DUBAI";
				}
				else if(registration::choice==4)
				{
					destination="UNITED KINGDOM";
				}
				else if(registration::choice==5)
				{
					destination="USA";
				}
				else if(registration::choice==6)
				{
					destination="AUSTRALIA";
				}
				outf<<"Destination:\t\t"<<destination<<endl;
				outf<<"Flight Cost:\t\t"<<registration::charges<<endl;
			}
			outf.close();
		}
		void dispBill()
		{
			ifstream ifs("records.txt");
			{
				if(!ifs)
				{
					cout<<"File Error !"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr,100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
};
void firstMenu()
{
	int lc,sc,back;
	cout<<"\n";
	cout<<"\t\t\t\t           AirIndo Airlines"<<endl;
	cout<<"\n_____________________________________________________________________________________________________________";
	cout<<"\n";
	cout<<"\n\t\t\t\t              MAIN MENU"<<endl;
	cout<<"_____________________________________________________________________________________________________________";
	cout<<"\n\t\t\t\t\tFollow The Instructions\t";
	cout<<"\n\n";
	cout<<"\t\t           |     PRESS 1 : To Add Customer Details     \t|"<<endl;
	cout<<"\t\t           |     PRESS 2 : To Register Flight          \t|"<<endl;
	cout<<"\t\t           |     PRESS 3 : For Ticket and Charges      \t|"<<endl;
	cout<<"\t\t           |     PRESS 4 : To EXIST                    \t|"<<endl;
	cout<<"_____________________________________________________________________________________________________________";
	
	cout<<"\nEnter Choice : ";
	cin>>lc;
	
	Details d;
	registration r;
	ticket t;
	
	switch(lc)
	{
		case 1:
			{ 
			 cout<<"\n\t\tCUSTOMERS\t\t"<<endl;
			 d.information();
			 cout<<"Press ANY KEY TO GO BACK TO MAIN MENU ";
			 cin>>back;
			 if(back==1)
			 {
			 	firstMenu();
			 }
			 else
			 {
			 	firstMenu();
			 }
			 break;
			}
			
		case 2:
			{
			 cout<<"\n\t\tBOOK A FLIGHT USING THIS SYSTEM:"<<endl;
			 r.flights();
			 break;		
			}
		case 3:
			{
			 cout<<"\n\t\tGET YOUR TICKET"<<endl;
			 cout<<"\n_______________________________________________";
			 t.Bill();
			 cout<<"\n\t\tYour Ticket is Printed, You Can Collect it";
			 cout<<"\n_______________________________________________";
			 cout<<"\n\t\tPRESS 1 to DISPLAY YOUR TICKET = ";
			 cin>>back;
			 if(back==1)
			 {
			 	t.dispBill();
			 	cout<<"\t\tPRESS ANY KEY TO GO BACK TO MAIN MENU";
			 	cin>>back;
			 	if(back==1)
			 	{
			 		firstMenu();
				}
				else
				{
					firstMenu();
				}
			 }
			 else
			 {
			 	firstMenu();
			 }
			 break;
		    }
		case 4:
			{
			  cout<<"!!!! THANK YOU !!!!";
			  break;
			}
			default :
				{
					cout<<"\nINVALID INPUT,\nPLEASE TRY AGAIN"<<endl;
					firstMenu();
					break;
				}
	}
	



}




int main()
{
   Management aero;
   return 0;	
}

