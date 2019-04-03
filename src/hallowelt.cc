
#include <iostream>
using namespace std;
#include<string>

int main(int argc, char** argv){


    enum languages {german, english, french, spanish};
    string greetings[4] = {"Hallo Moritz!", "Hello Moritz!", "Salut Moritz!", "Hola Moritz!"};
    languages lang = french;
    cout << greetings[lang] << endl;
	return 0;
}
