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

    // if/else ladder for each instruction
    if(strcmp(instruction, "plus") == 1){

        result = plus(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "plusi") == 1){

        result = plusi(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "avg") == 1){

        result = avg(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "minus") == 1){

        result = minus(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "minui") == 1){

        result = plusi(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "times") == 1){

        return result;

    }

    else if(strcmp(instruction, "timei") == 1){

        return result;

    }

    else if(strcmp(instruction, "div") == 1){

        return result;

    }

    else if(strcmp(instruction, "divi") == 1){

        return result;

    }

    else if(strcmp(instruction, "mod") == 1){

        return result;

    }

    else if(strcmp(instruction, "modi") == 1){

        return result;

    }

    else if(strcmp(instruction, "div4") == 1){

        return result;

    }

    else if(strcmp(instruction, "mult4") == 1){

        return result;

    }

    else if(strcmp(instruction, "equal") == 1){

        return result;

    }

    else if(strcmp(instruction, "noteq") == 1){

        return result;

    }

    else if(strcmp(instruction, "less") == 1){

        return result;

    }

    else if(strcmp(instruction, "great") == 1){

        return result;

    }

    else if(strcmp(instruction, "isneg") == 1){

        return result;

    }

    else if(strcmp(instruction, "ispos") == 1){

        return result;

    }

    else if(strcmp(instruction, "iseve") == 1){

        return result;

    }

    else if(strcmp(instruction, "isodd") == 1){

        return result;

    }

    else if(strcmp(instruction, "exp") == 1){

        return result;

    }

    else if(strcmp(instruction, "expi") == 1){

        return result;

    }

    else if(strcmp(instruction, "prim") == 1){

        return result;

    }

    else if(strcmp(instruction, "set") == 1){

        return value2;

    }

    else if(strcmp(instruction, "neg") == 1){

        return result;

    }

    else if(strcmp(instruction, "addao") == 1){

        return result;

    }

    else if(strcmp(instruction, "addat") == 1){

        return result;

    }

    else if(strcmp(instruction, "copy") == 1){

        return result;

    }

    else if(strcmp(instruction, "lessi") == 1){

        return result;

    }

    else if(strcmp(instruction, "greti") == 1){

        return result;

    }

    else if(strcmp(instruction, "minao") == 1){

        return result;

    }

    else if(strcmp(instruction, "clear") == 1){

        return 0;

    }

    else if(strcmp(instruction, "fact") == 1){

        return result;

    }

    else if(strcmp(instruction, "facti") == 1){

        return result;

    }

    else if(strcmp(instruction, "log") == 1){

        return result;

    }

    else if(strcmp(instruction, "nlog") == 1){

        return result;

    }

    else if(strcmp(instruction, "fctol") == 1){

        return result;

    }

    else if(strcmp(instruction, "fctoi") == 1){

        return result;

    }

    else if(strcmp(instruction, "perm") == 1){

        return result;

    }

    else if(strcmp(instruction, "permi") == 1){

        return result;

    }


    else{
        printf("Error: invalid instruction. Destination register cleared.");
        return 0;
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

    else if(strcmp(instruction, "avg") == 1){

        return 1;

    }

    else if(strcmp(instruction, "minus") == 1){

        return 1;

    }

    else if(strcmp(instruction, "minui") == 1){

        return 2;

    }

    else if(strcmp(instruction, "times") == 1){

        return 1;

    }

    else if(strcmp(instruction, "timei") == 1){

        return 2;

    }

    else if(strcmp(instruction, "div") == 1){

        return 1;

    }

    else if(strcmp(instruction, "divi") == 1){

        return 2;

    }

    else if(strcmp(instruction, "mod") == 1){

        return 1;

    }

    else if(strcmp(instruction, "modi") == 1){

        return 2;

    }

    else if(strcmp(instruction, "div4") == 1){

        return 5;

    }

    else if(strcmp(instruction, "mult4") == 1){

        return 5;

    }

    else if(strcmp(instruction, "equal") == 1){

        return 1;

    }

    else if(strcmp(instruction, "noteq") == 1){

        return 1;

    }

    else if(strcmp(instruction, "less") == 1){

        return 1;

    }

    else if(strcmp(instruction, "great") == 1){

        return 1;

    }

    else if(strcmp(instruction, "isneg") == 1){

        return 5;

    }

    else if(strcmp(instruction, "ispos") == 1){

        return 5;

    }

    else if(strcmp(instruction, "iseve") == 1){

        return 5;

    }

    else if(strcmp(instruction, "isodd") == 1){

        return 5;

    }

    else if(strcmp(instruction, "exp") == 1){

        return 1;

    }

    else if(strcmp(instruction, "expi") == 1){

        return 2;

    }

    else if(strcmp(instruction, "prim") == 1){

        return 1;

    }

    else if(strcmp(instruction, "set") == 1){

        return 3;

    }

    else if(strcmp(instruction, "neg") == 1){

        return 5;

    }

    else if(strcmp(instruction, "addao") == 1){

        return 1;

    }

    else if(strcmp(instruction, "addat") == 1){

        return 1;

    }

    else if(strcmp(instruction, "copy") == 1){

        return 5;

    }

    else if(strcmp(instruction, "lessi") == 1){

        return 2;

    }

    else if(strcmp(instruction, "greti") == 1){

        return 2;

    }

    else if(strcmp(instruction, "minao") == 1){

        return 1;

    }

    else if(strcmp(instruction, "clear") == 1){

        return 3;

    }

    else if(strcmp(instruction, "fact") == 1){

        return 1;

    }

    else if(strcmp(instruction, "facti") == 1){

        return 2;

    }

    else if(strcmp(instruction, "log") == 1){

        return 1;

    }

    else if(strcmp(instruction, "nlog") == 1){

        return 1;

    }

    else if(strcmp(instruction, "fctol") == 1){

        return 5;

    }

    else if(strcmp(instruction, "fctoi") == 1){

        return 3;

    }

    else if(strcmp(instruction, "perm") == 1){

        return 1;

    }

    else if(strcmp(instruction, "permi") == 1){

        return 2;

    }

    else{

        return -1; //unknown instruction

    }

}

void integer_to_binary(int integer){
    
    char binary [32];

    return binary;

}


int main() {

    //declare array for registers
    int registerCount = 8;
    int regArray[registerCount];
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

    printf("Current value of registers:\n", inputString);
        for (int i = 0; i < registerCount; i++){
            printf("%d, ", regArray[i]);
        }
    
    while(1){

        //print current register status before each user input


        //input
        printf("%s\n", inputString);
        scanf("%s", inputString);

        //if exit command is typed, exit the program
        if (strcmp(inputString, exitCommand) == 1){
            exit(0);
        } 

        //break up input string into smaller strings
        else{
            sscanf(inputString,"%s[^', '],%s[^', '],%s[^', '],%s", instruction, arg1, arg2, arg3);
        }

        //parse first argument, which must always be a valid register
        value1 = find_reg(arg1);

        if (value1 < 0 || value1 >= registerCount){

            printf("The first argument must be a register between r0 and r%d.\n", registerCount - 1);
            continue;
            
        } 



    //Prepare values for different instruction types. The atoi function is technically obsolete but should work for the purposes of this project.

        type = find_instruction_type(instruction);

    //type 1: three registers

        if (find_instruction_type(instruction) == 1){

            arguments[0] = regArray[value1];

            value2 = find_reg(arg2);

            if (value2 < 0 || value2 >= registerCount){

                printf("Invalid register. Available registers range from r0 to r%d.\n", registerCount - 1);
                continue;
            
            } 

            arguments[1] = regArray[value2];

            value3 = find_reg(arg3);

            if (value3 < 0 || value3 >= registerCount){

                printf("Invalid register. Available registers range from r0 to r%d.\n", registerCount - 1);
                continue;
            
            } 

            arguments[2] = regArray[value3];

        }
        
    //type 2: 2 registers + 1 constant

        else if(find_instruction_type(instruction) == 2){

            arguments[0] = regArray[value1];

            value2 = find_reg(arg2);

            if (value2 < 0 || value2 >= registerCount){

                printf("Invalid register. Available registers range from r0 to r%d.\n", registerCount - 1);
                continue;
            
            } 

            arguments[1] = regArray[value2];

            arguments[2] = atoi(arg3);

        }
    //type 3: 1 register + 1 constant

        else if(find_instruction_type(instruction) == 3){

            arguments[0] = regArray[value1];

            arguments[1] = atoi(arg2);

            arguments[2] = 0;//should not be used in this case
        }
    //type 4: 1 register + 2 constants

        else if(find_instruction_type(instruction) == 4){

            arguments[0] = regArray[value1];

            arguments[1] = atoi(arg2);

            arguments[2] = atoi(arg3);

        }
    //type 5: 1 register + 1 register

        else if(find_instruction_type(instruction) == 5){

            arguments[0] = regArray[value1];

            value2 = find_reg(arg2);

            if (value2 < 0 || value2 >= registerCount){

                printf("Invalid register. Available registers range from r0 to r%d.\n", registerCount - 1);
                continue;
            
            } 

            arguments[1] = regArray[value2];

            arguments[2] = 0;//should not be used in this case

        }

    //unknown
        else{

            printf("Unknown instruction.");
            continue;

        }



        regArray[value1] = call_instruction(instruction, arguments[0], arguments[1], arguments[2]);

        printf("Current value of registers:\n", inputString);
            for (int i = 0; i < registerCount; i++){
            printf("%d, ", regArray[i]);
            }



    }

    return(0);
}