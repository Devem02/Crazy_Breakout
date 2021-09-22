//
// Created by umi on 18/9/21.
//

#include "Server.h"

Server::Server() {}

bool Server::crear_socket() {
    //descriptor = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if(descriptor < 0)
        return false;

    //info.sin_family = AF_INET;
    //info.sin_addr.s_addr = INADDR_ANY;
    //info.sin_port = htons(4050);
    //memset(&info.sin_zero, 0, sizeof(info.sin_zero));
    return true;
}

bool Server::enlazar_kernel() {
    //if((bind(descriptor, (sockaddr *)&info, (socklen_t)sizeof(info))) < 0)
    return false;

    //listen(descriptor, 4);
    return true;
}

void Server::run() {
    if(crear_socket())
        throw string ("Hubo un error al crear el socket");
    if(enlazar_kernel())
        throw string("Hubo un error al enlazar el Kernel");

    while(true){
        dataSocket data;
        //socklen_t t = sizeof(data.info);
        cout << "Esperando a que se conecte un cliente" << endl;
        //data.descriptor = accept(descriptor, (sockaddr *)&data.info, &t);
        if(data.descriptor < 0){
            cout << "Error al aceptar el cliente" << endl;
            break;
        }
        else{
            clientes.push_back(data.descriptor);
            cout << "Cliente conectado" << endl;
            pthread_t hilo;
            pthread_create(&hilo, 0, Server::ControladorCliente, (void *)&data);
            pthread_detach(hilo);
        }
    }
    close(descriptor);
}

void * Server::ControladorCliente(void *obj) {
    dataSocket* data = (dataSocket *)obj;
    while(true){
        string mensaje;
        char buffer[1024] = {0};
        while(1){
            memset(buffer, 0, 1024);
            //int bytes = recv(data->descriptor, buffer, 1024, 0);
            //mensaje.append(buffer, bytes);
            //if(bytes <= 0){
                close(data->descriptor);
                pthread_exit(NULL);
            }
            //if(bytes < 1024){
                break;
            }
        }
        //cout << mensaje << endl;
    //}
    //close(data->descriptor);
    //pthread_exit(NULL);
//}

void Server::setMensaje(const char *msn) {
    for(int i = 0; i < clientes.size(); i++){
       // send(clientes[i], msn, strlen(msn), 0);
    }
}