#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string.h>

using namespace std;

void login() {
    int count;
    string userId, password, id, pass;
    system("cls");
    cout<<"\t\t\t Please enter the username and password : "<<endl;
    cout<<"\t\t\t USERNAME : ";
    cin>>userId;
    cout<<"\t\t\t PASSWORD : ";
    cin>>password;

    ifstream input("records.txt");

    while(input>>id>>pass)
    {
        if (id==userId && pass==password)
        {
            count=1;
            system("cls");
        }
        
    }
    input.close();

    if (count == 1)
    {
        cout<<userId<<"\n Your LOGIN is successfull \n Thanks for logging in! \n";
        // main();
    }
    else
    {
        cout<<"\n LOGIN ERROR \n Please check your username and password\n";
        // main();
    }
    // main();
    
    
}

void registeration() {
    string ruserId,rpassword,rpass,rid;
    system("cls");
    cout<<"\t\t\t Enter the username : ";
    cin>>ruserId;
    cout<<"\t\t\t Enter the password : ";
    cin>>rpassword;

    ofstream f1("records.txt", ios::app);
    f1<<ruserId<<' '<<rpassword<<endl;
    system("cls");
    cout<<"\n\t\t\t Registeration is successfull! \n";
    // main();

}

void forgot() {
    int option;
    system("cls");
    cout<<"\t\t\t You forgot the password? No worries \n";
    cout<<"Press 1 to search your password by username"<<endl;
    cout<<"Press 2 to go back to the main menu "<<endl;
    cout<<"\t\t\t Enter your choice : ";
    cin>>option;
    switch (option)
    {
    case 1:
    {
        int count=0;
        string suserId,sId,spass;
        cout<<"\n\t\t\t Enter the Username which you remembered : ";
        cin>>suserId;

        ifstream f2("records.txt");
        while(f2>>sId>>spass)
        {
            if(sId==suserId) {
                count=1;
            }
        }
        f2.close();
        if(count==1)
        {
            cout<<"\n\n Your account is found! \n";
            cout<<"\n\n Your password is : "<<spass;
            // main();
        }
    }

    case 2:
        {
            exit(0);
        }
    
    default:
        cout<<"\t\t\t Wrong Choice ! Please try again "<<endl;
        forgot();
    }

};

int main() {
    int c;
    cout<<"\n\t\t\t\t ________________________________________________________\n\n ";
    cout<<"\n\t\t\t\t               Welcome to the login page \n ";
    cout<<"\n\t\t\t\t __________________________Menu__________________________\n\n ";
    cout<<"                                                                   \n\n ";
    cout<<"\t|=> Press 1 to login                     |\n\n";
    cout<<"\t|=> Press 2 to Register                     |\n\n";
    cout<<"\t|=> Press 3 to if you Forget your password                     |\n\n";
    cout<<"\t|=> Press 4 to Exit                     |\n\n";
    cout<<"\n\n\t Please enter your choice: ";
    cin>>c;
    cout<<endl;

    switch (c)
    {
    case 1:
        login();
        break;
    
    case 2:
        registeration();
        break;
    
    case 3:
        forgot();
        break;
    
    case 4:
        cout<<"\t\t\t Thankyou! \n\n";
        exit(0);
        break;
    
    default:
    system("cls");
        cout<<"\t\t\t Please select from the options given above \n"<<endl;
        main();
    }

    return 0;
}

