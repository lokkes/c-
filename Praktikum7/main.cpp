#include <iostream>
#include <vector>
#include "RingPuffer.h"

using namespace std;

int main() {

    Ringbuffer<int, 5> buffer;

    // Store values
    buffer.store(10);
    buffer.store(20);
    buffer.store(30);
    
    //acess
    for(int i = 0; i < buffer.getSize(); i++){
        cout << buffer[i] << " ";
    }

    cout << endl;

    buffer.store(40);
    buffer.store(50);
    buffer.store(60);

    for (int i = 0; i < buffer.getSize(); i++) {
        cout << buffer[i] << " ";
    }
    cout << endl;

    return 0;

}