#include<iostream>
#include<cstdlib>
#include<Windows.h>
using namespace std;

int main() {
    short minutes, seconds;
    int time;

    do
    {
        cout<< "Enter Seconds:: ";
        cin>> seconds;
    } while (minutes>59);
    do
    {
        cout<< "Enter Minutes:: ";
        cin>> minutes;
    } while (minutes>59);
    time = (minutes!=0)? minutes*60 : 0;
    time += seconds;

    for (int i = time; i > 0; i--)
    {
        system("cls");
        // system("cls"); // for Windows
        cout<< "The time remaining is 0:" << minutes << ":" << seconds << endl;
        minutes = i % 60 == 0 ? --minutes : minutes;
        seconds = seconds == 0 ? 59 : --seconds;
        system("sleep 1");
        Sleep(1); // the same effect.
        // system("TIMEOUT 1"); // kinda
    }
    system("cls");
    cout<< "*******************\nTimer ended!\a\nLasted for " << time << " seconds" << "\n*******************\n\n\n\n\n\n" << endl;
    
    return 0;
    
}

