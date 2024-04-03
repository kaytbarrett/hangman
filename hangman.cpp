#include <iostream>
#include <string>


int main () {
    std::string word;
    std::cout << "\n";
    std::cout << "Welcome to Hangman!" << std::endl;
    std::cout << "Please enter a word: "; 
    std::getline(std::cin, word);
    std::cout << "\n\n\n\n\n\n\n";

    std::string guessedCharacters(word.length(), '_');
    char guessLetter;
    int guesses = 0;
    int maxGuesses = 10;

    std::cout << "You have " << maxGuesses << " total guesses.\n";

    while (guesses < maxGuesses && guessedCharacters != word) {

    std::cout << "Guessed: " << guessedCharacters << std::endl;
    std::cout << "\n\n";

    std::cout << "Enter a guess: " << std::endl;
    std::cin >> guessLetter;

    bool found = false;

    for (int i = 0; i < word.length(); i++) {
        if (guessLetter == word[i]){
            guessedCharacters[i] = guessLetter;
            found = true;
        }
    }

    if (!found){
            guesses++;
        }

    }


    std::cout << "\n\n";
    if (guessedCharacters == word){
        std::cout << "Congratulations! You guessed the word: " << word << std::endl;
    } else {
        std::cout << "Sorry, you ran out of guesses. The word was: " << word << std::endl;
    }
    std::cout << "\n\n";

    return 0;
}
