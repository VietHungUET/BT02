#include<bits/stdc++.h>
using namespace std;
const int Max_Bad_Guess=7;
const string WORD_LIST[] = {"dog", "cat", "human","UET","bird","dolphin","shark","hangman","pikachu","boy","technology","apple"
"orange","sadboy"};
const int WORD_COUNT = sizeof(WORD_LIST) / sizeof(string);

string chooseWord() ;// Hàm choj từ
void renderGame(const string & guessword,const string & badguess);
char readGuess();
bool contain(const string& secretword, char guess);
string update(string & guessword,const string& secretword,char guess);

int main()
{   srand(time(0));
    string secretword= chooseWord();
    string guessword=string(secretword.size(),'-');
    string badguess ="";
    do
    {
         renderGame(guessword,badguess);
        char guess= readGuess();// Ký tự của người đoán
        if(contain(secretword,guess))
        {
            guessword=update(guessword,secretword,guess);// Cập nhập từ nếu như đoán đúng
        }
        else
            badguess+=guess;;// Xâu người đoán bị sai
    }
    while(badguess.size()< Max_Bad_Guess && secretword!=guessword);
    renderGame(guessword, badguess);
    if (badguess.size() < Max_Bad_Guess) cout << "Congratulations! You win!";
    else cout << "You lost. The correct word is " << secretword;

}
string chooseWord()
{
	 int randomIndex = rand() % WORD_COUNT;
    return WORD_LIST[randomIndex];
}
char readGuess()
{
	char input;
	cout << "Your guess: ";
	cin >> input;
	return tolower(input);
}
bool contain(const string& secretword, char guess)
{
    int check=0;
    for(int i=0;i<secretword.size();i++)
    {
        if(secretword[i]== guess) {return 1;}
    }
    return 0;
}
string update(string & guessword,const string& secretword,char guess)
{
    for(int i=0;i<guessword.size();i++)
    {
        if(secretword[i]==guess)
            guessword[i]=guess;
    }
    return guessword;
}
    const string PICTURE[] = {
        "   -------------    \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |           |    \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|    \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |          /     \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |          / \\  \n"
        "   |     \n"
        " -----   \n"
    };
    void renderGame(const string& guessedWord, const string& badGuesses)
{
	const int PATCH_LINES = 2;
	for (int i = 0; i < PATCH_LINES; i++) cout << endl;

	int badGuessCount = badGuesses.length();
	cout << PICTURE[badGuessCount] << endl;
	cout << "Secret word: " << guessedWord << endl;
	if (badGuessCount > 0) {
		cout << "You've made " << badGuessCount << " wrong ";
		cout << (badGuessCount == 1 ? "guess" : "guesses");
		cout << ": " << badGuesses << endl;
	}
}
