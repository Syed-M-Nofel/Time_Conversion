#include <iostream>
#include <string>
using namespace std;

void stdtomlt();
void mlttostd();
void displaytime(int hour,int min, string amorpm);
void displaymlttime(int hour, int min);

int main() 
{
	char c;
	cout<<"\t \t Program for time conversion "; cout<<endl;
	cout<<"What type of conversion will  you choose "; cout<<endl;
	cout<<"A.  12-24 Hour Notation \n Or\nB.24-12 Hour Notation "; cout<<endl;
	cout<<"\nWhat is your choice of Notation : ";  cin>>c; cout<<endl;
	switch(c)
	{
		case 'a':
		case 'A':
				stdtomlt();
				break;
		case 'b':
		case 'B':
				mlttostd();
				break;					
	}
	return 0;
}

void stdtomlt()
{
	int hour;
	int minute;
	string amorpm="";
	cout<<"Hour :"; 	cin>>hour; 			cout<<endl;
	cout<<"Minutes :"; 	cin>>minute; 		cout<<endl;
	cout<<"AM OR PM :"; cin>>amorpm; 		cout<<endl;
		if (amorpm =="PM" || amorpm=="pm")
			{
				hour=hour+12;
			}
			displaymlttime(hour,minute); 
}

void mlttostd()
{
	int hour;
	int minute;
	string amorpm="";
	cout<<"Hour :"; 	cin>>hour; 			cout<<endl;
	cout<<"Minutes :"; 	cin>>minute; 		cout<<endl;

	if(hour%12 ==0)
		amorpm="AM";
	else if(hour%12>0)
	{
		amorpm="PM";
		hour=hour%12;
	}
	displaytime(hour,minute,amorpm);	
}

void displaytime(int hour,int minute,string amorpm)
{
	char zero;
	if(minute<10)
		{
			zero='0';
		}	
	cout<<endl<<"Time :"<<hour<<":"<<zero<<minute<<" "<<amorpm<<endl;
}


void displaymlttime(int hour, int minute)
{
	char zero;
	char hrzero;
	if(hour<10)
	{
		hrzero='0';
	}
	if(minute<10)
	{
		zero='0';
	}
	cout<<endl<<"Time :"<<hrzero<<hour<<":"<<zero<<minute;
	
}
