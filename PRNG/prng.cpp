//Cameron Betz
//Theory of Algorithms 
//Fall 2018

#include <iostream>
#include <string>
using namespace std;


//this is the PRNG. It creates a seed with abitrary numbers
//then fits it to the users input range of 0-range
unsigned int PRNG(int range)
{
    // initial seed
    static unsigned int nSeed = 4546;

    // Make seed NP hard size
    nSeed = (8253559 * nSeed + 1345403); 

    return nSeed  %range;
}


//as an example this program uses the PRNG to randomly assign cards with
//nubers, tyeps and suits.
int main()
{
    for(int i=0; i<=100; i++)
    {
		int card = PRNG(52);
		string myCard = "undefind";
		string suit = "undefinded";
		if(card <=13)
		{
			suit = "clubs";
		}
		else if(card >13 && card <=26)
		{
			suit = "hearts";
		}
		else if(card >26 && card<=39)
		{
			suit = "spades";
		}
		else if(card >39 && card<=52)
		{
			suit = "diomands";
		}
		//----
		if(card%13 == 11){
				 myCard = "Jack";
				 cout << " "<< myCard << " of " << suit << ", " ;
			 }
		else if(card%13 == 12){
				 myCard = "Queen";
				 cout << " "<< myCard << " of "  << suit << ", ";
			 }
		else if(card%13 == 13){
				 myCard = "King";
				 cout << " "<< myCard << " of " << suit << ", ";
			}
		else if(card %13 == 0){
			cout << " " << "ACE" << " of " << suit << ", ";
		}
		else{
				cout << " " << card%13 << " of "<< suit << ", ";
		}
		
		
		//cout << myCard << " of " << suit;
		if ((i+1) % 5 == 0)
            cout << endl;
        
        i++;
		
	}
    
    
    
    
}
