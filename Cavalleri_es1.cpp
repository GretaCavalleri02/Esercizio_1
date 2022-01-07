#include <iostream>
using namespace std;

const double sogliaMin = 0;
const double sogliaMax = 50000;



void stampa(double min, double max, double passo){
	double somma=min;
		while(somma<=max){
			cout<<somma<<endl;
			somma+=passo;
		}
}

void converti(double min, double max, double passo){
	double somma=min;
		while(somma<=max){
			cout<<(((somma)*9)/5)+32<<endl;
			somma+=passo;
		}
}

int main(){
	double tempMin;
		cout<<"Per piacere inserire una temperatura minima, limit >=0: ";
		cin>>tempMin;
		
		do{
			if(tempMin<sogliaMin){
				cout<<"Errore di inserimento: Inserire un numero più grande: ";
				cin>>tempMin;
			}
		}while(tempMin<sogliaMin);
		
		
	double tempMax;
		cout<<"Per piacere inserire una temperatura massima, "<<tempMin<<" > limit <= "<<sogliaMax<<": ";
		cin>>tempMax;
	if(tempMax<=tempMin || tempMax>sogliaMax){
		do{
			if(tempMax<=tempMin || tempMax>sogliaMax)
				cout<<"Errore di inserimento: Inserire un numero compreso nel range prestabilito: ";
				cin>>tempMax;
		}while(tempMax<=tempMin || tempMax>sogliaMax);
	}
	
	
	double differenza=tempMax-tempMin;
	double passo;
	cout<<"Per piacere inserire un valore step, 0 < step <="<<tempMin<<": ";
	cin>>passo;
	
	if(passo<sogliaMin || passo>sogliaMax || passo>differenza){
		do{
			if(passo<sogliaMin || passo>tempMax || passo>differenza){
				cout<<"Inserimento errato: Inserire un numero maggiore del valore minore inserito in precedenza: ";
				cin>>passo;
			}
		}while(passo<sogliaMin || passo>sogliaMax ||passo>differenza);
	}
	
	cout<<"Celsius"<<endl;
	cout<<"--------"<<endl;
	stampa(tempMin,tempMax,passo);
	cout<<endl;
	
	cout<<"Fahrenheit"<<endl;
	cout<<"--------"<<endl;
	converti(tempMin, tempMax, passo);
	
	
	
}
