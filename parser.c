#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "instructions1.h"
#include "instructions2.h"
#include "instructions3.h"
#include "instructions4.h"

#define max_length 24

int find_reg(char* arg, char* reg_hex){
    int constant;
    if(strcmp(arg, "r0") == 0){
   
    strcpy(reg_hex, "1");
     
        return 0;
        

    }

    else if(strcmp(arg, "r1") == 0){
    
    strcpy(reg_hex,"2");

        return 1;
        
    }

    else if(strcmp(arg, "r2") == 0){
    
    strcpy(reg_hex, "3");
        return 2;
        

    }

    else if(strcmp(arg, "r3") == 0){
    
    strcpy(reg_hex, "4");
        return 3;
        

    }
    
    else if(strcmp(arg, "r4") == 0){
    
    strcpy(reg_hex, "5");
        return 4;
        

    }
    
    else if(strcmp(arg, "r5") == 0){
    
    strcpy(reg_hex, "6");
        return 5;
        

    }
    
    else if(strcmp(arg, "r6") == 0){
    
    strcpy(reg_hex, "7");
        return 6;
        

    }

    else if(strcmp(arg, "r7") == 0){
    
    strcpy(reg_hex, "8");
        return 7;
        

    }

    else{
    
    strcpy(reg_hex, "0");
        return -1;
        

    }
    
}

int call_instruction(char* instruction, int value1, int value2, int value3){

    int result;

    // if/else ladder for each instruction

    if(strcmp(instruction, "plus") == 0){

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

        result = minui(value2, value3);

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

    else if(strcmp(instruction, "div4") == 0){

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

    /*
    else if(strcmp(instruction, "prim") == 0){

       result = prim(value2, value3);

        return result;

    }*/

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

     else if(strcmp(instruction, "minat") == 0){

        result = minat(value2, value3);

        return result;

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

        result = logr(value2);

        return result;

    }

    else if(strcmp(instruction, "nlog") == 0){

        result = nlog(value2);

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

        result = perm(value2, value3);

        return result;

    }

    else if(strcmp(instruction, "permi") == 0){

        result = permi(value2, value3);

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


    if(strcmp(instruction, "plus") == 0){
        
        strcpy(instruction_hex, "01");

        return 1;
        
       
    }

    else if(strcmp(instruction, "plusi") == 0){
        strcpy(instruction_hex, "02");
        return 2;
        
        

    }

    else if(strcmp(instruction, "avg") == 0){
        strcpy(instruction_hex, "03");
        return 1;
        

    }

    else if(strcmp(instruction, "minus") == 0){
        strcpy(instruction_hex, "04");
        return 1;
        
    }

    else if(strcmp(instruction, "minui") == 0){
        strcpy(instruction_hex, "05");
        return 2;
        

    }

    else if(strcmp(instruction, "times") == 0){
        strcpy(instruction_hex, "06");
        return 1;
        

    }

    else if(strcmp(instruction, "timei") == 0){
         strcpy(instruction_hex, "07");
        return 2;
       

    }

    else if(strcmp(instruction, "divd") == 0){
        strcpy(instruction_hex, "08");
        return 1;
        

    }

    else if(strcmp(instruction, "divi") == 0){
        strcpy(instruction_hex, "09");
        return 2;
        

    }

    else if(strcmp(instruction, "mod") == 0){
         strcpy(instruction_hex, "0A");
        return 1;
       

    }

    else if(strcmp(instruction, "modi") == 0){
         strcpy(instruction_hex, "0B");
        return 2;
       

    }

    else if(strcmp(instruction, "div4") == 0){
        strcpy(instruction_hex, "0C");
        return 5;
        

    }

    else if(strcmp(instruction, "mult4") == 0){
        strcpy(instruction_hex, "0D");
        return 5;
        

    }

    else if(strcmp(instruction, "equal") == 0){
         strcpy(instruction_hex, "0E");
        return 1;
       

    }

    else if(strcmp(instruction, "noteq") == 0){
        strcpy(instruction_hex, "0F");
        return 1;
        

    }

    else if(strcmp(instruction, "less") == 0){
        strcpy(instruction_hex, "10");
        return 1;
        

    }

    else if(strcmp(instruction, "great") == 0){
         strcpy(instruction_hex, "11");
        return 1;
       

    }

    else if(strcmp(instruction, "isneg") == 0){
        strcpy(instruction_hex, "12");
        return 5;
        

    }

    else if(strcmp(instruction, "ispos") == 0){
        strcpy(instruction_hex, "13");
        return 5;
        

    }

    else if(strcmp(instruction, "iseve") == 0){
         strcpy(instruction_hex, "14");
        return 5;
       

    }

    else if(strcmp(instruction, "isodd") == 0){
        strcpy(instruction_hex, "15");
        return 5;
        

    }

    else if(strcmp(instruction, "expn") == 0){
         strcpy(instruction_hex, "16");
        return 1;
       

    }

    else if(strcmp(instruction, "expi") == 0){
         strcpy(instruction_hex, "17");
        return 2;
       

    }

    else if(strcmp(instruction, "prim") == 0){
         strcpy(instruction_hex, "18");
        return 1;
       
    }

    else if(strcmp(instruction, "set") == 0){
        strcpy(instruction_hex, "19");
        return 3;
        

    }

    else if(strcmp(instruction, "neg") == 0){
        strcpy(instruction_hex, "1A");
        return 5;
        

    }

    else if(strcmp(instruction, "addao") == 0){
         strcpy(instruction_hex, "1B");

        return 1;
       
    }

    else if(strcmp(instruction, "addat") == 0){
        
        strcpy(instruction_hex, "1C");

        return 1;
        
    }

    else if(strcmp(instruction, "copy") == 0){
        strcpy(instruction_hex, "1D");

        return 5;
        
    }

    else if(strcmp(instruction, "lessi") == 0){
        strcpy(instruction_hex, "1E");
        return 2;
        

    }

    else if(strcmp(instruction, "greti") == 0){
        strcpy(instruction_hex, "1F");
        return 2;
        

    }

    else if(strcmp(instruction, "minao") == 0){
        strcpy(instruction_hex, "20");
        return 1;
        

    }

     else if(strcmp(instruction, "minat") == 0){
        strcpy(instruction_hex, "21");
        return 1;
        

    }


    else if(strcmp(instruction, "fact") == 0){
        strcpy(instruction_hex, "22");
        return 1;
        

    }

    else if(strcmp(instruction, "facti") == 0){
        strcpy(instruction_hex, "23");
        return 2;
        

    }

    else if(strcmp(instruction, "logr") == 0){
        strcpy(instruction_hex, "24");
        return 5;
        

    }

    else if(strcmp(instruction, "nlog") == 0){
        strcpy(instruction_hex, "25");
        return 5;
        

    }

    else if(strcmp(instruction, "fctol") == 0){
        strcpy(instruction_hex, "26");
        return 5;
        

    }

    else if(strcmp(instruction, "fctoi") == 0){
        strcpy(instruction_hex, "27");
        return 3;
        

    }

    else if(strcmp(instruction, "perm") == 0){
        strcpy(instruction_hex, "28");
        return 1;
        

    }

    else if(strcmp(instruction, "permi") == 0){
        strcpy(instruction_hex, "29");
        return 2;
        

    }

    else{

        return -1; //unknown instruction

    }

}


int main() {

    //declare array for registers
    int registerCount = 8;
      int* regArray = (int*) malloc(8 * sizeof(int));
    regArray[0] = 0;
    regArray[1] = 0;
    regArray[2] = 0;
    regArray[3] = 0;
    regArray[4] = 0;
    regArray[5] = 0;
    regArray[6] = 0;
    regArray[7] = 0;
    int arguments[2];
    
    char buffer[100];
    char* instruction = (char*) malloc(6 * sizeof(char));
    char* arg1 = (char*) malloc(4 * sizeof(char));
    char* arg2 = (char*) malloc(4 * sizeof(char));
    char* arg3 = (char*) malloc(4 * sizeof(char));

    int value1;
    int value2;
    int value3;
    int constant;

    int type;

    char* instruction_code = (char*) malloc(4 * sizeof(char));
    char* reg1_code = (char*) malloc(4 * sizeof(char));
    char* reg2_code = (char*) malloc(4 * sizeof(char));
    char* reg3_code = (char*) malloc(4 * sizeof(char));
    char* const_code = (char*) malloc(4 * sizeof(char));
   


    char reg1_codeforPirnt[1] = "0";

    //declare input string
    char inputString[max_length];

    char exitCommand[4] = "exit";

   
    
    while(1){
        strcpy(reg2_code, "0");
        strcpy(reg3_code, "0");
        strcpy(const_code, "0");
   

     printf("Current value of registers:\n");
        for (int i = 0; i < registerCount; i++){
            printf("r%d:", i);
            printf("%d, ", regArray[i]);
        }

     printf("\nPlease enter a command\n");
        
        fgets(buffer, 100, stdin);
        if(strncmp(buffer, "exit", 4) == 0){
            exit(0);
        }

        sscanf(buffer, "%[^,], %[^,\n], %[^,\n], %[^,\n]", instruction, arg1, arg2, arg3);


        //parse first argument, which must always be a valid register
        value1 = find_reg(arg1, reg1_code);
       
        //printf("this is value 1 %d", value1);
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

                printf("Invalid register for second argument. Available registers range from r0 to r%d.\n", registerCount - 1);
                continue;
            
            } 

            arguments[1] = regArray[value2];
            value3 = find_reg(arg3, reg3_code);

            
            if (value3 < 0 || value3 >= registerCount){

                printf("Invalid register for third. Available registers range from r0 to r%d.\n", registerCount - 1);
                continue;
            
            } 
            
            arguments[2] = regArray[value3];
            strcpy(const_code, "0");
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
           
             sscanf(arg3, "%d", &constant);
            //arguments[2] = atoi(arg3);
             
            sprintf(const_code, "%x", constant);
            strcpy(reg3_code, "0");

        }

        
    //type 3: 1 register + 1 constant
    
        else if(find_instruction_type(instruction, instruction_code) == 3){

            arguments[0] = regArray[value1];

            arguments[1] = atoi(arg2);

            sprintf(const_code, "%x", arguments[1]);
			sprintf(reg2_code, "%x", arguments[2]);
			sprintf(reg3_code, "%x", arguments[3]);
            arguments[2] = 0;//should not be used in this case
            strcpy(reg2_code, "0");
            strcpy(reg3_code, "0");


        }

    
   /*
    //type 4: 1 register + 2 constants

        else if(find_instruction_type(instruction, instruction_code) == 4){

            arguments[0] = regArray[value1];

            arguments[1] = atoi(arg2);

            arguments[2] = atoi(arg3);

        }
    */
    //type 5: 1 register + 1 register

        else if(find_instruction_type(instruction, instruction_code) == 5){

            arguments[0] = regArray[value1];

            value2 = find_reg(arg2, reg2_code);
           
            if (value2 < 0 || value2 >= registerCount){

                printf("Invalid second register for type 5. Available registers range from r0 to r%d.\n", registerCount - 1);
                continue;
            
            } 
			sprintf(const_code, "%x", arguments[1]);
			//sprintf(reg2_code, "%x", arguments[2]);
			sprintf(reg3_code, "%x", arguments[3]);
            arguments[1] = regArray[value2];

            arguments[2] = 0;//should not be used in this case
           strcpy(reg3_code, "0");
           strcpy(const_code, "0");



        }
    
    //unknown
        else{

            printf("Unknown instruction.");
            continue;

        }
        
        //print hex instruction code
        
        
        
         printf("%-20s | %-10s | %-10s | %-10s | %-10s\n", "Instruction Code", "Reg1 Code", "Reg2 Code", "Reg3 Code", "Const Code");
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("%-20s | %-10s | %-10s | %-10s | %-10s\n", instruction_code, reg1_code, reg2_code, reg3_code, const_code);
        if(find_instruction_type(instruction, instruction_code) == 2){
            regArray[value1] = call_instruction(instruction, arguments[0], arguments[1], constant);
            constant = 0;
        } else {
            regArray[value1] = call_instruction(instruction, arguments[0], arguments[1], arguments[2]);

        }
       
        
           
   
    }

    return(0);
}
