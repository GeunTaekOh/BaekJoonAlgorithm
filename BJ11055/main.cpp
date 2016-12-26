//
//  main.cpp
//  BJ11055
//
//  Created by 오근택 on 2016. 12. 26..
//  Copyright © 2016년 오근택. All rights reserved.
//
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int numOfValue;
    int value[1001]={0,};
    int temp[1001]={0,};
    int result=0;
    
    scanf("%d",&numOfValue);
    for(int i=0; i<numOfValue; i++){
        scanf("%d",&value[i]);
        temp[i]=value[i];
    }
    
    for(int i=0; i<numOfValue; i++){
        for(int j=0; j<i; j++){
            if(value[i]>value[j] && (temp[i]<temp[j]+value[i])){
                temp[i] = temp[j]+value[i];
                
            }
        }
    }
    
    for(int i=0; i<numOfValue; i++){
        if(temp[i]>result){
            result = temp[i];
        }
        
    }
    printf("%d\n",result);
    
    return result;
}
