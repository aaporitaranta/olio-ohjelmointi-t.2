#ifndef GAMENEW_H
#define GAMENEW_H

class GameNew
{
public:
    GameNew(int);
    ~GameNew();
    void play();
    void printGameResult();
private:
    int maxNumber = 20;
    int playerGuess = 1;
    int randomNumber = 0;
    int numOfGuesses = 0;
protected:
};

#endif // GAMENEW_H
