#include "../Package.h"

int main(int argc, char **argv){
    MPI_Init(&argc, &argv);
    Package init;

    if (init.size() != 4){
        MPI_Finalize();
        return 1;
    }

    MPI_Finalize();
    return 0;
}