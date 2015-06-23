#include "genmino.h"
#include <cstdlib>
#define NUM_MINO 6
#define MINO_S 0
#define MINO_I 1
#define MINO_L 2
#define MINO_J 3
#define MINO_Z 4
#define MINO_O 5

void new_hand()
{
    cout << "new_hand(): delete Mino"<<endl;
    delete temp;
}

Mino* genMino(){
    set_new_handler(new_hand)
    int mino_type;
    mino_type=random()%NUM_MINO;
    switch(mino_type){
        case MINO_S:
            ptr=new MinoS();
            temp=ptr;
            break;
        case MINO_I:
            ptr=new MinoI();
            temp=ptr;
            break;
        case MINO_L:
            ptr=new MinoL();
            temp=ptr;
            break;
        case MINO_J:
            ptr=new MinoJ();
            temp=ptr;
            break;
        case MINO_Z:
            ptr=new MinoZ();
            temp=ptr;
            break;
        case MINO_O:
            ptr=new MinoO();
            temp=ptr;
            break;
    }
    return ptr;
}