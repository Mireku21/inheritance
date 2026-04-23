#include <iostream>
#include <string>
using namespace std;

class Game
{
private:
    int score;

public:
    void setScore(int s)
    {
        score = s;
    }

    int getScore() const
    {
        return score;
    }
};

class Player : public Game
{
private:
    string name;

public:
    void input()
    {
        cout << "Enter player name: ";
        getline(cin, name);

        int score;
        cout << "Enter score: ";
        cin >> score;
        setScore(score);
    }

    string getLevel() const
    {
        if (getScore() >= 80)
        {
            return "Winner Zone";
        }
        else
        {
            return "Keep Practicing";
        }
    }

    void display() const
    {
        cout << "----- Game Result -----" << endl;
        cout << "Player: " << name << endl;
        cout << "Score: " << getScore() << endl;
        cout << "Level: " << getLevel() << endl;
    }
};

int main()
{
    Player p;
    p.input();

    cout << endl;
    p.display();

    return 0;
}
