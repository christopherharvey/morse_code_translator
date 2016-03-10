#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 1. The length of a dot is one unit
// 2. a dash is three  units
// 3. the space between parts of the same letter is one unit
// 4. the space between letters is three units defined by '`'
// 5. the space between words is seven units defined by "`;"
void getMorse(char letter,char *response){
	switch(letter){
		case 'a':
		case 'A':
			strcpy(response,".-`");
			break;
		case 'b':
		case 'B':
			strcpy(response,"-...`");
			break;
		case 'c':
		case 'C':
			strcpy(response,"-.-.`");
			break;
		case 'd':
		case 'D':
			strcpy(response,"-..`");
			break;
		case 'e':
		case 'E':
			strcpy(response,".`");
			break;
		case 'f':
		case 'F':
			strcpy(response,"..-.`");
			break;
		case 'g':
		case 'G':
			strcpy(response,"--.`");
			break;
		case 'h':
		case 'H':
			strcpy(response,"....`");
			break;
		case 'i':
		case 'I':
			strcpy(response,"..`");
			break;	
		case 'j':
		case 'J':
			strcpy(response,".---`");
			break;	
		case 'k':
		case 'K':
			strcpy(response,"-.-`");
			break;	
		case 'l':
		case 'L':
			strcpy(response,".-..`");
			break;	
		case 'm':
		case 'M':
			strcpy(response,"--`");
			break;	
		case 'n':
		case 'N':
			strcpy(response,"-.`");
			break;	
		case 'o':
		case 'O':
			strcpy(response,"---`");
			break;	
		case 'p':
		case 'P':
			strcpy(response,".--.`");
			break;	
		case 'q':
		case 'Q':
			strcpy(response,"--.-`");
			break;	
		case 'r':
		case 'R':
			strcpy(response,".-.`");
			break;	
		case 's':
		case 'S':
			strcpy(response,"...`");
			break;	
		case 't':
		case 'T':
			strcpy(response,"-`");
			break;	
		case 'u':
		case 'U':
			strcpy(response,"..-`");
			break;	
		case 'v':
		case 'V':
			strcpy(response,"...-`");
			break;	
		case 'w':
		case 'W':
			strcpy(response,".--`");
			break;	
		case 'x':
		case 'X':
			strcpy(response,"-..-`");
			break;	
		case 'y':
		case 'Y':
			strcpy(response,"-.--`");
			break;	
		case 'z':
		case 'Z':
			strcpy(response,"--..`");
			break;	
		
		case '0':
			strcpy(response,"-----`");
			break;	
		case '1':
			strcpy(response,".----`");
			break;	
		case '2':
			strcpy(response,"..---`");
			break;	
		case '3':
			strcpy(response,"...--`");
			break;	
		case '4':
			strcpy(response,"....-`");
			break;	
		case '5':
			strcpy(response,".....`");
			break;	
		case '6':
			strcpy(response,"-....`");
			break;	
		case '7':
			strcpy(response,"--...`");
			break;	
		case '8':
			strcpy(response,"---..`");
			break;	
		case '9':
			strcpy(response,"----.`");
			break;	
		case ' ':
			strcpy(response,";");
			break;
		default:
			strcpy(response,"");
	}

}
char getAsciiCharacter(char morse_letter[]){
	char response = '?';
	switch(strlen(morse_letter)){
		case 1:
			if(morse_letter[0] == '-'){
				response = 'T';
			}else if(morse_letter[0] == '.'){
				response = 'E';
			}
			break;
		case 2:
		    if(strncmp(morse_letter,"..",2) == 0){
				response = 'I';
		    }else if(strncmp(morse_letter,".-",2) == 0){
				response = 'A';
		    }else if(strncmp(morse_letter,"--",2) == 0){
			    response = 'M';
		    }else if(strncmp(morse_letter,"-.",2) == 0){
			    response = 'N';
		    }
			break;
		case 3:
		    if(strncmp(morse_letter,"...",3) == 0){
			    response = 'S';
		    }else if(strncmp(morse_letter,"..-",3) == 0){
			    response = 'U';
		    }else if(strncmp(morse_letter,".-.",3) == 0){
			    response = 'R';
		    }else if(strncmp(morse_letter,".--",3) == 0){
			    response = 'W';
		    }else if(strncmp(morse_letter,"-..",3) == 0){
			    response = 'D';
		    }else if(strncmp(morse_letter,"-.-",3) == 0){
			    response = 'K';
		    }else if(strncmp(morse_letter,"--.",3) == 0){
			    response = 'G';
		    }else if(strncmp(morse_letter,"---",3) == 0){
			    response = 'O';
		    }
			break;
		case 4:
		    if(strncmp(morse_letter,"....",4) == 0){
			    response = 'H';
		    }else if(strncmp(morse_letter,"...-",4) == 0){
			    response = 'V';
		    }else if(strncmp(morse_letter,"..-.",4) == 0){
			    response = 'F';
		    }else if(strncmp(morse_letter,".-..",4) == 0){
			    response = 'L';
		    }else if(strncmp(morse_letter,".--.",4) == 0){
			    response = 'P';
		    }else if(strncmp(morse_letter,".---",4) == 0){
			    response = 'J';
		    }else if(strncmp(morse_letter,"-...",4) == 0){
			    response = 'B';
		    }else if(strncmp(morse_letter,"-..-",4) == 0){
			    response = 'X';
		    }else if(strncmp(morse_letter,"-.-.",4) == 0){
			    response = 'C';
		    }else if(strncmp(morse_letter,"-.--",4) == 0){
			    response = 'Y';
		    }else if(strncmp(morse_letter,"--..",4) == 0){
			    response = 'Z';
		    }else if(strncmp(morse_letter,"--.-",4) == 0){
			    response = 'Q';
		    }
			break;
		case 5:
		    if(strncmp(morse_letter,"-----",4) == 0){
			    response = '0';
		    }else if(strncmp(morse_letter,".----",5) == 0){
			    response = '1';
		    }else if(strncmp(morse_letter,"..---",5) == 0){
			    response = '2';
		    }else if(strncmp(morse_letter,"...--",5) == 0){
			    response = '3';
		    }else if(strncmp(morse_letter,"....-",5) == 0){
			    response = '4';
		    }else if(strncmp(morse_letter,".....",5) == 0){
			    response = '5';
		    }else if(strncmp(morse_letter,"-....",5) == 0){
			    response = '6';
		    }else if(strncmp(morse_letter,"--...",5) == 0){
			    response = '7';
		    }else if(strncmp(morse_letter,"---..",5) == 0){
			    response = '8';
		    }else if(strncmp(morse_letter,"----.",5) == 0){
			    response = '9';
		    }
			break;
	}
	return response;
}
void getAsciiWord(char morse_sentence[],char *response){
	printf("%s\n",morse_sentence);
	char *morse_letter,*end; 
	morse_letter = strtok_r(morse_sentence,"`",&end);
	response[0] = '\0';
	int i = 0;
	while(morse_letter != NULL){
		printf("%s\n",morse_letter);
		char ascii_char = getAsciiCharacter(morse_letter);
		printf("%c\n",ascii_char);
	    response[i++] = ascii_char;
	    response[i]   = '\0';
		morse_letter = strtok_r(NULL,"`",&end);
	}
    response[i++] = ' ';
    response[i]   = '\0';
}

int main(int argc,char* argv[],char* envp[])
{
	char morse_letter[16] = "";
	char morse_sentence[1024] = "";
	char ascii_sentence[1024] = "";
	char input[32] = "this is a test";
	int len = strlen(input);
	int i;
	for(i=0;i<len;i++){
		char letter = input[i];
		getMorse(letter,morse_letter);
		strcat(morse_sentence,morse_letter);
	}
	printf("%s\n",morse_sentence);
	char *end_str;
	char *word = strtok_r(morse_sentence,";",&end_str);
	char ascii_word[32] = "";
	while(word != NULL){
		//strcpy(tmp,word);
		getAsciiWord(word,ascii_word);
		strcat(ascii_sentence,ascii_word);
		word = strtok_r(NULL,";",&end_str);
	}
	ascii_sentence[strlen(ascii_sentence)-1] = '\0';
	printf("'%s'\n",ascii_sentence);
}






