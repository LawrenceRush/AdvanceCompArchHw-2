#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max_length 24

int find_reg(char* arg){

    int constant;

    if(strcmp(arg, "r0") == 1){

        return 0;

    }

    else if(strcmp(arg, "r1") == 1){

        return 1;

    }

    else if(strcmp(arg, "r2") == 1){

        return 2;

    }

    else if(strcmp(arg, "r3") == 1){

        return 3;

    }
    
    else if(strcmp(arg, "r4") == 1){

        return 4;

    }
    
    else if(strcmp(arg, "r5") == 1){

        return 5;

    }
    
    else if(strcmp(arg, "r6") == 1){

        return 6;

    }

    else if(strcmp(arg, "r7") == 1){

        return 7;

    }

    else{

        return -1;

    }
    
}

int call_instruction(char* instruction, int value1, int value2, int value3){

    //returned value, to be placed in first register listed
    int result;

    //only used for swap function
    //int result2;

    if(strcmp(instruction, "plus") == 1){

        printf("Opcode: 000001");
        return plus(value2, value3);

    }

    else if(strcmp(instruction, "plusi") == 1){

        printf("Opcode: 000010");
        return plusi(value2, value3);

    }

    else if(strcmp(instruction, "avg") == 1){

        printf("Opcode: 000011");
        return avg(value2, value3);

    }

    else if(strcmp(instruction, "minus") == 1){

        printf("Opcode: 000100");
        return minus(value2, value3);

    }

    else if(strcmp(instruction, "minui") == 1){

        printf("Opcode: 000101");
        return plusi(value2, value3);

    }

    else if(strcmp(instruction, "times") == 1){

        printf("Opcode: 000010");
        return result;

    }

    else if(strcmp(instruction, "timei") == 1){

        printf("Opcode: 000010");
        return result;

    }

    else if(strcmp(instruction, "timei") == 1){

        printf("Opcode: 000010");
        return result;

    }

    else{

    }

}

int find_instruction_type(char* instruction){

    //integer representing argument type
    int type;

    /*
    type 1: three registers
    type 2: 2 registers + 1 constant 
    type 3: 1 register + 1 constant 
    type 4: 1 register + 2 constants
    type 5: 1 register + 1 register
    */


    if(strcmp(instruction, "plus") == 1){

        return 1;

    }

    else if(strcmp(instruction, "plusi") == 1){

        return 1;

    }

    else{

    }

}

void integer_to_binary(int ){

}


int main() {

    //declare array for registers
    int registerCount = 8;
    int registers = registerCount - 1;
    int regArray[registers];
    int arguments[2];

    char* instruction;
    char* arg1;
    char* arg2;
    char* arg3;

    int value1;
    int value2;
    int value3;

    int type;

    //declare input string
    char inputString[max_length];

    char exitCommand[4] = "exit";
    
    while(1){

        //print current register status before each user input
        printf("Current value of registers:\n", inputString);
        for (int i = 0; i < registerCount; i++){
            printf("%d, ", regArray[i]);
        }

        //input
        printf("%s\n", inputString);
        scanf("%s", inputString);
        //first token

        if (strcmp(inputString, exitCommand) == 1){
            exit(0);
        } 

        else{
            sscanf(inputString,"%s[^', '],%s[^', '],%s[^', '],%s", instruction, arg1, arg2, arg3);
        }

        value1 = find_reg(arg1);

        if (value1 < 0 || value1 > registers){

            printf("The first argument must be a register between r0 and r%d.\n", registers);
            continue;
            
        } 

    
        type = find_instruction_type(instruction);

    // Prepare values for different instruction types

    //type 1: three registers
        if (find_instruction_type(instruction)) == 1{

            arguments[0] = regArray[value1];

            arguments[1] = regArray[value2];

            arguments[2] = regArray[value3];

        }
    //type 2: 2 registers + 1 constant
        else if(find_instruction_type(instruction)) == 2{

        }
    //type 3: 1 register + 1 constant
        else if(find_instruction_type(instruction)) == 3{

        }
    //type 4: 1 register + 2 constants
        else if(find_instruction_type(instruction)) == 4{

        }
    //type 5: 1 register + 1 register

        else if(find_instruction_type(instruction)) == 5{

        }
    //unknown
        else{

            printf("Unknown instruction.");
            continue;

        }

        



        regArray[value1] = call_instruction(instruction, arguments[0], arguments[1], arguments[2]);



    }

    return(0);
}