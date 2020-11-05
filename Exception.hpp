#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

class Exception {
private:
    char *msg;
public:
    Exception(const char *);

    void printMessageError();
};

#endif