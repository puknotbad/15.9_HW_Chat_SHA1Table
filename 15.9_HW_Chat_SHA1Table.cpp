// 15.4_Chat_SHA1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Chat.h"
#include "iostream"
#include "string.h"
#include <stdio.h>
#include <inttypes.h>


int main()
{
    std::cout << "Hello World!\n";

    Chat chatt;
    char _login1[LOGINLENGTH] = "user1";
    char _pass1[] = "qwerty12345";
    chatt.reg(_login1, _pass1, 12);
    char _login2[LOGINLENGTH] = "user2";
    char _pass2[] = "12345";
    chatt.reg(_login2, _pass2, 6);
    char _login3[LOGINLENGTH] = "user3";
    char _pass3[] = "67890";
    chatt.reg(_login3, _pass3, 6);
    std::cout << (chatt.login(_login1, _pass1, 12) ? _login1 : "huy") << std::endl;
    std::cout << (chatt.login(_login1, _pass2, 6) ? _login1 : "huy") << std::endl;
    std::cout << (chatt.login(_login3, _pass3, 6) ? _login3 : "huy") << std::endl;

}

