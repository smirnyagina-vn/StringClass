#pragma once
#ifndef STRINGCLASS_STRINGCLASS_H
#define STRINGCLASS_STRINGCLASS_H
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <initializer_list>

#define MAX_INPUT_STR_SIZE 500000

using namespace std;

class StringClass {
private:

    char* string_variable;
    size_t size_variable;

public:

    StringClass();
    StringClass(const StringClass&);
    StringClass(const char* string);
    StringClass(const std::initializer_list<int> &char_list);
    StringClass(string str);
    StringClass(const char* str, size_t count);// init class with count characters of  “char string”,Constructor(“hello”, 4) -> “hell”
    StringClass(size_t count, char symbol);// init class with count of characters Constructor(4, ‘a’) -> “aaa”

    ~StringClass();

    const StringClass& operator+ (const StringClass& str);
    const StringClass& operator+ (const char* str);
    const StringClass& operator+ (string str);

    const StringClass& operator+= (const char* str);
    const StringClass& operator+= (string str);

    const StringClass& operator= (const char* str);
    const StringClass& operator= (StringClass tmp);
    const StringClass& operator= (string str);
    const StringClass& operator= (char symbol);

    char& operator[] (size_t index);

    bool operator>(const StringClass& tmp);
    bool operator<(const StringClass& tmp);
    bool operator>=(const StringClass& tmp);
    bool operator<=(const StringClass& tmp);

    bool operator!=(const StringClass& tmp);
    bool operator==(const StringClass& tmp);

    const char* c_str();
    const char* data();
    size_t length();
    size_t size();
    bool empty();
    size_t capacity();
    void shrink_to_fit();
    void clear();
    bool equals(const char* str);

    friend std::ostream& operator<< (std::ostream& out, const StringClass& tmp);
    friend std::istream& operator>> (std::istream& in, StringClass& tmp);

    StringClass& insert(size_t index, size_t count, char symbol);
    StringClass& insert(size_t index, char* str);
    StringClass& insert(size_t index, char* str, size_t count);
    StringClass& insert(size_t index, string str);
    StringClass& insert(size_t index, string str, size_t count);

    StringClass& erase(size_t index, size_t count);

    StringClass& append(size_t count, char symbol);
    StringClass& append(char* str);
    StringClass& append(char* str, size_t index, size_t count);
    StringClass& append(string str);
    StringClass& append(string str, size_t index, size_t count);

    StringClass& replace(size_t index, size_t count, char* str);
    StringClass& replace(size_t index, size_t count, string str);

    StringClass substr(size_t index);
    StringClass substr(size_t index, size_t count);

    long long int find(const char* str);
    long long int find(const char* str, size_t index);
    long long int find(string str);
    long long int find(string str, std::size_t index);

};

#endif //STRINGCLASS_STRINGCLASS_H
