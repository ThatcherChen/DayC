#include "Todo/Todo.h"

ToDoEntity::ToDoEntity() {
    std::time_t curTime = time(nullptr);
    std::stringstream convertStream;
    convertStream << std::hex << curTime;
    _id = "T" + convertStream.str();
    _content = "Empty ToDo";
    _date = "Empty ToDo";
}

ToDoEntity::ToDoEntity(const std::string& content, const std::string& date) {
    std::time_t curTime = time(nullptr);
    std::stringstream convertStream;
    convertStream << std::hex << curTime;
    _id = "T" + convertStream.str();
    _content = content;
    _date = date;
}

std::string ToDoEntity::id() const {
    return _id;
}

void ToDoEntity::id(const std::string &id) {
    _id = id;
}

std::string ToDoEntity::content() const {
    return _content;
}

void ToDoEntity::content(const std::string &content) {
    _content = content;
}

std::string ToDoEntity::date() const {
    return _date;
}

void ToDoEntity::date(const std::string &date) {
    _date = date;
}

std::ostream &operator<<(std::ostream& in, const ToDoEntity &entity) {
    in << entity._id << entity._date << entity._content << std::endl;
    return in;
}