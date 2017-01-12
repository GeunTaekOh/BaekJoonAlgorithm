//
//  main.cpp
//  BJ2309
//
//  Created by 오근택 on 2016. 11. 9..
//  Copyright © 2016년 오근택. All rights reserved.
//

#include <stdio.h>
#include <algorithm>        
using namespace std;

int main(int argc, const char * argv[]) {
    int ary[9], total = 0;
    for(int i = 0; i < 9; i++){
        scanf("%d", &ary[i]);
        total += ary[i];
    }
    sort(ary, ary + 9);     //ary가 배열의주소값임. ary+9가 9번쨰인자. 이것도 주소니까
    
    total -= 100;
    int i = 0, j = 0, break_point = 0;
    for(i = 8; i >= 0; i--){
        for(j = i - 1; j >= 0; j--){
            if((ary[i] + ary[j]) == total){
                break_point = 1;            //break문을 바깥에껄 빠져나가기위해서
                break;
            }
        }
        if(break_point) break;
    }
    
    ary[i] = ary[j] = -1;       //2명 따로 뽑는 것. 2명제외.
    
    sort(ary, ary + 9);
    for(int m = 2; m < 9; m++)  printf("%d\n", ary[m]);
    
    return 0;
}
