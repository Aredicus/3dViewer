//
// Created by Ared Icus on 19.04.2023.
//

#include "parse.h"

int main() {
    float *vershs;
    unsigned int *poverhs;
    int a = 0;
    int b = 0;

    s21_parse("/Users/aredicus/Desktop/projects/C_projects/C8_3DViewer_v1.0-1/src/Viewer/objects/1.obj", &vershs, &poverhs, &a, &b);
    for(int i = 0; i < a * 3; i++) {
        printf("%d ", poverhs[i]);
        if(i%3 == 2) {
            printf("\n");
        }
    }
}