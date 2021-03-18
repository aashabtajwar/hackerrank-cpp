#include<map>
#include<iostream>

using namespace std;

int main() {
    int q, type;
    cin >> q;
    // define map
    map<string, int> cls;
    string name;
    for (int i(0), mark; i < q; ++i) {
        // read the type and the name
        cin >> type >> name;
        if (type == 1) {
            // if the type is 1, read the mark
            // create a record with this mark
            // if the record already exists, the mark appends
            cin >> mark;
            cls[name] += mark;
            
        }
        else if (type == 2) {
            // 1f type is 2, erase the the mark of the student
            cls.erase(name);
        }
        else {
            // print the marks of the student
            cout << cls[name] << "\n";
        }
    }
}
