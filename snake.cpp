#include <iostream>
#include <windows.h>                         // COORD

using namespace std;

COORD CurrentPosition;                        // musimy umiescic glowe snake'a na ukladzie kartezjanskim (https://docs.microsoft.com/en-us/windows/console/coord-str#examples v https://www.c-lang.thiyagaraaj.com/tutorials/c-concepts/c-structures)

int x;
int y;

void Location(int x,int y)
{
	x = CurrentPosition.X;					  // okreslamy naszego x jako wspolrzedna X, oraz y jak Y na ukladzie kartezjanskim - miejsce na ukladzie okreslamy jako Location
	y = CurrentPosition.Y;
}

class Indicator							  // tworzymy obiekt - poczatkowo bedzie to glowa naszego snake'a
{
public:
	int x;
	int y;
	Indicator(int x, int y)
	{
		this->x = x;					  // okreslamy  jego x oraz y - przypisujemy, za pomoc¹ wskaznika wartosci x wartosc x
		this->y = y;
	}
										 // okresli³em podstawowe ruchy naszego snake'a - jeszcze musimy pomyslec jak wdrozyc te funkcje [mysla³em o czymœ z getchar()] 
	void Moveup()		
	{
		y++;
	}

	void Movedown()
	{
		y--;
	}

	void MoveRight()
	{
		x++;
	}

	void MoveLeft()
	{
		x--;
	}

	void Mark()
	{
		Location(x, y);
		cout << "o";
	}
};


int main() {
	Indicator o(5,10);							// okreslamy wartosci x i wywolujemy Mark();
	o.Mark();
	return 0;
}