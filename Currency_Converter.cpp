#include <iostream>
#include <stdlib.h>
using namespace std;

void to_INR(){
	int input;
	cout << "Enter the amount in Dollars" << endl;
	cin >> input;
	cout << "In INR, " <<input<<" will be " << 72.39*input << endl;
}

void to_GBP(){
	int input;
	cout << "Enter the amount in Dollars" << endl;
	cin >> input;
	cout << "In Pound, "<<input<<" will be "<<0.70*input<< endl;
}

void to_EURO(){
	int input;
	cout << "Enter the amount in Dollars" << endl;
	cin >> input;
	cout << "In EURO, "<<input<<" will be "<<0.82*input<< endl;
}

void to_JAPAN_YEN(){
	int input;
	cout << "Enter the amount in Dollars" << endl;
	cin >> input;
	cout << "In Japanese Yen, "<<input<<" will be "<<109.86*input<<endl;
}

void to_AUSTRALIAN_DOLLAR(){
	int input;
	cout << "Enter the amount in Dollars" << endl;
	cin >> input;
	cout << "In Australian dollar, "<< input<<" will be "<<1.30 *input<< endl;
}

void to_CANADIAN_DOLLAR(){
	int input;
	cout << "Enter the amount in Dollars" << endl;
	cin >> input;
	cout << "In canadian dollar, "<<input<<" will be "<<1.21*input<<endl;
}

void to_SINGAPORE_DOLLAR(){
	int input;
	cout << "Enter the amount in Dollars" << endl;
	cin >> input;
	cout <<"In Singapore dollar, "<<input<<" will be "<<1.32*input<<endl;
}

void to_RUSSIAN(){
	int input;
	cout << "Enter the amount in Dollars" << endl;
	cin >> input;
	cout <<"In Russian Ruble, "<<input<<" will be "<<73.20*input<<endl;
}

int main(){
	int n;
	while(1){
		cout << "Enter the no for conversion\n1. For conversion USD to INR\n2. For conversion USD to Euro\n3. For conversion USD to GBP(British Pound)\n4. For conversion USD to Japanese Yen\n5. For conversion USD to Australian Dollar\n6. For conversion USD to Canadian dollar\n7. For conversion USD to Singapore Dollar\n8. For conversion USD to Russian Ruble\n9. exit" << endl;
		cin >> n;
		switch(n){
			case 1: to_INR();
					break;
			case 2: to_EURO();
					break;
			case 3: to_GBP();
					break;
			case 4: to_JAPAN_YEN();
					break;
			case 5: to_AUSTRALIAN_DOLLAR();
					break;
			case 6: to_CANADIAN_DOLLAR();
					break;
			case 7: to_SINGAPORE_DOLLAR();
					break;
			case 8: to_RUSSIAN();
					break;
			case 9: exit(0);
					break;
			default: cout << "Invalid choice" << endl;
					break;
		}
	}
	return 0;
}
