#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> phoneThing(string phoneNum, vector<string> v) {
    vector<string> result;
    for (string i : v) {
        string temp = "";
        for(char z : i) {
            if (z == 's' || z == 'z') {
                temp += to_string((z - 'a') / 3 + 1);
            }
            else {
                temp += to_string((z - 'a') / 3 + 2);
            }
        }
        if (phoneNum.find(temp) != string::npos) result.push_back(i);
    }
    return result;
}

int main() {
    vector<string> v = {"foo", "bar", "baz", "foobar", "emo", "cap", "car", "cat"};
    for (string i: phoneThing("3662277", v)) {
        cout << i << endl;
    }
    return 0;
}