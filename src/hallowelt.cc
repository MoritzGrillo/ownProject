
#include <iostream>
using namespace std;
#include<string>

int main(int argc, char** argv){

    enum languages {german, english, french};
    string greetings[3] = {"Hallo Moritz!", "Hello Moritz!", "Salut Moritz!"};
    languages lang = french;
    cout << greetings[lang] << endl;
	return 0;
}
