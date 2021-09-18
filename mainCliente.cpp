//
// Created by umi on 18/9/21.
//
#include "Cliente.h"

Cliente* cliente;

void * clienteRun(void *){
    try{
        cliente->conectar();
    } catch (string ex) {
        cout << ex << endl;
    }
    pthread_exit(NULL);
}
int mainCliente() {
    cliente = new Cliente;
    pthread_t hiloCliente;
    pthread_create(&hiloCliente, 0, clienteRun, NULL);
    pthread_detach(hiloCliente);

    string json = "Hola desde el cliente";

    while(1){
        string msn;
        cin >> msn;
        if(msn == "salir")
            break;
        cliente->setMensaje(json.c_str());
    }

    delete cliente;
    return 0;
}
