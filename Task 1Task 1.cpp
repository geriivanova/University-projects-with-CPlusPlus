//1 задача
//вход:student@ue-varna.bg
/*изход:Потребител:student
Сървър: ue-varna.bg
Националност: български
*/

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string emailAddres, user, server, nationalityCheck,nationality ;
    cin >> emailAddres;

    user = emailAddres.substr(0, emailAddres.find("@"));
    server = emailAddres.substr(emailAddres.find("@") + 1);
    nationalityCheck = emailAddres.substr(emailAddres.find("."));

    if (nationalityCheck == ".bg")
    {
        nationality = "bulgarian";
    }
    else
    {
        nationality = "foreign";
    }

    cout << "User: " << user << endl;
    cout << "Server: " << server << endl;
    cout << "Nationality: " << nationality << endl;
}

