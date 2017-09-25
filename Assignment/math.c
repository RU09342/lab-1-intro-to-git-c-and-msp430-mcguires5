#include <stdio.h>

#include "math.h"


int math(int num1, int num2, char Operator){

    if(Operator == '%'){

        return(num1 % num2);

    }else if(Operator == '+'){

        return(num1 + num2);

    }else if(Operator == '-'){

        return(num1 - num2);

    }else if(Operator == '*'){

        return(num1*num2);

    }else if(Operator == '/'){

        return(num1/num2);

    }

}




int main(void) {

    int y = math(6,5,'/');  /* Use the function here */

    printf("%d\n", y);

    return 0;

}
