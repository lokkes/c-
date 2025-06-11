#include <iostream>
#include <vector>


using namespace std;

template <typename T,size_t BUFF_ENT_MAX = 10>
class Ringbuffer{

private:
T Buffer[BUFF_ENT_MAX];
int head;
int size;

public:

// constructor 
Ringbuffer(){

    head = 0;
    size = 0;

}


// memeber funktionen 
bool find(const T& value){

for(int i = 0; i < size; i++){
    int index = (head - size + i + BUFF_ENT_MAX) % BUFF_ENT_MAX; // didnt understand this line but its simple 
    if(Buffer[index] == value){
        return true; 
    }
    return false;
}

}

void store(const T& value){

Buffer[head] = value;
head = (head+1) % BUFF_ENT_MAX;

if(size < BUFF_ENT_MAX){
    size++;
}


}

    T& operator[](int i) {
        // Check if index i is valid (optional but recommended)
        if (i < 0 || i >= size) {
            throw std::out_of_range("Index out of range");
        }

        // Calculate the physical index in Buffer[] considering wrapping:
        int index = (head - size + i + BUFF_ENT_MAX) % BUFF_ENT_MAX;
        return Buffer[index];
    }

    int getSize(){

        return size;
    }

};


