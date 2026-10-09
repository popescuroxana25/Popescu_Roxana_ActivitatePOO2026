#include<iostream>
using namespace std;

struct Cladire
{   
	char* culoare;
	float inaltime;
	int nr_etaje;
	bool este_deschisa;

};
Cladire citireCladire()
{
	Cladire c;
	char x[100];
	cout << "Culoare:";
	cin >> x;
	c.culoare = new char[strlen(x) + 1];
	strcpy(c.culoare,x);
	cout << "\nInaltime:";
	cin >> c.inaltime;
	cout << "\nNr.etaje:";
	cin >> c.nr_etaje;
	cout << "\nDeschis(0/1):";
	cin >> c.este_deschisa;
	return c;

}
void afisareCladire(Cladire c)
{

	cout << "Culoare:" << c.culoare;
	cout << "Inaltimea:" << c.inaltime;
	cout << " Etaje:" << c.nr_etaje;
	cout << "Deschis(0/1):" << c.este_deschisa;

}
void modificaNrEtaje(int nouNrEtaje, Cladire *c)
{
	   
	(*c).nr_etaje = nouNrEtaje;



}
void modificaNrEtaje1(int nouNrEtaje, Cladire &c)
{

	c.nr_etaje = nouNrEtaje;


}
int main()
{

	Cladire c = citireCladire();
	afisareCladire(c);
	modificaNrEtaje(20,&c);
	afisareCladire(c);
	modificaNrEtaje1(21, c);
	afisareCladire(c);
	/*
	char* vectorC;
	vectorC = new char[strlen("POO") + 1];
	strcpy_s(vectorC, strlen("POO") + 1, "POO");


	Cladire c;
	int nrCladiri = 5;
	Cladire* cladiri;
	cladiri = new Cladire[nrCladiri];*/
}
