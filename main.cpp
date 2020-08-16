#include <iostream>

using namespace std;

int main() {
  // uppercase function
	string s; // = "yoloolol fdfsf finienuje";
  cout << "Please Input a Sentence: ";
	getline(cin, s);
  cout << endl;
	bool upper = false;

	for (auto& i : s) {

    if (i == s[0]) {
      upper = true;
    }

		if (upper) { 
			upper = false;
			i = toupper(i);
    }

		if (i == ' ')
			upper = true;
			
	}

  cout << s << endl;
}