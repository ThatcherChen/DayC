#ifndef DAYC_TODO_H
#define DAYC_TODO_H

#include <string>
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <sstream>

class ToDoEntity {
private:
    std::string _id;
    std::string _content;
    std::string _date;
public:
    ToDoEntity();
    ToDoEntity(const std::string& content, const std::string& date);
    ToDoEntity(const ToDoEntity& copyFrom);
    std::string id() const;
    void id(const std::string& id);
    std::string content() const;
    void content(const std::string& content);
    std::string date() const;
    void date(const std::string& date);
    friend std::ostream& operator<<(std::ostream& in, const ToDoEntity& entity);
};

class ToDoContainer {
private:
    std::vector<std::unique_ptr<ToDoEntity>> list;
    std::string filePath;
public:
    ToDoContainer();
    ToDoContainer(const std::string& filePath);
    bool loadFromFile();
    bool removeEntity(const std::string& id);
    bool addEntity(const std::string& id, const std::string& content, const std::string& date);
    bool addEntity(ToDoEntity* entityToAdd);
    bool saveIntoFile();
};

#endif //DAYC_TODO_H