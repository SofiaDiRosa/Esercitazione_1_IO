#include <fstream>
#include <iostream>
#include <iomanip>
#include "funzioni.hpp"

int main()
{	std::ifstream file("./data.txt");
	if(file.fail())
	{
		std::cerr << "Non è stato possibile aprire il file" << std::endl;
		return 1;
	}
	
	std::ofstream ofs("result.txt"); 
	if(!ofs.is_open()) //true se non apre il file
	{
		std::cerr << "Non è stato possibile aprire il file in scrittura" << std::endl;
		return 1;
	}
	
	double val;
	double i = 0.0;
	double mean = 0.0;
	double sum = 0.0;
	ofs << "# N Mean" << std::endl;
	
	// creo un while per calcolare la media dei primi i punti mappati (richiamando la funzione)
	while(file >> val)
	{
		double M = map_values(val);
		sum += M;
		mean = sum/(i+1);
		ofs << static_cast<int>(i+1) << " "; //trasforma (i+1) in intero
		ofs << std::setprecision(16) << std::scientific << mean << std::endl;
		i++;
	}
	
	file.close();
	ofs.close();
	std::cout << "Scrittura su result.txt completata (o tentata)." << std::endl;
    return 0;
}
