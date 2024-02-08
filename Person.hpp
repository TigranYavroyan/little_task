#ifndef PERSON_H
#define PERSON_H

class Person {
public:
    void to_sleep ();
    void to_wake_up ();
private:
    bool sleep{};
};

#endif // PERSON_H