#include "Package.h"

Package::Package(){
    int initialized;
    MPI_Initialized(&initialized);
    if (initialized){
        MPI_Comm_rank(MPI_COMM_WORLD, &this->comm_rank);
        MPI_Comm_size(MPI_COMM_WORLD, &this->comm_size);
        this->package_initialized_mpi = false;
    }
}

Package::Package(int* argc, char*** argv){
    MPI_Init(argc, argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &this->comm_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &this->comm_size);
    this->package_initialized_mpi = true;
}

Package::~Package(){
    if (this->package_initialized_mpi)
        MPI_Finalize();
}