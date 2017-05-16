//
//  main.c
//  learnc
//
//  Created by beace on 2017/5/12.
//  Copyright © 2017年 beace. All rights reserved.
//

// 冒泡排序
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[10] = {2,32,12,3,22,80,33,21,32,10};
    for(int i = 10; i >= 0; i --){
	    for(int j = 0; j < i; j ++) {
		    int temp;
		    if (arr[j] > arr[j+1]) {
			    temp = arr[j];
			    arr[j] = arr[j + 1];
			    arr[j+1] = temp;
		    }
	    }
    }
		    
    for(int i = 0; i < 10; i ++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

