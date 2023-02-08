#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include "instructions1.h"
//#include "instructions2.h"
//#include "utils.h"
#define max_length 24

int find_reg(char* arg, char* reg_hex){

    int constant;

    if(strcmp(arg, "r0") == 1){

        return 0;
        reg_hex = "1";

    }

    else if(strcmp(arg, "r1") == 1){

        return 1;
        reg_hex = "2";

    }

    else if(strcmp(arg, "r2") == 1){

        return 2;
        reg_hex = "3";

    }

    else if(strcmp(arg, "r3") == 1){

        return 3;
        reg_hex = "4";

    }
    
    else if(strcmp(arg, "r4") == 1){

        return 4;
        reg_hex = "5";

    }
    
    else if(strcmp(arg, "r5") == 1){

        return 5;
        reg_hex = "6";

    }
    
    else if(strcmp(arg, "r6") == 1){

        return 6;
        reg_hex = "7";

    }

    else if(strcmp(arg, "r7") == 1){

        return 7;
        reg_hex = "8";

    }

    else{

        return -1;
        reg_hex = "0";

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

        result = times(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "timei") == 1){

        result = timei(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "divd") == 1){

        result = divd(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "divi") == 1){

        result = divi(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "mod") == 1){

        result = mod(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "modi") == 1){

        result = modi(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "div4") == 1){

        result = div4(value2);

        return result;

    }

    else if(strcmp(instruction, "mult4") == 1){

        result = mult4(value2);

        return result;

    }

    else if(strcmp(instruction, "equal") == 1){

        result = equal(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "noteq") == 1){

        result = noteq(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "less") == 1){

        result = less(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "great") == 1){

        result = great(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "isneg") == 1){

        result = isneg(value2);

        return result;

    }

    else if(strcmp(instruction, "ispos") == 1){

        result = ispos(value2);

        return result;

    }

    else if(strcmp(instruction, "iseve") == 1){

        result = iseve(value2);

        return result;

    }

    else if(strcmp(instruction, "isodd") == 1){

        result = isodd(value2);

        return result;

    }

    else if(strcmp(instruction, "expn") == 1){

        result = expn(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "expi") == 1){

        result = expi(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "prim") == 1){

        result = prim(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "set") == 1){

        result = value2;

        return result; // simple enough to perform without a separate function

    }

    else if(strcmp(instruction, "neg") == 1){

        result = neg(value2);

        return result;

    }

    else if(strcmp(instruction, "addao") == 1){

        result = addao(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "addat") == 1){

        result = addat(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "copy") == 1){

        result = value2;

        return result;  // simple enough to perform without a separate function

    }

    else if(strcmp(instruction, "lessi") == 1){

        result = lessi(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "greti") == 1){

        result = greti(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "minao") == 1){

        result = minao(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "clear") == 1){

        return 0; // simple enough to perform without a separate function

    }

    else if(strcmp(instruction, "fact") == 1){

         result = fact(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "facti") == 1){

        result = facti(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "logr") == 1){

        result = logr(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "nlog") == 1){

        result = nlog(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "fctol") == 1){

        result = fctol(value2);

        return result;

    }

    else if(strcmp(instruction, "fctoi") == 1){

        result = fctoi(value2);

        return result;

    }

    else if(strcmp(instruction, "perm") == 1){

        result = perm(value2);

        return result;

    }

    else if(strcmp(instruction, "permi") == 1){

        result = permi(value2);

        return result;

    }


    else{
        printf("Error: invalid instruction. Destination register cleared.");
        return 0;
    }

}

int find_instruction_type(char* instruction, char* instruction_hex){

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
        instruction_hex = "01";

    }

    else if(strcmp(instruction, "plusi") == 1){

        return 1;
        instruction_hex = "02";
        

    }

    else if(strcmp(instruction, "avg") == 1){

        return 1;
        instruction_hex = "03";

    }

    else if(strcmp(instruction, "minus") == 1){

        return 1;
        instruction_hex = "04";

    }

    else if(strcmp(instruction, "minui") == 1){

        return 2;
        instruction_hex = "05";

    }

    else if(strcmp(instruction, "times") == 1){

        return 1;
        instruction_hex = "06";

    }

    else if(strcmp(instruction, "timei") == 1){

        return 2;
        instruction_hex = "07";

    }

    else if(strcmp(instruction, "divd") == 1){

        return 1;
        instruction_hex = "08";

    }

    else if(strcmp(instruction, "divi") == 1){

        return 2;
        instruction_hex = "09";

    }

    else if(strcmp(instruction, "mod") == 1){

        return 1;
        instruction_hex = "0A";

    }

    else if(strcmp(instruction, "modi") == 1){

        return 2;
        instruction_hex = "0B";

    }

    else if(strcmp(instruction, "div4") == 1){

        return 5;
        instruction_hex = "0C";

    }

    else if(strcmp(instruction, "mult4") == 1){

        return 5;
        instruction_hex = "0D";

    }

    else if(strcmp(instruction, "equal") == 1){

        return 1;
        instruction_hex = "0E";

    }

    else if(strcmp(instruction, "noteq") == 1){

        return 1;
        instruction_hex = "0F";

    }

    else if(strcmp(instruction, "less") == 1){

        return 1;
        instruction_hex = "10";

    }

    else if(strcmp(instruction, "great") == 1){

        return 1;
        instruction_hex = "11";

    }

    else if(strcmp(instruction, "isneg") == 1){

        return 5;
        instruction_hex = "12";

    }

    else if(strcmp(instruction, "ispos") == 1){

        return 5;
        instruction_hex = "13";

    }

    else if(strcmp(instruction, "iseve") == 1){

        return 5;
        instruction_hex = "14";

    }

    else if(strcmp(instruction, "isodd") == 1){

        return 5;
        instruction_hex = "15";

    }

    else if(strcmp(instruction, "expn") == 1){

        return 1;
        instruction_hex = "16";

    }

    else if(strcmp(instruction, "expi") == 1){

        return 2;
        instruction_hex = "17";

    }

    else if(strcmp(instruction, "prim") == 1){

        return 1;
        instruction_hex = "18";

    }

    else if(strcmp(instruction, "set") == 1){

        return 3;
        instruction_hex = "19";

    }

    else if(strcmp(instruction, "neg") == 1){

        return 5;
        instruction_hex = "1A";

    }

    else if(strcmp(instruction, "addao") == 1){

        return 1;
        instruction_hex = "1B";

    }

    else if(strcmp(instruction, "addat") == 1){

        return 1;
        instruction_hex = "1C";

    }

    else if(strcmp(instruction, "copy") == 1){

        return 5;
        instruction_hex = "1D";

    }

    else if(strcmp(instruction, "lessi") == 1){

        return 2;
        instruction_hex = "1E";

    }

    else if(strcmp(instruction, "greti") == 1){

        return 2;
        instruction_hex = "1F";

    }

    else if(strcmp(instruction, "minao") == 1){

        return 1;
        instruction_hex = "20";

    }

    else if(strcmp(instruction, "clear") == 1){

        return 3;
        instruction_hex = "21";

    }

    else if(strcmp(instruction, "fact") == 1){

        return 1;
        instruction_hex = "22";

    }

    else if(strcmp(instruction, "facti") == 1){

        return 2;
        instruction_hex = "23";

    }

    else if(strcmp(instruction, "logr") == 1){

        return 1;
        instruction_hex = "24";

    }

    else if(strcmp(instruction, "nlog") == 1){

        return 1;
        instruction_hex = "25";

    }

    else if(strcmp(instruction, "fctol") == 1){

        return 5;
        instruction_hex = "26";

    }

    else if(strcmp(instruction, "fctoi") == 1){

        return 3;
        instruction_hex = "27";

    }

    else if(strcmp(instruction, "perm") == 1){

        return 3;
        instruction_hex = "28";

    }

    else if(strcmp(instruction, "permi") == 1){

        return 3;
        instruction_hex = "29";

    }

    else{

        return -1; //unknown instruction

    }

}


int main() {

    //declare array for registers
    int registerCount = 8;
    int regArray[8] = {1, 3, 5, 7, 9, 11, 13, 15};
    int arguments[2];

    char* instruction;
    char* arg1;
    char* arg2;
    char* arg3;

    int value1;
    int value2;
    int value3;

    int type;

    char instruction_code[2];
    char reg1_code[1];
    char reg2_code[1];
    char reg3_code[1];
    char const_code[8];

    //declare input string
    char inputString[max_length];

    char exitCommand[4] = "exit";

    printf("Current value of registers:\n", inputString);
        for (int i = 0; i < registerCount; i++){
            printf("r%d:", i);
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
        value1 = find_reg(arg1, reg1_code);

        if (value1 < 0 || value1 >= registerCount){

            printf("The first argument must be a register between r0 and r%d.\n", registerCount - 1);
            continue;
            
        } 



    //Prepare values for different instruction types. The atoi function is technically obsolete but should work for the purposes of this project.

    //type 1: three registers

        if (find_instruction_type(instruction, instruction_code) == 1){

            arguments[0] = regArray[value1];

            value2 = find_reg(arg2, reg2_code);

            if (value2 < 0 || value2 >= registerCount){

                printf("Invalid register. Available registers range from r0 to r%d.\n", registerCount - 1);
                continue;
            
            } 

            arguments[1] = regArray[value2];

            value3 = find_reg(arg3, reg3_code);

            if (value3 < 0 || value3 >= registerCount){

                printf("Invalid register. Available registers range from r0 to r%d.\n", registerCount - 1);
                continue;
            
            } 

            arguments[2] = regArray[value3];

        }
        
    //type 2: 2 registers + 1 constant

        else if(find_instruction_type(instruction, instruction_code) == 2){

            arguments[0] = regArray[value1];

            value2 = find_reg(arg2, reg2_code);

            if (value2 < 0 || value2 >= registerCount){

                printf("Invalid register. Available registers range from r0 to r%d.\n", registerCount - 1);
                continue;
            
            } 

            arguments[1] = regArray[value2];

            arguments[2] = atoi(arg3);

            sprintf(const_code, "%x", arguments[2]);

        }
    //type 3: 1 register + 1 constant

        else if(find_instruction_type(instruction, instruction_code) == 3){

            arguments[0] = regArray[value1];

            arguments[1] = atoi(arg2);

            sprintf(const_code, "%x", arguments[1]);

            arguments[2] = 0;//should not be used in this case
        }
    /*type 4: 1 register + 2 constants

        else if(find_instruction_type(instruction, instruction_code) == 4){

            arguments[0] = regArray[value1];

            arguments[1] = atoi(arg2);

            arguments[2] = atoi(arg3);

        }*/
    //type 5: 1 register + 1 register

        else if(find_instruction_type(instruction, instruction_code) == 5){

            arguments[0] = regArray[value1];

            value2 = find_reg(arg2, reg2_code);

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

        //print hex instruction code
        printf ("%s", instruction_code);
        printf ("%s", reg1_code);
        printf ("%s", reg2_code);
        printf ("%s", reg3_code);
        printf ("%s", const_code);


        regArray[value1] = call_instruction(instruction, arguments[0], arguments[1], arguments[2]);

        printf("Current value of registers:\n", inputString);
            for (int i = 0; i < registerCount; i++){
            printf("%d, ", regArray[i]);
            }



    }

    return(0);
}