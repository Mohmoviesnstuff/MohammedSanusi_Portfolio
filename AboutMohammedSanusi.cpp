#include <iostream>
#include <string>
#include <cctype>
using namespace std;


void PROFILEmenu(const int, string []);
int main()
{
    string rePEAT;
    const int FOUR = 4;
    string profileMenu [FOUR] = {"About Moh", "Programming skills (so far)", "Projects (so far)", "Contact"};
    do 
    {
        PROFILEmenu(FOUR, profileMenu);
        cout << "\n\n";
        cout << "Do you want to go back to the menu (type in 'Y' for Yes and 'N' for No)" << endl;
        getline(cin, rePEAT);
        while (rePEAT != "Y" && rePEAT != "N" || rePEAT.empty())
        {
            cout << "Wrong input." << endl; 
            cout << "Do you want to go back to the menu (type in 'Y' for Yes and 'N' for No)" << endl;
            getline(cin, rePEAT);
        }

    } while (rePEAT == "Y");
    return 0;
}

void PROFILEmenu(const int FOUR, string Menu[])
{
    string opTION;
    cout << "Good day user, welcome to Mohammed Sanusi's profile, just down below is the menu. " << endl;
    cout << "\n\n" << endl;
    for(int i = 1; i <= FOUR; i++)
    {
        cout << i << ".  " << Menu[i-1] << endl;
    }
    cout << "\n\n";
    cout << "Type in number associated with option to access the information you want (e.g type in '1' to access 'About Moh'): ";
    getline (cin, opTION);

    while (opTION != "1" && opTION != "2" && opTION != "3" && opTION != "4" || opTION.empty())
    {
        cout << "Wrong input." << endl; 
        cout << "Type in number associated with option to access the information you want (e.g type in '1' to access 'About Moh'): ";
        getline(cin, opTION);
    }

    if(opTION == "1")
    {
        cout << "\n\n";
        cout << "My name is Mohammed Temitayo Sanusi. I am currently 18 years of age. I was born in Lagos, Nigeria but i am currently living in Texas. I am a very dynamic and hardworking person who likes to be at peace and engaged in a positive way towards people and myself. I have multiple interests, soccer, movies, and wrestling being a few. I make tiktoks about film, tv, games, wrestling, soccer and pop culture in general. I major in web application programming. I chose this major because it deals with the side of IT that i enjoy the most, websites, application, softwares, and different programming languages. I hope it works out for me with this major, it is going well so far. Life is an endless void of chances, take them.";
    }
    else if (opTION == "2")
    {
        cout << "\n\n";
        cout << "So far, I have learnt a good amount of python and c++. I think i am more confident with c++ than python right now though.";
    }
    else if (opTION == "3")
    {
        cout << "\n\n";
        cout << "I have a project that helps getting movie tickets and also showing the receipt, a project that is used for getting stadium tickets, a project for getting miles for Air travel and assigning the type of class to the miles flown, a project that is used for calculating educational scores and assigning grades, a project that is used for getting hotel booking and room availability and a couple more. Those are my favorites as of right now.";
    }
    else if (opTION == "4")
    {
        cout << "\n\n";
        cout << "Phone Number: 214-924-7143" << endl;
        cout << "Email: sanusimohammed0000@gmail.com" << endl;
        cout << "Instagram: @theblack_wing" << endl;
        cout << "TikTok: @Mohmoviesnstuff" << endl;
    }
    
}