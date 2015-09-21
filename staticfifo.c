/**
 *  Academic purpose only!
 *  author: Gustavo Cavalcante - University of Brasilia
 */
 #define MAX  10

 typedef struct fifo Fifo;

/*
 * Struct containing the data of the fifo.
 */
 struct fifo{

    int beggining;
    int end;
    int number_of_nodes;

    int data[MAX];
 };

/**Creates a new FIFO structure*/
Fifo *create_fifo(){

    Fifo *fifo = (Fifo*) malloc ( sizeof(struct fifo) );

    // checks if the memory was correctly alocated.
    if ( fifo != NULL ){

        fifo->beggining = 0;
        fifo->end = 0;
        fifo->number_of_nodes = 0;

        return fifo;
    }else{

        printf("Couldn't alocante memory to the FIFO");

        return NULL;
    }
}

/**
 * Checks if the static FIFO is full
 * @param fifo is the FIFO structure itself
 * @return returns 1 if the structure is full or 0 if not and -1 if the structure is not vallid.
 */
int is_full(Fifo *fifo){

    // checks if the memory was correctly alocated.
    if ( fifo == NULL ){

        return -1;
    }else if ( fifo->number_of_nodes == MAX - 1 ){

        return 1;
    }else{

        return 0;
    }
}

/**
 * Checks if the static FIFO is empty
 * @param fifo is the FIFO structure itself
 * @return returns 1 if the structure is empty or 0 if not and -1 if the structure is not vallid.
 */
int is_empty(Fifo *fifo){

    // checks if the memory was correctly alocated.
    if ( fifo == NULL ){

        return -1;
    }else if ( fifo->number_of_nodes == 0 ){

        return 1;
    }else{

        return 0;
    }
}

/**
 * Returns the size of the fifo
 * @param fifo is the fifo itself
 * @return returns -1 if there is no fifo created or the size of the fifo
 */
int size_of_fifo(Fifo *fifo){

    // checks if the fifo exists on the memory
    if ( fifo == NULL ){

        return -1;
    }else{

        return fifo->number_of_nodes;
    }
}

/**
 * Add information to the last member of the FIFO
 * @param fifo is the fifo itself
 * @param value is the value of the information to be put on the last node.
 */
void fill_node(Fifo *fifo , int value){

    // Check if the fifo is empty
    if ( !is_full(fifo) ){

        fifo->number_of_nodes = fifo->number_of_nodes + 1; // count one to the numberr of nodes.

        // checks if the end is on the last node.
        if ( fifo->end == MAX - 1 ){

            fifo->end = 0;
        }else{

            fifo->end = fifo->end + 1;
        }

        fifo->data[fifo->end] = value; // fill the node with the value on the param
    }else{

        printf("Is full!\n");
    }

}
/**
 * Removes a node from the beggning always.
 * @param fifo is the fifo itself
 */
void remove_node(Fifo *fifo){

    // checks if the fifo is not empty.
    if ( fifo->number_of_nodes != 0 ){

        fifo->number_of_nodes = fifo->number_of_nodes - 1;
        fifo->data[fifo->beggining] = 0;

        if ( fifo->beggining == MAX - 1 ){

            fifo->beggining == 0;
        }else{

            fifo->beggining = fifo->beggining + 1;
        }

    }else{

        printf("Is empty!\n");
    }

}
/**
 * Returns the first member of the FIFO
 * @param fifo is the fifo itself
 * @return -1 if the fifo is empty or the value on the first node.
 */
int check_fifo(Fifo *fifo){

    // Checks if the fifo is empty or not alocated on the memory, if so, returns -1
    if ( is_empty(fifo) || fifo == NULL ){

        return -1;
    }else{

        return fifo->data[fifo->beggining];
    }
}

