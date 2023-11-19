#include <iostream>
#include <conio.h>
#include <list>
using namespace std;


int fact(int n){
	int factn;
	factn=1;	
	for(int i=n; i>0;i--){
		factn*=i;
	}
	return factn;
}
int main()
	{
		
		bool bool_continue_situation=true;
		int user_select;
		string str_continue_situation;
		int next_member;
		int n;
		int r_number;
		int n_number;
		
		while(bool_continue_situation){	
			system("cls");
			//user menu
			cout<<"welcome to your calculator\n";
			cout<<"1- recognize a prime number of a composite one (+ tajzie)\n";
			cout<<"2- see the Fibonacci sequence(1,1,2,...,n) \n";
			cout<<"3- calculate n! \n";
			cout<<"4- entekhabe R ta az N ta\n";//error
			cout<<"5- chap adad haye aval az 0 ta n\n";	
			cout<<"enter your selection: ";
			cin>>user_select;
			system("cls");
		
			//app main body
			switch(user_select){
				case 1:
					cout<<"\t \t \t -- this app recognize that a number is prime or composite -- \n";
					//get user test number
					int user_number;
					cout<<"------------------------------\n";
					cout<<"enter a number: ";
					cin>>user_number;
					cout<<"------------------------------\n";
					//2 3 5 7 9 
					int play_number;
					int first_enter;
					int first_member;
					int second_member;
					play_number=user_number;
					cout<<"tajzie : ";
					do{
						if(user_number%2==0){
							user_number/=2;
							if(first_enter==0){
								cout<<"2";
								first_enter+=1;
							}
							else{
								cout<<" *2";
							}
							
						}
						if(user_number%3==0){
							user_number/=3;
							if(first_enter==0){
								cout<<"3";
								first_enter+=1;
							}
							else{
								cout<<" *3";
							}
						}
						if(user_number%5==0){
							user_number/=5;
							if(first_enter==0){
								cout<<"5";
								first_enter+=1;
							}
							else{
								cout<<" *5";
							}
						}
						if(user_number%7==0){
							user_number/=7;
							if(first_enter==0){
								cout<<"7";
								first_enter+=1;
							}
							else{
								cout<<" *7";
							}
						}
						if(user_number%11==0){
							user_number/=11;
							if(first_enter==0){
								cout<<"11";
								first_enter+=1;
							}
							else{
								cout<<" *11";
							}
						}
						if(user_number%13==0){
							user_number/=13;
							if(first_enter==0){
								cout<<"13";
								first_enter+=1;
							}
							else{
								cout<<" *13";
							}
						}
						if(user_number%17==0){
							user_number/=17;
							if(first_enter==0){
								cout<<"17";
								first_enter+=1;
							}
							else{
								cout<<" *17";
							}
						}
						if(user_number%19==0){
							user_number/=19;
							if(first_enter==0){
								cout<<"19";
								first_enter+=1;
							}
							else{
								cout<<" *19";
							}
						}
					}while(user_number%2==0 || user_number%3==0 || user_number%5==0 || user_number%7==0 );
					cout<<user_number;
					if(user_number== play_number){
						cout<<" * 1"<<endl;
						cout<<"this is adade aval";	
					}
					else{
						if(play_number==2||play_number==3||play_number==5||play_number==7||play_number==11||play_number==13||play_number==17||play_number==19)
							{
								cout<<"this is adade aval";
							}
							else{
							cout<<endl<<"this is not adade aval";
							}
					}
					getch();
					break;	
					
				case 2:
					first_member=1;
					second_member=1;
					cout<<"\t \t \t -- you just enter n and this app will print fibonachi for you  -- \n";
					cout<<"until which member of Fibonacci sequence do you want to continue : ";
					cin>>n;
					cout<<first_member<<" , "<<first_member<<" , ";
					for(int i=0;i<n-2;i++){
						next_member=first_member+second_member;
						if(i==n-3){
							cout<<"\t \a"<<"|"<< next_member<<"|";
						}
						else{
							cout<<next_member;
						}
						first_member=second_member;
						second_member=next_member;
						cout<<" , ";
					}
					cout<<"...";
					getch();
					break;
					
				case 3 :
					cout<<"\t \t \t -- this app will calculate n! for you  -- \n";
					cout<<"enter your n to get n!: ";
					cin>>n;
					cout<<fact(n);
					getch();
					break;
					
				case 4:
					cout<<"\t \t \t -- this app will calculate r select from n-- \n";
					int resualt;
   					cout<<"Enter n : ";
   					cin>>n_number;	
					
   					cout<<"\nEnter r : ";
   					cin>>r_number;
   					
					resualt=fact(n_number) / (fact(r_number) * fact(n_number-r_number));
   					cout << "\nThe result : " << resualt;
   					getch();
					break;
				case 5:
					cout<<"enter the n value: ";
					cin>>n;
					for(int i=2;i<n;i++){
						if(i%2==0||i%3==0||i%5==0||i%7==0){
							if(i==2||i==3||i==5||i==7){
								cout<<i<<" ";
							}
							continue;
						}else{
							cout<<i<<" ";
						}
					}
					getch();
					break;
			}
				
			
		}
		//make sure that user do not have any work with app
		cout<<"\n do you want to continue? (y/n): ";
		cin>>str_continue_situation;
		if(str_continue_situation!="y"){
			bool_continue_situation=false;
		}
	}
	
	
