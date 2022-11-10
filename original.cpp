#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <istream>

using namespace std;

struct Name {
    string name;
    bool is_male;
    int occurances = 0;
};

vector<Name> top_male_year(vector<Name> names);
vector<Name> top_female_year(vector<Name> names);
vector<Name> top_any_year(vector<Name> names);
vector<Name> top_male_letter(vector<Name> names, const char letter);
vector<Name> top_female_letter(vector<Name> names, const char letter);
vector<Name> top_any_letter(vector<Name> names, const char letter);
float probability_male_year(vector<Name> names);
float probability_female_year(vector<Name> names);
float probability_male_name_year(vector<Name> names, const string name);
float probability_female_name_year(vector<Name> names, const string name);

int main() {
    /* STEP 1: Load the data into the 2D Vector
     * Where the first indicies are the year starting from 0 (1880)
     * and the second indicies are the actual names
     */
    vector<vector<Name>> popular_names;

    // STEP 2: Menu Loop (This is partially done for you)
    int choice = 0;
    while (true) {
        cout << "1. Top 10 Male Names of a Year\n";
        cout << "2. Top 10 Female Names of a Year\n";
        cout << "3. Top 10 Names of a Year\n";
        cout << "4. Top 10 Male Names given a letter in a Given Year\n";
        cout << "5. Top 10 Female Names given a letter in a Given Year\n";
        cout << "6. Top 10 Names given a letter in a Given Year\n";
        cout << "7. Probability of a Male Baby in a Given Year\n";
        cout << "8. Probability of a Female Baby in a Given Year\n";
        cout << "9. Probability of Male Baby Name in a Given Year\n";
        cout << "10. Probability of Female Baby Name in a Given Year\n";
        cout << "11. Quit\n";
        cout << "-> ";
        cin >> choice;
        cout << endl;

        // STEP 3: Programming the Menu Logic
        if (choice == 1) {
            int year;
            cout << "Enter Year: ";
            cin >> year;
            vector<Name> vec = top_male_year(popular_names.at(year-1880));
            for (int i = 0; i < 10; i++)
                cout << i+1 << ". " << vec.at(i).name << endl;
        }
        else if (choice == 2) {return 2;}
        else if (choice == 3) {return 3;}
        else if (choice == 4) {return 4;}
        else if (choice == 5) {return 5;}
        else if (choice == 6) {return 6;}
        else if (choice == 7) {return 7;}
        else if (choice == 8) {return 8;}
        else if (choice == 9) {return 9;}
        else if (choice == 10) {return 10;}
        else if (choice == 11) {
            break;
        }
        else {
            continue;
        }
        cout << endl;
    }
}

// STEP 4: Function Definitions
vector<Name> top_male_year(vector<Name> names) {
    return {};
}

vector<Name> top_female_year(vector<Name> names) {
    return {};
}

vector<Name> top_any_year(vector<Name> names) {
    return {};
}

vector<Name> top_male_letter(vector<Name> names, const char letter) {
    return {};
}

vector<Name> top_female_letter(vector<Name> names, const char letter) {
    return {};
}

vector<Name> top_any_letter(vector<Name> male_names, const char letter) {
    return {};
}

float probability_male_year(vector<Name> names) {
    return 0.0;
}

float probability_female_year(vector<Name> names) {
    return 0.0;
}

float probability_male_name_year(vector<Name> names, const string name) {
    return 0.0;
}

float probability_female_name_year(vector<Name> names, const string name) {
    return 0.0;
}
