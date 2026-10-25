#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int contador = 0;
pthread_mutex_t lock;  // mutex para sincronizar

void *incrementar(void *arg) {
    for(int i=0; i<1000000; i++) {

       pthread_mutex_lock(&lock);   // bloquear acceso
      
      contador++;
      
       pthread_mutex_unlock(&lock); // liberar acceso
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t h1, h2;

    pthread_create(&h1, NULL, incrementar, NULL);
    pthread_create(&h2, NULL, incrementar, NULL);

    pthread_join(h1, NULL);
    pthread_join(h2, NULL);

    printf("Valor final del contador: %d\n", contador);
    return 0;
}
