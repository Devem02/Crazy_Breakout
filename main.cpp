#include "Server.h"

Server* server;
void * serverRun(void *){
    try {
        server->run();
    } catch (string ex){
        cout << ex << endl;
    }
}

int main() {
    server = new Server;
    pthread_t hiloServer;
    pthread_create(&hiloServer, 0, serverRun, NULL);
    pthread_detach(hiloServer);

    string json = "Hola desde el servidor";
    while(1){
        string msn;
        cin >> msn;
        if(msn == "salir")
            break;
        server->setMensaje(json.c_str());
    }
    delete server;
    return 0;
}
