#include <iomanip.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream.h>
struct Vkladchik{	
	int account;   
	char name[10]; 
	float suma;    
};
void main(void){ 
	clrscr();
	Vkladchik k;  
	cout<<"Vvedite schet, imya, summu \n"; 
	cin>>k.account>>k.name>>k.suma; 
	cout<<"Schet"<<setw(9)<<"Imya"<<setw(16)<<"Summa"<<endl;
	cout<<k.account<<k.name<<k.suma;
	cout<<"\n\n";
	getch();
}
