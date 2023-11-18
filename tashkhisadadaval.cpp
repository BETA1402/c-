#include <iostream>
#include <conio.h>
#include <list>
using namespace std;
int factn=1;

int fact(int n){
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
			cout<<"1- recognize a prime number of a composite type \n";
			cout<<"2- see the Fibonacci sequence \n";
			cout<<"3- calculate n! \n";
			cout<<"4-  entekhabe R ta az N ta";
			cin>>user_select;
		
			//hi i am armin
			//app main body
			switch(user_select){
				case 1:
					//get user test number
					int user_number;
					cout<<"enter a number: ";
					cin>>user_number;
					//2 3 5 7 9 
					int play_number;
					int first_enter;
					
					int factn;
					int first_member;
					int second_member;
					play_number==user_number;
					cout<<"tajzie : ";
					do{
						if(user_number%2==0){
							user_number/=2;
							if(first_enter==0){
								cout<<"2";
								first_enter+=1;
							}
							else{
								cout<<"*2";
							}
							
						}
						if(user_number%3==0){
							user_number/=3;
							if(first_enter==0){
								cout<<"3";
								first_enter+=1;
							}
							else{
								cout<<"*3";
							}
						}
						if(user_number%5==0){
							user_number/=5;
							if(first_enter==0){
								cout<<"5";
								first_enter+=1;
							}
							else{
								cout<<"*5";
							}
						}
						if(user_number%7==0){
							user_number/=7;
							if(first_enter==0){
								cout<<"7";
								first_enter+=1;
							}
							else{
								cout<<"*7";
							}
						}
						if(user_number%11==0){
							user_number/=11;
							if(first_enter==0){
								cout<<"11";
								first_enter+=1;
							}
							else{
								cout<<"*11";
							}
						}
						if(user_number%13==0){
							user_number/=13;
							if(first_enter==0){
								cout<<"13";
								first_enter+=1;
							}
							else{
								cout<<"*13";
							}
						}
						if(user_number%17==0){
							user_number/=17;
							if(first_enter==0){
								cout<<"17";
								first_enter+=1;
							}
							else{
								cout<<"*17";
							}
						}
						if(user_number%19==0){
							user_number/=19;
							if(first_enter==0){
								cout<<"19";
								first_enter+=1;
							}
							else{
							cout<<"*19";
							}
						}
					}while(user_number%2==0 || user_number%3==0 || user_number%5==0 || user_number%7==0 );
					cout<<"*"<<user_number;
					if(user_number==play_number){
						cout<<" * 1"<<endl;
						cout<<"this is adade aval";	
					}
					else{
						cout<<endl<<"this is not adade aval";
					}
					getch();
					break;	
					
				case 2:
					
					first_member=1;
					
					second_member=1;
					//int next_member;
					//int n;
					
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
					cout<<"enter your n to get n!: ";
					cin>>n;
					//factn=1;	
					//for(int i=n; i>0;i--){
					//	factn*=i;
					//}
					//cout<<factn;
					cout<<fact(n);
					getch();
					break;
					
				case 4:
					int tarkib_fact_n,tarkib_fact_r;
					cout<<"enter your r (entekhabe r ta az n ta):";
					cin>>r_number;
					cout<<"enter your n (entekhabe r ta az n ta):";
					cin>>n_number;
					list<int> n_fact_list[n_number];
					//i=-1
					for(int i=0;i<n_number;i++){	
						n_fact_list[i]=i+1;
						cout<<n_fact_list[i];
					}
					//cout<< (fact(n_number-1) /(fact(n_number-r_number-1) * fact(r_number)))+ ((fact(n_number-r_number-2) * fact(r_number-1)));
					cout<<n_fact_list[n_number-1];
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
	
	

