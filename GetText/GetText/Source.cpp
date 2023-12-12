//This is modulo 1
#include <iostream>
#include <string>
#include <fstream>
#include <list>

using namespace std;

int main()
{
    list<string> list;
    ifstream infile("PracticeSample.txt", ios::in);
    string current;
    string fsentence;
    int count = 0;
    while (getline(infile, current)) {
        int sentence_start = 0;
        for (int j = 0; j < current.size(); j++) {

            if (current[j] == 'E') {

                // get sentence substring
                fsentence = current.substr((j + 3), current.size());
            }
        }
        for (int i = 0; i < fsentence.size(); i++) {

            if (fsentence[i] == 'H') {

                // get sentence substring
                string sentence = fsentence.substr(sentence_start, (i - 1));
                //insert other function here
                // output sentence
                list.push_back(sentence);
                //cout << sentence << endl;
                // update sentence start
                sentence_start = i + 1;
                // increase count
                count++;

            }
            // if sentence start and whitespace
            if (i == sentence_start && isspace(current[i])) {
                // increase sentence start
                sentence_start++;
            }
        }
    }
    for (string a : list) {
        cout << a << '\n';
    }
    cout << "Total Sentences: " << count << "\n";
    return 0;
}