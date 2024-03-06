/*
Вход: http://static.ak.fbcdn.net/rsrc.php/zB3EA/hash/7x0yx3gz.gif
Изход:
протокол: http
хост: static.ak.fbcdn.net
път: rsrc.php/zB3EA/hash
файл: 7x0yx3gz.gif
*/

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string urlAddres, protocol, host, way, file;
    cin >> urlAddres;

    protocol = urlAddres.substr(0, urlAddres.find(":"));
    urlAddres.erase(0, urlAddres.find("/")+2);
    host = urlAddres.substr(0,urlAddres.find_first_of("/"));
    urlAddres.erase(0, urlAddres.find("/") + 1);
    way= urlAddres.substr(0, urlAddres.find_last_of("/"));
    file = urlAddres.erase(0, urlAddres.find_last_of("/")+1);
    
    cout << "Protocol: " << protocol << endl;
    cout << "Host: " << host << endl;
    cout << "Way: " << way << endl;
    cout << "File: " << file << endl;
    
}

 
