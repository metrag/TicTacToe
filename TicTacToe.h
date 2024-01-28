#include <iostream>
#include <string>

#define X 3
#define Y 3

#define EMPTY_SIGN '*'

#define START_WORD "Tic Tac toe\nEnter your sign: x / o - "
#define INPUT_WORD "Enter point's number - "

//точка поля
class Point{
private:
	char sign;
	bool empty;
public:
	Point(){
		this->empty = true;
		this->sign = EMPTY_SIGN;
	}
	char get_val(){
		return sign;
	}
};

//игровая карта
class Map{
private:
	int x;
	int y;
	Point** ptr;
public:
//конструктор
	Map(const int& x, const int& y){
		this->x = x;
		this->y = y;
		
		//инициализация карты
		ptr = new Point*[Y];
		for(int i = 0; i < y; i++){
			
			ptr[i] = new Point[X];
			
			for(int j = 0; j < x; j++){
				Point t;
				ptr[i][j] = t;
			}
		}
		
	}
	
//отображение
	void show(){
		for (int i = 0; i < y; i++){
			for(int j = 0; j < x; j++){
				std::cout << ptr[i][j].get_val();
			}
			
			std::cout << "\t";
			for(int j = 1; j<=x; j++)
				std::cout << i+j;
			
			std::cout << std::endl;
		}
	}
};

//класс игрового процесса
class Game{
private:
	char pl_sign;
	char pl_num;
public:
	
	void start(){
		std::cout << START_WORD << std::endl;
		std::cin >> pl_sign;
		system("cls");
	}
	void input(){
		std::cout << INPUT_WORD;
		std::cin >> pl_num;
		system("cls");
	}
};
