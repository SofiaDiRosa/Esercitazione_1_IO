#include <fstream>
#include <iostream>

int main()
{	std::ifstream file("./data.txt"); //ha uno stato (comportamento), cioè se l'operazione non va a buon fine lo stato diventa negativo e non esegue più nessuna operazione
	if(file.fail())
	{
		std::cerr << "Non è stato possibile aprire il file" << std::endl;
		return 1; //termino la chiamata del main segnalando un errore
	}
	std::string tmp; //variabile temporanea in cui voglio memorizzare la stringa del comando successivo
	std::getline(file, tmp); //legge tutta una riga, finché non trova un carattere di end of file
	std::cout << tmp << std::endl;
	
	int val;
	int sum = 0;
	while(file >> val) //prende il primo valore e lo mette in val
	{
		sum = sum + val * val;
	}
	std::cout << "la somma è: " << sum << std::endl;
	
	int S = val*(val + 1)*(2*val + 1)/6;
	std::cout << "la somma è: " << S << std::endl;
	
    return 0;
}
