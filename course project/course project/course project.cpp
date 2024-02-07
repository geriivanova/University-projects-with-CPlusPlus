#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Entity
{
public:
    Entity() {};
    ~Entity() {};
    virtual void displayInfo() = 0;
protected:
    string type;
};

class Client : public Entity
{
public:
    Client(string name, int a, string t)
    {
        type = name;
        age = a;
        telephoneNumber = t;
    };
    ~Client() {};
    void displayInfo()
    {
        cout << "Client: " << type << ", Age: " << age << ", Contact: " << telephoneNumber << endl;
    }

private:
    int age;
    string telephoneNumber;
};

class Subscription : public Entity
{
public:
    Subscription(string subscriptionType, double subscriptionPrice)
    {
        type = subscriptionType;
        subPrice = subscriptionPrice;
    };
    ~Subscription() {};
    void displayInfo()
    {
        cout << "Subscription Type: " << type << ", Price: " << subPrice << endl;
    }

    double getSubscriptionPrice()
    {
        return subPrice;
    }

private:
    double subPrice;
};

class Training : public Entity
{
public:
    Training(string trainingType, string trainingTime)
    {
        type = trainingType;
        time = trainingTime;
    };
    ~Training() {};
    void displayInfo()
    {
        cout << "Training Type: " << type << ", Time: " << time << endl;
    }

private:
    string time;
};

class GymManagement
{
public:
    GymManagement() {};
    ~GymManagement() {};

    void addClient(Client* client)
    {
        clients.push_back(client);
    }

    void addSubscription(Subscription* subscription)
    {
        subscriptions.push_back(subscription);
    }

    void addTraining(Training* training)
    {
        trainings.push_back(training);
    }

    void listEntities()
    {
        if (clients.empty() && subscriptions.empty() && trainings.empty())
        {
            cout << "No entities!\n";
        }
        else
        {
            for (size_t i = 0; i < clients.size(); i++)
            {
                clients[i]->displayInfo();

            }

            for (size_t i = 0; i < subscriptions.size(); i++)
            {
                subscriptions[i]->displayInfo();
            }

            for (size_t i = 0; i < trainings.size(); i++)
            {
                trainings[i]->displayInfo();
            }
        }
    }

    double calculateMonthlyRevenue()
    {
        double totalRevenue = 0.0;
        for (size_t i = 0; i < subscriptions.size(); i++)
        {
            totalRevenue += subscriptions[i]->getSubscriptionPrice();
        }
        return totalRevenue;
    }
    int getClientCount()
    {
        int clientCount = 0;
        for (size_t i = 0; i < clients.size(); i++)
        {
            clientCount++;
        }
        return clientCount;
    }

private:
    vector<Client*> clients;
    vector<Subscription*> subscriptions;
    vector<Training*> trainings;
};

int main()
{
    GymManagement gym;

    string choice;
    while (choice != "0")
    {
        cout << "\n\nFITNESS CENTER MANAGEMENT MENU\n*********************\n";
        cout << "1. Add Client\n2. Add Subscription\n3. Add Training\n";
        cout << "4. List Entities\n5. Calculate Monthly Revenue\n6. Client Count\n0. Exit\nChoose: ";
        cin >> choice;
        cin.ignore('\n', 10);

        if (choice == "1")
        {
            string name, telephoneNumber;
            int age;

            cout << "Name: ";
            getline(cin, name);
            cout << "Age: ";
            cin >> age;
            cin.ignore('\n', 10);
            cout << "Contact: ";
            getline(cin, telephoneNumber);

            gym.addClient(new Client(name, age, telephoneNumber));
        }
        else if (choice == "2")
        {
            string type;
            double price;

            cout << "Subscription Type: ";
            getline(cin, type);
            cout << "Price: ";
            cin >> price;
            cin.ignore('\n', 10);

            gym.addSubscription(new Subscription(type, price));
        }
        else if (choice == "3")
        {
            string type, time;

            cout << "Training Type: ";
            getline(cin, type);
            cout << "Time: ";
            getline(cin, time);

            gym.addTraining(new Training(type, time));
        }
        else if (choice == "4")
        {
            gym.listEntities();
        }
        else if (choice == "5")
        {
            double revenue = gym.calculateMonthlyRevenue();
            cout << "Monthly Revenue: " << revenue << "lv." << endl;
        }
        else if (choice == "6")
        {
            int count = gym.getClientCount();
            cout << "Client Count: " << count << endl;
        }
    }

    return 0;
}