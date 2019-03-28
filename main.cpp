#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


using namespace std;
//(ifstream& inStream, ofstream& outStream);

int main() {

string stringvar;
string blah = "this is blah";
int count = 0;
int i;
char symbol;


cout << "type your string here ";
//cin >> stringvar;
getline(cin, stringvar);
cout << stringvar;


for (i = 0; i<stringvar.length(); i++){
		count++;
		cout << i;
	if(count % 2 == 0){
		stringvar[i];
//		str.insert(i , blah);
	//	cout << " This one is even\n";
	}
	else{
	//	cout << " This one is odd\n";
	}
}

cout << "count is this many " << count << endl;
}