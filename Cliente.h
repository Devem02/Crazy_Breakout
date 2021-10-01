/**
* @file Cliente.h
* @version 1.0
* @date 18/09/2021
* @title Cliente
*/

#ifndef CRAZY_BREAKOUT_CLIENTE_H
#define CRAZY_BREAKOUT_CLIENTE_H

#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <string.h>
#include <string>
#include <iostream>
#include <pthread.h>
#include <vector>
#include <unistd.h>
#include <arpa/inet.h>

using namespace std;

class Cliente{
public:
    Cliente();
    void conectar();
    void setMensaje(const char* msn);
private:
    int descriptor;
    sockaddr_in info;
    static void* Controlador(void* obj);
};

#endif //CRAZY_BREAKOUT_CLIENTE_H
