#include "funzioni.hpp"
#include <iostream>
#include <ostream>

/* funzione che mappa i punti nell'intervallo [-1,2];
 * gli N valori sono compresi nell'intervallo [1,5];
 * formula generale: mapped_value = c + (N-a) * (d-c) / (b-a), dove a = 1, b = 5, c = -1, d = 2
 * nel nostro caso: mapped_value = -1 + (N-1) * (2+1) / (5-1)
 */
 
double map_values(double val)
{
	return -1.0 + ((val-1.0) * 3.0 / 4.0);	
}
