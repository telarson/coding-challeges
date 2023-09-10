#include <string>
#include <iostream>
#include <vector>
using namespace std;

vector<string> splitOn(char del, string toSplit){
    string temp = "";
    vector<string> strings = {};

    for(int i=0; i<(int)toSplit.size(); i++){
        if(toSplit[i] != del){
            temp += toSplit[i];
        } else {
            strings.push_back(temp);
            temp = "";        
        }
    }
    strings.push_back(temp);
    temp = "";

    return strings;
}

string abbrevName(string name)
{
    vector<string> strings = splitOn(' ', name);
    string initals = "";
    initals += toupper(strings[0][0]);
    initals += '.';
    initals += toupper(strings[1][0]);
    return initals;
}

int main() {
    cout << abbrevName("ryan Johnsoner") << endl;
    return 0;
}