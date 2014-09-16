#include <iostream>
#include <cstring>

using namespace std;

void vowel_amount(string s);

int main(int argc, char const *argv[])
{
	string c="ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	cout<<c<<endl;
	vowel_amount(c);
	return 0;
}

void vowel_amount(string c){
	int vowel=0;
	int digits=0;
	int consonant=0;
	for(int i=0; i<c.length();i++){
		if(strchr("aeiouAEIOU",c[i]))
			vowel++;
		else if(strchr("1234567890",c[i]))
			digits++;
		else
			consonant++;
	}

	cout<<"hay "<<vowel<<"vocales."<<endl;
	cout<<"hay "<<consonant<<"consonantes."<<endl;
	cout<<"hay "<<digits<<"digitos."<<endl;
}