#include <iostream>
#include <stdlib.h>
using namespace std;

void USD_to_INR(){
	int input;
	cout << "Enter the amount in Dollars" << endl;
	cin >> input;
	cout << "In INR, " <<input<<" will be " << 72.78*input << endl;
}

void INR_to_USD(){
	int input;
	cout << "Enter the amount in Rupees" << endl;
	cin >> input;
	cout << "In USD, "<<input<<" will be "<<0.014 * input << endl;
}

void INR_to_GBP(){
	int input;
	cout << "Enter the amount in Rupees" << endl;
	cin >> input;
	cout << "In Pound, "<<input<<" will be "<<0.0097*input<< endl;
}

void GBP_to_INR(){
	int input;
	cout << "Enter the amount in Pounds" << endl;
	cin >> input;
	cout << "In INR, "<<input<<" will be "<<102.95*input<< endl;
}

int main(){
	int n;
	while(1){
		cout << "Enter\n1. For coversion USD to INR\n2. For conversion INR to USD\n3. For conversion INR into GBP(British Pound)\n4. For conversion GBP to INR\n5. exit" << endl;
		cin >> n;
		switch(n){
			case 1: USD_to_INR();
					break;
			case 2: INR_to_USD();
					break;
			case 3: INR_to_GBP();
					break;
			case 4: GBP_to_INR();
					break;
			case 5: exit(0);
					break;
			default: cout << "Invalid choice" << endl;
					break;
		}
	}
	return 0;
}
