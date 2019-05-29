/*
 * Lab1.cpp
 *
 *  Created on: Feb 14, 2019
 *  Author: Humpher Owusu
 *  Author: Quinlan Kauffman
 */


#include<iostream>
#include<stdlib.h>

using namespace std;

void printStars(); //Function declaration
bool primeTester(int x); //Function declaration
void termsCal(); //Function declaration
void termsFind(); //Function declaration
void timeTable(int y); //Function declaration
void functimeTable(); //Function declaration
int collatzConjecture(int number); //Function declaration
void leapYearCalculator(); //Function declaration
void patterndrawer(int x); //Function declaration
void modifiedtester(int x, int y); //Function declaration

int main(){

	int posNumber;

	cout<<"Question 1:  "<<endl;

	cout<<"Hello World"<<endl;

	printStars();

	cout<<"Problem 3:  \n";
	cout<<boolalpha<<primeTester(2)<<endl; //True
	cout<<boolalpha<<primeTester(7)<<endl; //True
	cout<<boolalpha<<primeTester(9)<<endl;	//	False

	printStars();

	cout<<"Problem 4:  \n";
	cout<<"The total for every 20th term is:  "<<endl;
	termsCal();

	printStars();

	cout<<"Problem 5:  \n";
	cout<<"The term is:  "<<endl; //447 terms
	termsFind();

	printStars();
	cout<<"Problem 6:  \n";
	cout<<"The table is:  "<<endl;
	timeTable(2); //2,4,6,8,10,12,14,16,18,20,22,24
	timeTable(10); //10,20,30,40,50,60,70,80,90,100,110,120
	timeTable(3);	//3,6,9,12,15,18,21,24,27,30,33,36

	printStars();
	cout<<"Problem 7:  \n";
	cout<<"The table is:  "<<endl;
	functimeTable();


	printStars();
	cout<<"Problem 8:  \n";
	cout<<"Please enter a natural positive number:    ";
	cin>>posNumber;
	cout<<collatzConjecture(posNumber);

	printStars();
	cout<<"Problem 9:  \n";
	 leapYearCalculator();

	 printStars();
	 cout<<"Problem 10:  \n";
	 patterndrawer(7);
	 cout<<endl;
	 patterndrawer(5);
	 cout<<endl;
	 patterndrawer(10);

	 printStars();
	 cout<<"Problem 11:  \n";
	 modifiedtester(1,50);



	return 0;
}


void printStars(){

	//Problem 2
	cout<<"\n";
	cout<<"******************************"<<endl;
	cout<<endl;
}

bool primeTester(int x){

//Problem 3
	if(x==1){
		return false;
	}

	if(x==2){

		return true;
	}

	int divisor = 2;

	while(divisor < x){

		if(x % divisor == 0){

			return false;
		}

		divisor++;
	}

	return true;
}

void termsCal(){

	//Problem 4

	int sum = 0;

	for(int i=1; i<=300; i++){

		sum = sum + i;

		if(i % 20 == 0){
			cout<<sum<<endl;
		}
	}
}

void termsFind(){

	//Problem 5

	int sum = 0;
	int x = 0;
	while(sum<100000){

		x = x+1;
		sum = sum + x;


	}

	cout<<x<<endl;

	}




void timeTable(int y){

	//Problem 6

	for(int i = 1; i<=12; i++){

		cout<< i * y<<endl;
	}
}

void functimeTable(){

	//Problem 7

	for(int i=1; i<=12; i++){

		 timeTable(i);
	}
}

int collatzConjecture(int number){

	//Problem 8

	int count = 0;

	while(number != 1){

		if(number % 2 == 0){
			number = number/2;
		}

		else{
			number = (number * 3) + 1;
		}

		count = count + 1;
	}

	cout << "Steps for Collatz Conjecture: " << count<< endl;
	return count;
}

void leapYearCalculator(){

	//Problem 9

	int year = 2017;

	while(year != 2417){
		if(year%4 == 0){
			if(year%100 == 0){
				if(year%400 == 0){
					cout<<"This year is a leap year:  ";
					cout<<year<<endl;
				}

			}

			else{
				cout<<"This year is a leap year:  ";
				cout<<year<<endl;
			}
		}


		year++;

	}

}

void patterndrawer(int x){

	//Problem 10

	if ((x%2) == 0) {
			x = x+1;
	}
	x = (x*2) -1 ;
	for (int row = 0; row < x; row++) {
		for (int col = 0; col < x; col++) {
			if (row == col || row + col == x - 1) {
				cout<<"*" ;
			}
			else {
				cout << " " ;
			}
		}
		cout <<"\n" ;
	}
}

void modifiedtester(int x, int y){


	//Problem 11

	for(int i = x + 1; i<y; i++){

		cout<<i<<endl;

		if( collatzConjecture(i) != 0){

			cout<<"Collatz Conjecture is still working  "<<endl;
		}

	}
}











