#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int id1, id2, id3;
        string name1, name2, name3;
        char sec1, sec2, sec3;
        int marks1, marks2, marks3;

        cin >> id1 >> name1 >> sec1 >> marks1;
        cin >> id2 >> name2 >> sec2 >> marks2;
        cin >> id3 >> name3 >> sec3 >> marks3;

        int maxId = id1;
        string maxName = name1;
        char maxSec = sec1;
        int maxMarks = marks1;

        if (marks2 > maxMarks || 
           (marks2 == maxMarks && id2 < maxId)) {
            maxId = id2;
            maxName = name2;
            maxSec = sec2;
            maxMarks = marks2;
        }

        if (marks3 > maxMarks || 
           (marks3 == maxMarks && id3 < maxId)) {
            maxId = id3;
            maxName = name3;
            maxSec = sec3;
            maxMarks = marks3;
        }

        cout << maxId << " " << maxName << " " 
             << maxSec << " " << maxMarks << endl;
    }

    return 0;
}