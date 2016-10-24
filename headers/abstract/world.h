#ifndef BYTE_WORLD_WORLD_H
#define BYTE_WORLD_WORLD_H

#include <unordered_map>
#include "sector.h"
#include "../utils/hashkey.h"

namespace abstract {

    class World {
    private:
        std::unordered_map<unsigned long int, Sector> sectors_;
        utils::HashKey<long unsigned int> hash_key_;
    public:
        World();
        ~World();
    };

}
#endif //BYTE_WORLD_WORLD_H
