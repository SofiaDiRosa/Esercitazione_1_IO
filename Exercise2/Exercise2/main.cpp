#include <fstream>
#include <iostream>

int main()
{	std::ifstream file("./data.txt"); //ha uno stato (comportamento), cioè se l'operazione non va a buon fine lo stato diventa negativo e non esegue più nessuna operazione
	if(file.fail())
	{
		std::cerr << "Non è stato possibile aprire il file" << std::endl;
		return 1; //termino la chiamata del main segnalando un errore
	}
    return 0;
}
