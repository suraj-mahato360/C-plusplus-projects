#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int quant;
    int choice;
    //Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshakes = 0, Qpaneer = 0;
    //Food items sold 
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshakes = 0, Spaneer = 0;
    //Total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shakes = 0, Total_paneer = 0;

    cout<<"\n\t\t\t\t ________________________________________________________\n ";
    cout<<"\n\t\t\t\t               Welcome to Paisa De Hotel \n ";
    cout<<"\n\t\t\t\t ________________________________________________________\n ";

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms avaliable : ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta : ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger : ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles : ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake : ";
    cin>>Qshakes;
    cout<<"\n Quantity of paneer-roll : ";
    cin>>Qpaneer;

m:
    cout<<"\n\t\t\t\t ***** Please select from the menu options ***** ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Paneer-roll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please enter a choice! ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\n\n Enter the number of rooms you want; ";

        cin>>quant;
        if (Qrooms-Srooms >=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms= Total_rooms+(quant*1200);
            cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you! \n\n";

        }
        else
            cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms Remaining in hotel";
        
        break;
    case 2:
        cout<<"\n\n Enter pasta quantity: ";

        cin>>quant;
        if (Qpasta-Spasta >=quant)
        {
            Spasta=Spasta+quant;
            Total_pasta= Total_pasta+(quant*200);
            cout<<"\n\n\t\t"<<quant<<"kg Pasta is the order! ";

        }
        else
            cout<<"\n\tOnly "<<Qpasta-Spasta<<"kg Pasta Remaining in hotel";
        
        break;
    case 3:
        cout<<"\n\n Enter burger quantity: ";

        cin>>quant;
        if (Qburger-Sburger >=quant)
        {
            Sburger=Sburger+quant;
            Total_burger= Total_burger+(quant*120);
            cout<<"\n\n\t\t"<<quant<<" Burger is the order! ";

        }
        else
            cout<<"\n\tOnly "<<Qburger-Sburger<<" Burger Remaining in hotel";
        
        break;
    case 4:
        cout<<"\n\n Enter noodles quantity: ";

        cin>>quant;
        if (Qnoodles-Snoodles >=quant)
        {
            Snoodles=Snoodles+quant;
            Total_noodles= Total_noodles+(quant*140);
            cout<<"\n\n\t\t"<<quant<<"kg Noodles is the order! ";

        }
        else
            cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" Noodles Remaining in hoshakes";
        
        break;
    case 5:
        cout<<"\n\n Enter shakes quantity: ";

        cin>>quant;
        if (Qshakes-Sshakes >=quant)
        {
            Sshakes=Sshakes+quant;
            Total_shakes= Total_shakes+(quant*100);
            cout<<"\n\n\t\t"<<quant<<" Shakes is the order! ";

        }
        else
            cout<<"\n\tOnly "<<Qshakes-Sshakes<<" Shakes Remaining in hotel";
        
        break;
    case 6:
        cout<<"\n\n Enter paneer quantity: ";

        cin>>quant;
        if (Qpaneer-Spaneer >=quant)
        {
            Spaneer=Spaneer+quant;
            Total_paneer= Total_paneer+(quant*150);
            cout<<"\n\n\t\t"<<quant<<" Panner-roll is the order! ";

        }
        else
            cout<<"\n\tOnly "<<Qpaneer-Spaneer<<" Paneer-roll Remaining in hotel";
        
        break;

    case 7:

        cout<<"\n\t\tDetails of sales and collection ";
        cout<<"\n\n Number of rooms we had : "<<Qrooms;
        cout<<"\n\n Number of rooms we gave for rent : "<<Srooms;
        cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;        
        
        cout<<"\n\n Number of pasta we had : "<<Qpasta;
        cout<<"\n\n Number of pasta we gave for rent : "<<Spasta;
        cout<<"\n\n Remaining pasta : "<<Qpasta-Spasta;
        cout<<"\n\n Total pasta collection for the day : "<<Total_pasta;
    
        cout<<"\n\n Number of burger we had : "<<Qburger;
        cout<<"\n\n Number of burger we gave for rent : "<<Sburger;
        cout<<"\n\n Remaining burger : "<<Qburger-Sburger;
        cout<<"\n\n Total burger collection for the day : "<<Total_burger;
    
        cout<<"\n\n Number of noodles we had : "<<Qnoodles;
        cout<<"\n\n Number of noodles we gave for rent : "<<Snoodles;
        cout<<"\n\n Remaining noodles : "<<Qnoodles-Snoodles;
        cout<<"\n\n Total noodles collection for the day : "<<Total_noodles;
    
        cout<<"\n\n Number of shakes we had : "<<Qshakes;
        cout<<"\n\n Number of shakes we gave for rent : "<<Sshakes;
        cout<<"\n\n Remaining shakes : "<<Qshakes-Sshakes;
        cout<<"\n\n Total shakes collection for the day : "<<Total_shakes;
    
        cout<<"\n\n Number of paneer-roll we had : "<<Qpaneer;
        cout<<"\n\n Number of paneer-roll we gave for rent : "<<Spaneer;
        cout<<"\n\n Remaining paneer-roll : "<<Qpaneer-Spaneer;
        cout<<"\n\n Total paneer-roll collection for the day : "<<Total_paneer;
        break;

    case 8:
        exit(0);
    
    default:
        cout<<"\n ***Please select the above mentioned number!***";
        break;
    }
    goto m;

}