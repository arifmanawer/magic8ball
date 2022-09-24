#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string magicAnswer[6] = {"yes" , "no" , "maybe" , "most definitely" , "certainly not" , "perhaps..."}; 

int main(){
    string startgame, name, question;
    cout << "What is your name?" << endl;
    getline (cin, name);
    cout << "Would you like to play? Enter yes or no:\n" ;
    getline (cin, startgame);
    if (startgame == "yes"){
        cout << "What is your question?" << endl;
        getline (cin, question);
        cout << name << " wants to ask Magic 8ball " << question << endl;
        srand(time(0));
        cout << "Magic 8balls answer is " << magicAnswer[rand()%6] << endl;
        
    } else {
        return 0;
    }
    
    

}