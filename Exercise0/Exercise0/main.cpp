#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <numbers>

int main()
{	int a = -1;
	unsigned int b = 2;
	bool c = true; //false
	double d = 3.5; //1.0e-12
	std::string str = "Hello"; //vettore di caratteri con fine stringa '/0'
	char e = 'a'; //singolo carattere
	a = 2;
	
	std::cout << sizeof(int) << std::endl;
	std::cout << -pow(2, 31) << "" << pow(2, 31) -1 << std::endl; //quantità minima e massima di un intero
	std::cout << std::numeric_limits<int>::min() << "" << std::numeric_limits<int>::max() << std::endl;
	
	std::cout << std::setprecision(16) << std::scientific; //modifica il formato di stampa imponendo 16 cifre significative e la notazione scientifica
	std::cout << std::numbers::pi << std::endl; //stampa il pigreco
	
	int a1 = a + d; //stampa l'intero e non il double; promuove a in double per migliorare la precisione, che viene persa perché memorizzo un double in un intero
	std::string s1 = str + std::to_string(d); //to_string permette di tradurre un double d in stringa
	std::cout << "a1 = " << a1 << std::endl;
	std::cout << "s1 = " << s1 << std::endl;
	
    return 0;
}
