#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main() {
	//declarar valor
	char mensaje[100];
	int la = 0, le = 0, lo = 0, ls = 0, li = 0, lu = 0, ln = 0, ll = 0, lr = 0, lt = 0;
	int lc = 0, ld = 0, lg = 0;
	int lm = 0, lb = 0, lp = 0;
	int lf = 0, lh = 0, lv = 0, ly = 0;
	int lj = 0;
	int lk = 0, lll = 0, lñ = 0, lq = 0, lrr = 0, lw = 0, lx = 0;
	int lz = 0;
	setlocale(LC_ALL, "spanish");

	// asignacion con entrada de usuario 
	cout << "Ingresa tu Palabra: " << endl;
	// getline(comando, variable)
	cin.getline(mensaje, 100, '\n');
	//mostrar en pantalla
	cout << "Tu palabra fue: " ;
	// todos los caracteres
	cout << mensaje << endl;

	for (int i = 0; i < 100; i++) {
		//letras que valen un punto
		switch (mensaje[i]) {
		case 'a': la++; break;
		case 'e': le++; break;
		case 'o': lo++; break;
		case 's': ls++; break;
		case 'i': li++; break;
		case 'u': lu++; break;
		case 'l': ll++; break;
		case 'r': lr++; break;
		case 't': lt++; break;
		}
		//letras que valen 2 puntos 
		switch (mensaje[i]) {
		case 'c': lc++; break;
		case 'd': ld++; break;
		case 'g': lg++; break;
		}
		//letras que valen 3 puntos
		switch (mensaje[i]) {
		case 'm': lm++; break;
		case 'b': lb++; break;
		case 'p': lp++; break;
		}
		//letras que valen 4 y j que vale 5 puntos xd
		switch (mensaje[i]) {
		case 'f': lf++; break;
		case 'h': lh++; break;
		case 'v': lv++; break;
		case 'y': ly++; break;
		case 'j': lj++; break;
		}
		//letras que valen 8 y z que vale 10 puntos :v
		switch (mensaje[i]) {
		case 'k': lk++; break;
		case 'll': lll++; break;
		case 'ñ': lñ++; break;
		case 'q': lq++; break;
		case 'rr': lrr++; break;
		case 'w': lw++; break;
		case 'x': lx++; break;
		case 'z': lz++; break;
		}

	}
	/*cout << "letra a  Tiene " << la << " en la cadena. " << endl;
	cout << "letra e  Tiene " << le << " en la cadena. " << endl;
	cout << "letra o  Tiene " << lo << " en la cadena. " << endl;*/
	

	cout << "El puntaje de tu palabra es: " << la+le+lo+ls+li+lu+ln+ll+lr+lt+(2*lc)+(2*ld)+(2*lg)+(3*lm)+(3*lb)+(3*lp)+(4*lf)+(4*lh)+(4*lv)+(4*ly)+(5*lj)+(8*lk)+(8*lll)+(8*lñ)+(8*lq)+(8*lrr)+(8*lw)+(8*lx)+(10*lz) << endl;
}