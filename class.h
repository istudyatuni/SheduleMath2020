#ifndef CLASS_H
#define CLASS_H
#include <string>
using namespace std;

class shedule;
class audit;
class tutor;
class subject {     ///класс предметов
public:
    string name;
    int num;        // кол-во пар в неделю
    string stype;   // тип предмета
    int tId;        // id преподавателя
    subject(){};
    void print();
    void input(int i);
    friend void sort_sub(subject a[]);
    friend void calculate_shedule(subject&, tutor&, shedule&, audit&);
    int getnum(){ return num; }
};

class tutor {///преподаватели
public:
    int work[4][5];
    string name;
    string post; //должность (степени) - senior lecturer
                //docent, academician, professor
    tutor(){};
    void input_work ();
    void print();
    void input(int i);
};

class audit {//аудитории
    int aId;
    int num; // номер аудитории
    int vol; // объем аудитории
    int type; // тип аудитории компьютерная - 1, обычная - 0
public:
    audit(){};
};

class shedule {//само расписание
public:
    string name;//предмет
    string tut;
    int aud;
    friend void calculate_shedule(subject&, tutor&, shedule&, audit&);
    shedule(){};
};

#endif // CLASS_H