#include<iostream>
using namespace std;

class Movie{
	string movie_name;
	int ticket_price;
	
	public:
		Movie(){
			movie_name="FKM by Saumitra";
			ticket_price=200;
		}
		
		Movie(string movie_name,int ticket_price){
		    this-> movie_name = movie_name;
			this->ticket_price = ticket_price;
		}
		
		~Movie(){
			cout<<"Memory Deallocated"<<endl;
		}
		
		void putData(){
			cout<<"Movie Name:"<<movie_name<<endl;
			cout<<"Ticket Price:"<<ticket_price<<endl;
		}
};

int main(){
	Movie m;
	m.putData();
	Movie m2("FKM by Harsh",180);
	m2.putData();
	return 0;
}
