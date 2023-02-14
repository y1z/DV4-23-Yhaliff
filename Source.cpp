#include <iostream>

void guess_number();

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
	int option = 0;
	std::cout << "selecionar numero";
	std::cin >> option;
	if (option > 99 || option < 0) {
		std::cout << "Fuera del rango permitido";
	}
	else {
		int rand_number = rand() % 100;
		std::cout << "numero selecionado = " << option << '\n' << "numero alazar = " << rand_number << '\n';
	}

}
