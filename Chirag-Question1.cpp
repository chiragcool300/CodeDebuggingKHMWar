
#include <iostream>
#include <string.h> // string .h is an header
int getLIndex(char string[],char  c); //This function must be declared on top of program
int getFIndex(char string[],char c);// This function must be declared on top of program
using namespace std; // It must be written
int main()
{
	char str[100];
	char ch; 
	int Lindex,Findex; 
	cin>>str; //Semicolon missing
	cin>>ch;
	Lindex = getLIndex(str,ch);
	Findex= getFIndex(str,ch);
	if(Lindex!=-1&&Findex!=-1)// Both indexes not be equal to -1
		{cout<<Lindex<<endl; cout<<Findex<<endl; } //After endl we cannot write expression <<something as endl is end of expression
	else
		cout<<"NOT FOUND"<<endl;
	return 0;	
}
int getLIndex(char string[],char  c) // [] are misiing in front of string
{
	int size = strlen(string),i=0; // strlen function is used
	while(i<size)
	{
		
		if(string[i]==c){ // Double equals used for comparision
		    return i;
		   break;
		}	
		i++; 
	}
	
}
int getFIndex(char string[],char c)// types of arguments are missing Also FIndex spelling is wrong
{
	int size = strlen(string); // strlen function is used
	int i=size-1;       //Here index of String end at (size-1) so here a correction. 
	while( i>=0) //semicolon must be not there
{		
		if(string[i]==c){
		    return i;  
            break;
		}	
	i--;
}
		
}
/* This all is commented so should be commented
SAMPLE INPUT-1
	Kerala
a
SAMPLE OUTPUT:1
3
5
SAMPLE INPUT-2
MALAYALaM
A

SAMPLE OUTPUT:2
1
5  
*/
