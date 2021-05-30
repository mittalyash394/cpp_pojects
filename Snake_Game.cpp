#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;

bool GameOver;
const int width = 20;
const int height = 20;
int x, y, FruitX, FruitY, score;
int tailX[100], tailY[100];
int ntail;
enum eDirection{
	STOP =0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void SetUp(){
	GameOver= false;
	dir = STOP;
	x = width/2;
	y = height/2;
	FruitX = rand()% width;
	FruitY = rand()% height;
	score = 0;
}

void draw(){
	system("cls");
	for(int i=0; i<width+2; i++){
		cout << "#";
	}
	cout << endl;
	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){
			if(j==0){
				cout << "#";
			}
			if(i == y && j == x){
				cout << "0";
			}
			else if(i == FruitY && j == FruitX){
				cout << "F";
			}
			else{
				bool print = false;
				for(int k =0; k<ntail; k++){
					if(tailX[k] == j && tailY[k] == i){
						cout << "o";
						print = true;
					}
				}
				if(!print){
					cout << " ";
				}
			}
			if(j== width-1){
				cout << "#";
			}
		}
		cout << endl;
	}
	for(int i=0; i<width+2; i++){
		cout << "#";
	}
	cout << endl;
	cout << "Score: "<< score<< endl;
	cout << endl;
}

void Input(){
	if(_kbhit()){
		switch(_getch()){
			case 'a':
				dir = LEFT;
				break;
			case 'd':
				dir = RIGHT;
				break;
			case 'w':
				dir = UP;
				break;
			case 's':
				dir = DOWN;
				break;
			default:
				GameOver = true;
				break;
		}
	}
}

void logic(){
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = x;
	tailY[0] = y;
	for(int i=1; i<ntail; i++){
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prevY;
	}
	switch(dir){
		case LEFT:
			x--;
			break;
		case UP:
			y--;
			break;
		case DOWN:
			y++;
			break;
		case RIGHT:
			x++;
			break;
		default:
			break;
	}
	if(x > width || x < 0 || y > height || y < 0){
		GameOver = true;
	}
	for(int i=0; i<ntail; i++){
		if(tailX[i] == x && tailY[i] == y){
			GameOver = true;
		}
	}
	if(x==FruitX && y==FruitY){	
		score = score + 10;
		FruitX = rand()%width;
		FruitY = rand()%height;
		ntail++;
	}
}


int main(){
	SetUp();
	while(!GameOver){
		draw();
		Input();
		logic();
		Sleep(100);
	}
	return 0;
}
