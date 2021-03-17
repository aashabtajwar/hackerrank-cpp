#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here

// variables -> scores (to hold scores)
// void input() method to read the 5 integers and save them to scores
// another method that returns the sum of the students scores
class Student {
    private:
        int scores[5];
        int sum;
    public:
        
        // syntax to initialize members of the class
        // and it is valid when using constructors. It is called an initializer
        // list. See at the bottom for the complete explanation
        Student() : sum(0) {}
        void input() {
            // loop over 5 times
            for (int i = 0; i < 5; i++) {
                cin >> scores[i];
                sum += scores[i];
            }
        }
        int calculateTotalScore() {
            // return sum
            return sum;
        }
};


int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();
    
    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;

        }
    }

    // print result
    cout << count << endl;
    cout << kristen_score << endl;
    
    return 0;
}
/*
It's so that whenever we make a "Student" object, sum is initialized to zero.
You also could have put that logic inside the constructor class like this:

Student() { sum = 0; }

same thing as the shorthand above.
*/