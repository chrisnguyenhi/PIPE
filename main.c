#include <stdio.h>

main(){
char forward[7] = "forward";    //INITIALIZING RECOGNITION STRINGS
char left[4] = "left";
char right[5] = "right";
char back [4] = "back";
char safety [6] = "safety";
char noise [5] = "noise";
char track [5] = "track";
char up [2] = "up";
char down [4] = "down";
char wait [4] = "wait";
char pause [5] = "pause";
char hidari [6] = "hidari";
char migi [4] = "migi";
char angle [5] = "angle";

    printf("ENTER WHAT YOU WOULD LIKE TO DO:\n");

    int yes;
	FILE *file_pointer;
	file_pointer = fopen("PIPE_Botball_Code.c", "w");
    fprintf (file_pointer, "int main(){\n create_connect();\n");        //THIS PART OPENS THE FILE CALLED PIPE_BOTBALL_CODE.TXT
                                                                        //THIS PRINTS int_main() {
                                                                        //create_connect();

char word[12];                  //INIITIALIZING VARIABLES
char read = ' ';
int i, a;

while (1){

    read = getchar();               //GRAB LETTER

    if(read == 'f'){                //IF IT STARTS WITH F THEN FIGURE OUT IF ITS TRYING TO SPELL FORWARD
        i = 1; word[0] = 'f';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<7){
            if(word[i]!=forward[i])             //CHECKS IF IT IS FORWARD
                a++;
            i++;}

        if(!a){                                                    //SKIP TILL NUMBER
            read = getchar();
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf (file_pointer, "icreate_forward(%d);\n msleep(500);\n", yes); //PRINT FOWARD COMMAND
            }
    }

    if(read == 'b'){                //IF IT STARTS WITH B THEN FIGURE OUT IF ITS TRYING TO SPELL BACK
        i = 1; word[0] = 'b';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<4){
            if(word[i]!=back[i])             //CHECKS IF IT IS BACK
                a++;
            i++;}

        if(!a){                                                    //SKIP TILL NUMBER
            read = getchar();
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf (file_pointer, "icreate_forward(-%d);\n msleep(500);\n", yes); //PRINT BACK COMMAND
            }
    }

if(read == 'u'){                //IF IT STARTS WITH UP THEN FIGURE OUT IF ITS TRYING TO SPELL UP
        i = 1; word[0] = 'u';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<2){
            if(word[i]!=up[i])             //CHECKS IF IT IS UP
                a++;
            i++;}

        if(!a){                                                    //SKIP TILL NUMBER
            read = getchar();
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf (file_pointer, "icreate_forward(%d);\n msleep(500);\n", yes); //PRINT FOWARD COMMAND
            }
    }

    if(read == 'd'){                //IF IT STARTS WITH UP THEN FIGURE OUT IF ITS TRYING TO SPELL UP
        i = 1; word[0] = 'd';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<4){
            if(word[i]!=down[i])             //CHECKS IF IT IS DOWN
                a++;
            i++;}

        if(!a){                                                    //SKIP TILL NUMBER
            read = getchar();
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf (file_pointer, "icreate_forward(-%d);\n msleep(500);\n", yes); //PRINT FOWARD COMMAND
            }
    }

    if(read == 's'){                //IF IT STARTS WITH F THEN FIGURE OUT IF ITS TRYING TO SPELL SAFETY
        i = 1; word[0] = 's';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<6){
            if(word[i]!=safety[i])             //CHECKS IF IT IS FORWARD
                a++;
            i++;}

        if(!a){                                                    //SKIP TILL NUMBER
            read = getchar();
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf (file_pointer, "while(!(get_create_rbump(100)) && !(get_create_lbump(100)));\n msleep(%d);\n", yes);
            }
    }

    if(read == 'n'){                //IF IT STARTS WITH N THEN FIGURE OUT IF ITS TRYING TO SPELL NOISE
        i = 1; word[0] = 'n';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<5){
            if(word[i]!= noise[i])             //CHECKS IF IT IS NOISE
                a++;
            i++;}

        if(!a){                                                    //SKIP TILL NUMBER
            read = getchar();
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf (file_pointer, "noise(%d);\n", yes); //PRINT NOISE COMMAND
            }
    }

 if(read == 't'){                //IF IT STARTS WITH T THEN FIGURE OUT IF ITS TRYING TO SPELL TRACK
        i = 1; word[0] = 't';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<5){
            if(word[i]!= track[i])             //CHECKS IF IT IS TRACK
                a++;
            i++;}

        if(!a){                                                    //SKIP TILL NUMBER
            read = getchar();
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf (file_pointer, "imsic_playtrack(%d);\n", yes); //PRINT TRACK COMMAND
            }
    }

    if(read == 'l'){                //IF IT STARTS WITH L THEN FIGURE OUT IF ITS TRYING TO SPELL LEFT
        i = 1; word[0] = 'l';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<4){
            if(word[i]!=left[i])             //CHECKS IF IT IS LEFT
                a++;
            i++;}

        if(!a){                             //SKIPS TILL NUMBER
            read = getchar();
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf(file_pointer, "icreate_CCW (%d);\n msleep(500);\n", yes); //PRINT LEFT COMMAND
            }
    }

    if(read == 'r'){                //IF IT STARTS WITH R THEN FIGURE OUT IF ITS TRYING TO SPELL RIGHT
        i = 1; word[0] = 'r';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<5){
            if(word[i]!=right[i])             //CHECKS IF IT IS RIGHT
                a++;
            i++;}

        if(!a){
            read = getchar();                   // SKIP TILL NUMBER
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf(file_pointer, "icreate_CW (%d);\n msleep(500);\n" , yes); //PRINT RIGHT COMMAND
            }
    }

    if(read == 'a'){                //IF IT STARTS WITH R THEN FIGURE OUT IF ITS TRYING TO SPELL ANGLE
        i = 1; word[0] = 'a';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<5){
            if(word[i]!=angle[i])             //CHECKS IF IT IS ANGLE
                a++;
            i++;}

        if(!a){
            read = getchar();                   // SKIP TILL NUMBER
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf(file_pointer, "icreate_CW (%d);\n msleep(500);\n" , yes); //PRINT RIGHT COMMAND
            }
    }

    if(read == 'h'){                //IF IT STARTS WITH L THEN FIGURE OUT IF ITS TRYING TO SPELL
        i = 1; word[0] = 'h';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<6){
            if(word[i]!=hidari[i])             //CHECKS IF IT IS LEFT
                a++;
            i++;}

        if(!a){                             //SKIPS TILL NUMBER
            read = getchar();
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf(file_pointer, "icreate_CCW (%d);\n msleep(500);\n", yes); //PRINT LEFT COMMAND
            }
    }

 if(read == 'm'){                //IF IT STARTS WITH R THEN FIGURE OUT IF ITS TRYING TO SPELL RIGHT
        i = 1; word[0] = 'm';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<4){
            if(word[i]!=migi[i])             //CHECKS IF IT IS RIGHT
                a++;
            i++;}

        if(!a){
            read = getchar();                   // SKIP TILL NUMBER
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf(file_pointer, "icreate_CW (%d);\n msleep(500);\n" , yes); //PRINT RIGHT COMMAND
            }
    }

     if(read == 'w'){                //IF IT STARTS WITH W THEN FIGURE OUT IF ITS TRYING TO SPELL WAIT
        i = 1; word[0] = 'w';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<4){
            if(word[i]!=wait[i])             //CHECKS IF IT IS WAIT
                a++;
            i++;}

        if(!a){                                                    //SKIP TILL NUMBER
            read = getchar();
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf (file_pointer, "msleep(%d);\n", yes); //PRINT WAIT COMMAND
            }
    }

     if(read == 'p'){                //IF IT STARTS WITH W THEN FIGURE OUT IF ITS TRYING TO SPELL WAIT
        i = 1; word[0] = 'p';

        while(read != '\n' && read != '.' && read != ' ' && read != ','){       //GRAB REST OF WORD
            read = getchar();
            word[i] = read;
            i++;}

        a=0; i=0;

        while(i<5){
            if(word[i]!=pause[i])             //CHECKS IF IT IS PAUSE
                a++;
            i++;}

        if(!a){                                                    //SKIP TILL NUMBER
            read = getchar();
                while(read != '0')
                    read = getchar();
            scanf(" %d", &yes);
            fprintf (file_pointer, "msleep(%d);\n", yes); //PRINT PAUSE COMMAND
            }
    }

    if(read == 'z'){
        fprintf(file_pointer, "}\n", yes); //IF USER TYPES Z CLOSE TXT FILE AND END PROGRAM
        fclose(file_pointer);
        return 0;
        break;
    }
}

fprintf(file_pointer, "}\n", yes);
fclose(file_pointer);
    return 0;

}
