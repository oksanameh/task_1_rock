#include <iostream>
#include <string>

using namespace std;


void win()
{
    cout << "win" << endl;
}

void fail()
{
    cout << "fail" << endl;
}

void draw()
{
    cout << "there is no winner" << endl;
}

int main()
{
    string  rock {"rock"},
            scissors {"scissors"},
            paper {"paper"};

    string  bot;
    int r = 1 + rand() % 3;
    switch (r)
    {
        case 1:
            bot = rock;
            break;
        case 2:
            bot = scissors;
            break;
        case 3:
            bot = paper;
            break;
    }

    string s;
    cout << "Enter Rock, Scissors or Paper:" << endl;
    cin >> s;
    cout << "bot: " << bot << endl;
    
    if (s == rock)
    {
        if (bot == scissors) win();
        else if (bot == paper) fail();
        else draw();
    }
    else 
    if (s == scissors)
    {
        if (bot == paper) win();
        else if (bot == rock) fail();
        else draw();
    }
    else
    if (s == paper)
    {
        if (bot == rock) win();
        else if (bot == scissors) fail();
        else draw();
    }
    return 0;
}
