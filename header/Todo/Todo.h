//
// Created by ThatcherChen on 2022/7/7.
//

#ifndef DAYC_TODO_H
#define DAYC_TODO_H

#include <string>

struct TodoEntity
{
    std::string id;
    std::string content;
    std::string date;
};

// I prefer to transform data into a linked list.
class Todo
{
private:
    TodoEntity* headPtr;
public:
    Todo(TodoEntity* headPtr);
};

#endif //DAYC_TODO_H
