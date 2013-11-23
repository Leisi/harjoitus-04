/**********************************
Tehtävä: Harjoitus 4
Tekijä: Joni Laine
PVM: 10.9.2013

kuvaus:
Ks. ohjelmakoodia: harj4 (omat esimerkit)

a) Kirjoita, tallenna ja suorita ym. ohjelma.
b) Kommentoi ylla olevan esimerkin kaikki rivit (mitä rivillä tapahtuu).
c) Muuta vakioden nimet niin, että
MAX => MINIMI
max => MAKSIMI

Muuta ohjelmaa niin, että voit tulostaa ohjelmalla seuraavat ilmoitukset:
Summa on pienempi kuin MINIMI
Summa on suurempi kuin MAKSIMI
Summa on MINIMIN ja MAKSIMIN välissä
**********************************/

#include <iostream> // Lis„„ input/output streamin k„ytt””n eli n„yt”n ja n„pp„imis”n
using namespace std; // Ottaa nimiavaruuden k„ytt””n
#define MINIMI 10 // M„„rittelee vakion MAX arvon (vanha)
const int MAKSIMI = 20; // M„„rittelee vakion max1 arvon (uusi)
int summa; // Muuttujam„„rittely
void Laske(int,int); // Aliohjelmien esittely
void main() // P„„ohjelma
{
	int luku1 = 2; // M„„rittelee muuttujan luku1
	int luku2; // M„„rittelee muuttujan luku2
	cout <<"Sy”t„ luku: "; // Pyyt„„ sy”tt„m„„n luvun
	cin>>luku2; // Antaa sy”tetyn arvon muuttujalle luku2
	Laske(luku1, luku2); // Laskee muuttujat luku1 ja luku2
	if(summa < MINIMI) // Vertaa summaa vakioon MINIMI
		cout<<"Summa on pienempi kuin minimi"<<endl; // Tulostaa tekstin jos summa pienempi kuin MAX
	else if(summa > MAKSIMI) // Vertaa summaa vakioon MAKSIMI
		cout<<"Summa on suurempi kuin maksimi"<<endl; // Tulostaa tekstin jos summa pienempi kuin max1
	else if(MINIMI<summa<MAKSIMI)
		cout<<"Summa on MINIMIN ja MAKSIMIN v„liss„"<<endl;
}
void Laske(int eka, int toka) // Laskee muuttujat yhteen
{
	summa = eka + toka; // Kertoo ett„ summa on eka + toka
}
