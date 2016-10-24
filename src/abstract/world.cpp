//
// Created by Rodrigo Martins de Oliveira (allrod5@hotmail.com) on 24/10/16.
//
// This file is part of Byte World (https://github.com/allrod5/Byte-World).
//
// Byte World is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Byte World is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Byte World. If not, see <http://www.gnu.org/licenses/>.
//

#include "../../headers/abstract/world.h"

abstract::World::World() {
    hash_key_ = utils::HashKey<long unsigned int>();
    sectors_ = std::unordered_map<unsigned long int, Sector>();
    sectors_.emplace(hash_key_.get_new_key() , Sector());
}

abstract::World::~World() {

}

