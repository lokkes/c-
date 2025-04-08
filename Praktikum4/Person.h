#ifndef PERSON
#define PERSON

class Person{

    private:

    char name[30+1];
    char surname[30+1];
    Date birthday;


    public:

    //constructor
    Person(const char *name, const char*surname, int d, int m, int y);
    Person(const char *name, const char*surname);

    void show(ostream &os);// whats this ?

    void setBirthday(int d, int m, int y);

    const Date getBirthdate() const{return birthday;}// is das ein objekt ?

    // getter funktionen
    const char *getName() const {return name;}
    const char *getsurName() const {return surname;}

    //setter funktionen
    void setName(const char *name);
    void setSurname(const char *surname);
}

#endif