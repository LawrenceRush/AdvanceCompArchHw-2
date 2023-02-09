#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "instructions1.h"
//#include "instructions2.h"

#define max_length 24

int find_reg(char* arg, char* reg_hex){

    int constant;

    if(strncmp(arg, "r0", 2) == 0){

        return 0;
        strcpy(reg_hex, "1");

    }

    else if(strncmp(arg, "r1", 2) == 0){

        return 1;
        strcpy(reg_hex,"2");

    }

    else if(strncmp(arg, "r2", 2) == 0){

        return 2;
        strcpy(reg_hex, "3");

    }

    else if(strncmp(arg, "r3", 2) == 0){

        return 3;
        strcpy(reg_hex, "4");

    }
    
    else if(strncmp(arg, "r4", 2) == 0){

        return 4;
        strcpy(reg_hex, "5");

    }
    
    else if(strncmp(arg, "r5", 2) == 0){

        return 5;
        strcpy(reg_hex, "6");

    }
    
    else if(strncmp(arg, "r6", 2) == 0){

        return 6;
        strcpy(reg_hex, "7");

    }

    else if(strncmp(arg, "r7", 2) == 0){

        return 7;
        strcpy(reg_hex, "8");

    }

    else{

        return -1;
        strcpy(reg_hex, "0");

    }
    
}

int call_instruction(char* instruction, int value1, int value2, int value3){

    //returned value, to be placed in first register listed
    int result;

    // if/else ladder for each instruction
    if(strcmp(instruction, "plus") == 01){

        result = plus(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "plusi") == 0){

        result = plusi(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "avg") == 0){

        result = avg(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "minus") == 0){

        result = minus(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "minui") == 0){

        result = plusi(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "times") == 0){

        result = times(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "timei") == 0){

        result = timei(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "divd") == 0){

        result = divd(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "divi") == 0){

        result = divi(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "mod") == 0){

        result = mod(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "modi") == 0){

        result = modi(value2, value3);

        return result;

    }

    /*else if(strcmp(instruction, "div4") == 0){

        result = div4(value2);

        return result;

    }

    else if(strcmp(instruction, "mult4") == 0){

        result = mult4(value2);

        return result;

    }

    else if(strcmp(instruction, "equal") == 0){

        result = equal(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "noteq") == 0){

        result = noteq(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "less") == 0){

        result = less(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "great") == 0){

        result = great(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "isneg") == 0){

        result = isneg(value2);

        return result;

    }

    else if(strcmp(instruction, "ispos") == 0){

        result = ispos(value2);

        return result;

    }

    else if(strcmp(instruction, "iseve") == 0){

        result = iseve(value2);

        return result;

    }

    else if(strcmp(instruction, "isodd") == 0){

        result = isodd(value2);

        return result;

    }

    else if(strcmp(instruction, "expn") == 0){

        result = expn(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "expi") == 0){

        result = expi(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "prim") == 0){

        result = prim(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "set") == 0){

        result = value2;

        return result; // simple enough to perform without a separate function

    }

    else if(strcmp(instruction, "neg") == 0){

        result = neg(value2);

        return result;

    }

    else if(strcmp(instruction, "addao") == 0){

        result = addao(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "addat") == 0){

        result = addat(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "copy") == 0){

        result = value2;

        return result;  // simple enough to perform without a separate function

    }

    else if(strcmp(instruction, "lessi") == 0){

        result = lessi(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "greti") == 0){

        result = greti(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "minao") == 0){

        result = minao(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "clear") == 0){

        return 0; // simple enough to perform without a separate function

    }

    else if(strcmp(instruction, "fact") == 0){

         result = fact(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "facti") == 0){

        result = facti(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "logr") == 0){

        result = logr(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "nlog") == 0){

        result = nlog(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "fctol") == 0){

        result = fctol(value2);

        return result;

    }

    else if(strcmp(instruction, "fctoi") == 0){

        result = fctoi(value2);

        return result;

    }

    else if(strcmp(instruction, "perm") == 0){

        result = perm(value2);

        return result;

    }

    else if(strcmp(instruction, "permi") == 0){

        result = permi(value2);

        return result;

    }*/


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


    if(strcmp(instruction, "plus") == 0){

        return 1;
        
        strcpy(instruction_hex, "01");

    }

    else if(strcmp(instruction, "plusi") == 0){

        return 1;
        strcpy(instruction_hex, "02");
        

    }

    else if(strcmp(instruction, "avg") == 0){

        return 1;
        strcpy(instruction_hex, "03");

    }

    else if(strcmp(instruction, "minus") == 0){

        return 1;
        strcpy(instruction_hex, "04");

    }

    else if(strcmp(instruction, "minui") == 0){

        return 2;
        strcpy(instruction_hex, "05");

    }

    else if(strcmp(instruction, "times") == 0){

        return 1;
        strcpy(instruction_hex, "06");

    }

    else if(strcmp(instruction, "timei") == 0){

        return 2;
        strcpy(instruction_hex, "07");

    }

    else if(strcmp(instruction, "divd") == 0){

        return 1;
        strcpy(instruction_hex, "08");

    }

    else if(strcmp(instruction, "divi") == 0){

        return 2;
        strcpy(instruction_hex, "09");

    }

    else if(strcmp(instruction, "mod") == 0){

        return 1;
        strcpy(instruction_hex, "0A");

    }

    else if(strcmp(instruction, "modi") == 0){

        return 2;
        strcpy(instruction_hex, "0B");

    }

    /*else if(strcmp(instruction, "div4") == 0){

        return 5;
        strcpy(instruction_hex, "0C");

    }

    else if(strcmp(instruction, "mult4") == 0){

        return 5;
        strcpy(instruction_hex, "0D");

    }

    else if(strcmp(instruction, "equal") == 0){

        return 1;
        strcpy(instruction_hex, "0E");

    }

    else if(strcmp(instruction, "noteq") == 0){

        return 1;
        strcpy(instruction_hex, "0F");

    }

    else if(strcmp(instruction, "less") == 0){

        return 1;
        strcpy(instruction_hex, "10");

    }

    else if(strcmp(instruction, "great") == 0){

        return 1;
        strcpy(instruction_hex, "11");

    }

    else if(strcmp(instruction, "isneg") == 0){

        return 5;
        strcpy(instruction_hex, "12");

    }

    else if(strcmp(instruction, "ispos") == 0){

        return 5;
        strcpy(instruction_hex, "13");

    }

    else if(strcmp(instruction, "iseve") == 0){

        return 5;
        strcpy(instruction_hex, "14");

    }

    else if(strcmp(instruction, "isodd") == 0){

        return 5;
        strcpy(instruction_hex, "15");

    }

    else if(strcmp(instruction, "expn") == 0){

        return 1;
        strcpy(instruction_hex, "16");

    }

    else if(strcmp(instruction, "expi") == 0){

        return 2;
        strcpy(instruction_hex, "17");

    }

    else if(strcmp(instruction, "prim") == 0){

        return 1;
        strcpy(instruction_hex, "18");

    }

    else if(strcmp(instruction, "set") == 0){

        return 3;
        strcpy(instruction_hex, "19");

    }

    else if(strcmp(instruction, "neg") == 0){

        return 5;
        strcpy(instruction_hex, "1A");

    }

    else if(strcmp(instruction, "addao") == 0){

        return 1;
        strcpy(instruction_hex, "1B");

    }

    else if(strcmp(instruction, "addat") == 0){

        return 1;
        strcpy(instruction_hex, "1C");

    }

    else if(strcmp(instruction, "copy") == 0){

        return 5;
        strcpy(instruction_hex, "1D");

    }

    else if(strcmp(instruction, "lessi") == 0){

        return 2;
        strcpy(instruction_hex, "1E");

    }

    else if(strcmp(instruction, "greti") == 0){

        return 2;
        strcpy(instruction_hex, "1F");

    }

    else if(strcmp(instruction, "minao") == 0){

        return 1;
        strcpy(instruction_hex, "20");

    }

    else if(strcmp(instruction, "clear") == 0){

        return 3;
        strcpy(instruction_hex, "21");

    }

    else if(strcmp(instruction, "fact") == 0){

        return 1;
        strcpy(instruction_hex, "22");

    }

    else if(strcmp(instruction, "facti") == 0){

        return 2;
        strcpy(instruction_hex, "23");

    }

    else if(strcmp(instruction, "logr") == 0){

        return 1;
        strcpy(instruction_hex, "24");

    }

    else if(strcmp(instruction, "nlog") == 0){

        return 1;
        strcpy(instruction_hex, "25");

    }

    else if(strcmp(instruction, "fctol") == 0){

        return 5;
        strcpy(instruction_hex, "26");

    }

    else if(strcmp(instruction, "fctoi") == 0){

        return 3;
        strcpy(instruction_hex, "27");

    }

    else if(strcmp(instruction, "perm") == 0){

        return 3;
        strcpy(instruction_hex, "28");

    }

    else if(strcmp(instruction, "permi") == 0){

        return 3;
        strcpy(instruction_hex, "29");

    }*/

    else{

        return -1; //unknown instruction

    }

}


int main() {

    //declare array for registers
    int registerCount = 8;
    int regArray[8] = {1, 3, 5, 7, 9, 11, 13, 15};
    int arguments[2];

    char instruction[6];
    char arg1[4];
    char arg2[4];
    char arg3[4];

    int value1;
    int value2;
    int value3;

    int type;

    char* delim = " ";

    char instruction_code[2];
    char reg1_code[1];
    char reg2_code[1];
    char reg3_code[1];
    char const_code[8];

    //declare input string
    char inputString[max_length];

    printf("Current value of registers:\n");
        for (int i = 0; i < registerCount; i++){
            printf("r%d:", i);
            printf("%d, ", regArray[i]);
        }
    
    while(1){


        //input
        printf("%s\n", inputString);
        scanf("%s", inputString);

        //if exit command is typed, exit the program
        if (strncmp(inputString, "exit", 4) == 0){
            break;
        } 

        //break up input string into smaller strings
        for(i = 0; i < 4; i++){

        token = strtok(inputString, delim);
        
            if(){

            }
            else if(){

            }
            else if(){
                
            }
            else if(){
                
            }
            else{

            }
        }

        else{
            sscanf(inputString,"%s %s %s %s", instruction, arg1, arg2, arg3);
        }

        puts(instruction);
        puts(arg1);
        puts(arg2);
        puts(arg3);



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
        puts(instruction_code);
        puts(reg1_code);
        puts(reg2_code);
        puts(reg3_code);
        puts(const_code);


        regArray[value1] = call_instruction(instruction, arguments[0], arguments[1], arguments[2]);

        //print register values after each output
        printf("Current value of registers:\n", inputString);
            for (int i = 0; i < registerCount; i++){
            printf("%d, ", regArray[i]);
            }

    }

    return(0);
}
