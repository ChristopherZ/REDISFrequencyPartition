#include <iostream>
#include <string>
#include <unordered_map>
#include <map>

using namespace std;

int main()
{
    int sum = 0;
    string movies[] = {"Synecdoche, New York (#125) ", "Twelve Monkeys (#128)", "The Revenant (#130)",
    "Hateful Eight (#132)","To Kill a Mockingbird (#134)",
    "The Assassination of Jesse James by the Coward Robert Ford (#150)","Gravity (#151)",
    "Let the Right One In, 2008 (#154)","The Bicycle Thief (#166)","This is Spinal Tap (#169)",
    "Monsters Inc. (#174)","The Master (#181)","Rashomon (#184)",
    "Star Wars: Episode VI - Return of the Jedi (#185)","The Conversation (#190)",
    "Minority Report (#192)","Barton Fink (#193)","On the Waterfront (#199)",
    "Raising Arizona (#200)","Do the Right Thing (#205)","The Green Mile"};


 unordered_map<char,int> counters;   
 map<char,int> counters2;      

    for(auto i : movies){
        counters[i.at(0)]++;
        counters2[i.at(0)]++;
    }
    for ( auto it = counters.begin(); it != counters.end(); ++it ){
        cout << " " << it->first << ":" << it->second << "\n";
    } cout << "\n";
    for ( auto it = counters2.begin(); it != counters2.end(); ++it ){
        cout << " " << it->first << ":" << it->second << "\n";
        sum = sum + it->second;
    }
    cout << "SUM = " << sum << endl;
        
    return 0;
}