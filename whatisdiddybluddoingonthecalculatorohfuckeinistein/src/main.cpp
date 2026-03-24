#include <iostream>
#include <string>

using namespace std;



void show_calculator()
{
    cout << "       ------------------------------------------" << endl;
    cout << "       ---                                    ---" << endl;
    cout << "       -             67 calculator            ---" << endl;
    cout << "       ---                                    ---" << endl;
    cout << "       ------------------------------------------" << endl;
    cout << "       -     +      |      -        |     *     -" << endl;
    cout << "       -    plus    |    minus      | multiply  -" << endl;
    cout << "       ------------------------------------------" << endl;
    cout << "       -     /      |      bro      |     .     -" << endl;
    cout << "       -   divide   |      idk      |   close   -" << endl;
    cout << "       ------------------------------------------" << endl;

    cout << "what do you want to choose: \n";
    int sigma;
    scanf("%d", &sigma);
    
    if (sigma != 67)
    {
        cout << "no bro you typed 67 this is lying to you\n";
    }   
    system("mpv --no-terminal sigma.mp3");
}

int main()
{
    show_calculator();
    
    return 0;
}