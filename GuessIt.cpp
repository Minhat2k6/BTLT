#include <iostream>
#include <cstdlib>

using namespace std;

int generateRandomNumber(){
     return rand() % 100 + 1;
}
int getPlayerGuess()
{
	int guess;
	cout << endl << "Enter your guess (1..100): ";
	cin >> guess;
	return guess;
}
void printAnswer(int guess, int secretNumber){
	if (guess > secretNumber) {
         cout << "Your number is too big." << endl;
}   else if (guess < secretNumber) {
       cout << "Your number is too small." << endl;
}   else {
    cout << "Congratulation! You win." << endl;
}
}


void Gameplay()
{
	int secretNumber = generateRandomNumber();
	int guess;
	int sld=0;
	int diemplayer=10000;
	do {
	guess = getPlayerGuess();
	printAnswer(guess, secretNumber);
	diemplayer=diemplayer - 2*(100-sld);
	sld++;
	
	} while (guess != secretNumber);
	cout<<"So lan doan cua ban la :"<<sld<<endl;
	cout<<"Diem cua nguoi choi la :"<<diemplayer<<endl;
}
int main(){
	char choice;
	do {
		Gameplay();
		cout<<"Ban co muon choi tiep ko(y/n):";
		cin>>choice;
	}
	while(choice=='Y'||choice=='y');
	cout<<endl<<"Thank you";
	return 0;
}

