#ifndef PACKAGE_H_0C9A
#define PACKAGE_H_0C9A

#include <mpi.h>

class Package {
    public:
        Package();
        Package(int* argc, char*** argv);
        virtual ~Package();

        int rank() const {return this->comm_rank;}
        int size() const {return this->comm_size;}

    private:
        int comm_rank, comm_size;
        bool package_initialized_mpi;
};

#endif // PACKAGE_H_0C9A