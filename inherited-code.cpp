// ERROR EXCEPTION

/*
A "throw" is followed by an object or a variable. When the "throw"
is called, the program will jump to the "catch" using said object/variable
as an input to the catch, In this case, the throw constructs a new object
of class "BadLengthException" which is used as the input to the catch
(this is labelled as "e")
*/
#include <iostream>

using namespace std;

class BadLengthException {
    private:
        int num;
    public:
        // constructor
        BadLengthException(int word_number) {
            num = word_number;
        }
        int what() {
            return num;
        }
        
};

// hackerrank locked code
bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}