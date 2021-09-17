//
// Created by ksy on 17.09.2021.
//

#include "magicspells.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell {
private:
    string scrollName;
public:
    Spell(): scrollName("") { }
    Spell(string name): scrollName(name) { }
    virtual ~Spell() { }
    string revealScrollName() {
        return scrollName;
    }
};

class Fireball : public Spell {
private: int power;
public:
    Fireball(int power): power(power) { }
    void revealFirepower(){
        cout << "Fireball: " << power << endl;
    }
};

class Frostbite : public Spell {
private: int power;
public:
    Frostbite(int power): power(power) { }
    void revealFrostpower(){
        cout << "Frostbite: " << power << endl;
    }
};

class Thunderstorm : public Spell {
private: int power;
public:
    Thunderstorm(int power): power(power) { }
    void revealThunderpower(){
        cout << "Thunderstorm: " << power << endl;
    }
};

class Waterbolt : public Spell {
private: int power;
public:
    Waterbolt(int power): power(power) { }
    void revealWaterpower(){
        cout << "Waterbolt: " << power << endl;
    }
};

class SpellJournal {
public:
    static string journal;
    static string read() {
        return journal;
    }
};
string SpellJournal::journal = "";

/// LCS Problem. Dynamic programming
int compareSequence(const string& a, const string& b){

    int r=a.length();
    int n=b.length();
    int arr[r + 1][n + 1];

    for (int i=0; i <= r ; ++i) {
        arr[i][0]=0;
    }
    for (int j=0; j <= n ; ++j) {
        arr[0][j]=0;
    }

    for (int i=1; i <= r; ++i) {
        for (int j=1; j <= n; ++j) {
            if (a[i-1] == b[j-1])
                arr[i][j]=arr[i-1][j-1]+1;
            else
                arr[i][j]=max(arr[i][j-1], arr[i-1][j]);
        }
    }

    return arr[r][n];
}

void counterspell(Spell *spell) {

/* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Fireball *fireball;
    Frostbite *frostbite;
    Thunderstorm *thunderstorm;
    Waterbolt *waterbolt;

    if (fireball = dynamic_cast<Fireball *>(spell)) {
        fireball->revealFirepower();
    } else if (frostbite = dynamic_cast<Frostbite *>(spell)) {
        frostbite->revealFrostpower();
    } else if (thunderstorm = dynamic_cast<Thunderstorm *>(spell)) {
        thunderstorm->revealThunderpower();
    } else if (waterbolt = dynamic_cast<Waterbolt *>(spell)) {
        waterbolt->revealWaterpower();
    } else {
        cout << compareSequence(spell->revealScrollName(), SpellJournal::read()) << endl;
    }
}

class Wizard {
public:
    Spell *cast() {
        Spell *spell;
        string s; cin >> s;
        int power; cin >> power;
        if(s == "fire") {
            spell = new Fireball(power);
        }
        else if(s == "frost") {
            spell = new Frostbite(power);
        }
        else if(s == "water") {
            spell = new Waterbolt(power);
        }
        else if(s == "thunder") {
            spell = new Thunderstorm(power);
        }
        else {
            spell = new Spell(s);
            cin >> SpellJournal::journal;
        }
        return spell;
    }
};

int hackerrank::MagicSpells::run() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}

std::string hackerrank::MagicSpells::name() const {
    return "Magic Spells";
}