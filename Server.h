//
// Created by umi on 18/9/21.
//

#ifndef CRAZY_BREAKOUT_SERVER_H
#define CRAZY_BREAKOUT_SERVER_H

#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <string.h>
#include <string>
#include <iostream>
#include <pthread.h>
#include <vector>
#include <unistd.h>
using namespace std;

struct dataSocket{
    int descriptor;
    sockaddr_in info;
};
class Server{
public:
    Server();
    void run();
    void setMensaje(const char* msn);
private:
    int descriptor;
    sockaddr_in info;
    vector<int> clientes;

    bool crear_socket();
    bool enlazar_kernel();
    static void* ControladorCliente(void* obj);
};

#endif //CRAZY_BREAKOUT_SERVER_H
