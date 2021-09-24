//
// Created by umi on 18/9/21.
//

#include "Cliente.h"

Cliente::Cliente() {}

void Cliente::conectar() {
    descriptor = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if(descriptor < 0)
        cout << "Error al crear el socket" << endl;

    info.sin_family = AF_INET;
    info.sin_addr.s_addr = inet_addr("127.0.0.1");
    info.sin_port = ntohs(4050);
    memset(&info.sin_zero, 0, sizeof(info.sin_zero));

    if((connect(descriptor, (sockaddr *)&info, (socklen_t)sizeof(info))) < 0) {
        cout << "Error al conectarse con el servidor" << endl;
    }
    cout << "Nos hemos conectado correctamente" << endl;
    pthread_t hilo;
    pthread_create(&hilo, 0, Cliente::Controlador, (void *)this);
    pthread_detach(hilo);
}

void * Cliente::Controlador(void *obj) {
    Cliente* c = (Cliente *)obj;
    while(true){
        string mensaje;
        char buffer[1024] = {0};
        while(1){
            memset(buffer, 0, 1024);
            int bytes = recv(c->descriptor, buffer, 1024, 0);
            mensaje.append(buffer, bytes);
            if(bytes <= 0){
                close(c->descriptor);
                pthread_exit(NULL);
            }
           if(bytes < 1024){
                break;
            }
        }
        cout << mensaje << endl;
    }
    close(c->descriptor);
    pthread_exit(NULL);
}

void Cliente::setMensaje(const char *msn) {
    send(descriptor, msn, strlen(msn), 0);
}