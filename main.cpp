#include "overloading_databases.h"

int main()
{
    data a[5];

    //           id   bns  dnd   gjp  tjg     nm
    a[0].setData(101, 500, 200, 1000, 2000, "Paijo");
    a[1].setData(102, 500, 200, 900, 1750, "Lala");
    a[2].setData(103, 300, 375, 1000, 2150, "Lulu");
    a[3].setData(104, 600, 200, 750, 1500, "Sabari");
    a[4].setData(105, 500, 300, 850, 2500, "Sule");

    databases jos;
    cout << "\nBagain 1\n" << endl;
    jos.get(a); cout << "\nBagain 2\n"<< endl;
    jos.get(104, a); cout << "\nBagian 3\n"<< endl;
    jos.get("nama", "Sabari", a); cout << "\nBagian 3\n" << endl;
    jos.get("bonus", 500, a); cout << "\nBagian 4\n"<< endl;
    jos.get("bonus", "<=", 500, a);

    return 0;
}
