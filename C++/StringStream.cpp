#include <sstream>

#include <vector>

#include <iostream>

using namespace std;

vector<int> parseInts(string str) {

    // Complete this function

    vector<int> v;

    stringstream ss(str);

    int temp;

    char x;

    while (ss >> temp) {

        //Push numbers into the vector

        v.push_back(temp);

        //Get the comma

        ss >> x;

    }

    return v;

}

int main() {

    string str;

    cin >> str;

    vector<int> integers = parseInts(str);

    for (int i = 0; i < integers.size(); i++) {

        cout << integers[i] << "\n";

    }

    system("pause");

    return 0;

}

