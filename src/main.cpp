#include <iostream>
#include <string>

// I am still thinking about how to deal with ths command-string that users input.....
// Maybe reading some books about programming techniques in linux programming makes sense.

bool init()
{

}

int main(int argc, char *argv[])
{
    using std::string, std::cout, std::cin;
    string model, func, arg;
    cin >> model >> func;
    std::getline(cin, arg);

    return 0;
}