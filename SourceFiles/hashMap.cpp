#include "hashMap.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

hashMap::hashMap() {
    map = NULL;
    first = NULL;
    numKeys = NULL;
    mapSize = NULL;
}

hashMap::addKeyValue(string k, string v) {
    if(map[v]==NULL){
        
    }
}

hashMap::getIndex(string k) {

}

hashMap::calcHash(string k) {
    return k%mapSize;
}

hashMap::getClosestPrime() {

}

hashMap::reHash() {

}

hashMap::dblHash(int h, int i, string k) {

}

hashMap::findKey(string k) {

}

hashMap::printMap() {

}
