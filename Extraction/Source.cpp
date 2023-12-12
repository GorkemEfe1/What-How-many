//This is Modulo 2
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile("PracticeSample.txt", ios::in);
    string current;
    string fsentence;
    int count = 0;
    while (getline(infile, current)) {
        int sentence_start = 0;
        for (int j = 0; j < current.size(); j++){

            if (current[j] == 'E') {

                // get sentence substring
                fsentence = current.substr((j+3), current.size());
            }
        }
        for (int i = 0; i < fsentence.size(); i++) {
            
            if (fsentence[i] == 'H') {
                
                        // get sentence substring
                        string sentence = fsentence.substr(sentence_start, (i-1));
                        //After we extract the word we want we will put it into 2 lists the origninal list is first then the secondary list which is made to detect duplicates
                        // When the first list gets a word it will check if that word doesn't == to any of the words in the other list
                        //insert other function here
                        // output sentence
                        cout << sentence << endl;
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
    cout << "Total Sentences: " << count << "\n";
    return 0;
}