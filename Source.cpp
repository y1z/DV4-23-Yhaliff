#include <iostream>
#include <cmath>

void guess_number();
bool guess_number_helper(int rand_num, int guessed_num);

int main() {

	srand(time(nullptr));
	bool keep_looping = true;
	while (keep_looping)
	{
		int option = 0;
		std::cout << "opciones \n0. terminar programa\n1. selecionar numero entre 0-99\n";
		std::cin >> option;

		switch (option)
		{
		case 0:
			keep_looping = false;
			break;
		case 1:
			guess_number();
			break;
		}

	}


}

void guess_number()
{
	int guessed_num = 0;
	int rand_number = rand() % 100;

	bool keep_looping = true;
	while (keep_looping) {
		std::cout << "selecionar numero";
		std::cin >> guessed_num;

		if (guessed_num > 99 || guessed_num < 0) {
			std::cout << "Fuera del rango permitido";
		}
		else {
			if (guess_number_helper(rand_number,guessed_num)) {
				keep_looping = false;
			}
			
		}

	}


}

// returns true when the guessed_num and rand_num are the same
bool guess_number_helper(int rand_num, int guessed_num)
{
	if (guessed_num == rand_num) {
		std::cout << "lo lograste advinar el numero siiiiii!I!II!Iii\n";
		return true;
	}
	if (guessed_num > rand_num) {
		std::cout << "el numero es un numero menor\n";
	}
	if (guessed_num < rand_num) {
		std::cout << "el number es un numero mayor\n ";
	}

	// used to make sure no clue is repetead unnecesarly
	if (std::abs(guessed_num - rand_num) <= 5) {
		std::cout << "ya esta muy cerca\n";
	}
	else if (std::abs(guessed_num - rand_num) <= 15) {
		std::cout << "te esta arcercando\n";
	}
	else if (std::abs(guessed_num - rand_num) <= 30) {
		std::cout << "esta lejos\n";
	}
	else {
		std::cout << "esta absudamente lejos\n";
	}
	
	return false;
}
