//Test case
//040000000001034620603000070000483507000050060000009040005000001800547396000021000

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAP_SIZE 81

void printMap(int Map[MAP_SIZE]){
    int cnt = 0;
    for(int y = 0; y < 9; y++){
        for(int x = 0; x < 9; x++){
        printf("%d ",Map[cnt]);
        cnt++;
        }
    printf("\n");
    }
}


int main(int argc, char *argv[])
{
    if(argc != 2){
        printf("Argument error.");
        return -1;
    }

    if(strlen(argv[1]) != MAP_SIZE){
        printf("Map size error.");
        return -1;
    }

    printf("\n\n");

    int map[MAP_SIZE] = {0, };

    for(int i = 0; i < MAP_SIZE; i++) map[i] = argv[1][i] - 48;

    printMap(map);

    return 0;
}
