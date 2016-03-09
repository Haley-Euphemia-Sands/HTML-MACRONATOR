/* 
 * HTML MACRONATOR
 *
 * HTML Macronator by Haley Euphemia Eleanor Ashley Lisa Praesent (Codeawayhaley) is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 *
 */

#include <iostream>
#include <cstring>
#include "h.h"

int main(int argc, const char * argv[]){
    char element[20];
    char type[20];
    char extraatr[50];
    char imgext[20];
    char fin[1];
    int start, finish, count, status[2];
    if (argc >=2) {
        count=2;
        while (count <= argc) {
            int truco;
            truco=count-1;
            count ++;
            if (strcmp(argv[truco],"-h")==0) {
                help();
            }
            else if (strcmp(argv[truco],"-x")==0) {
                xmlm();
            }
            else  {
                std::cout << "No such argument!";
                count=argc+1;
            }
        }
        status[0]=0;
        status[1]=0;
    }
    else {
    status[1] = 1;
    while (status[1] == 1) {
        std::cout << "Please enter element you want to generate or enter \"exit\": \n";
        std::cin >> element;
        if (strcmp(element,"exit") == 0 ) {
            status[1] = 0;
        }
        else if (strcmp(element,"a")==0) {
            std::cout << "Enter File extension of the source example \".htm\": \n";
            std::cin >> imgext;
            std::cout << "What number do you want recursion to start at: \n";
            std::cin >> start;
            std::cout << "What number do you want to be the final value: \n";
            std::cin >> finish;
            count=start;
            while (count <= finish) {
                std::cout << "<" << element << " href=\"" << count << imgext << "\"></" << element << ">\n";
                count++;
            }
        }
        else if (strcmp(element,"help")==0){
            std::cout << "a – Preset for hyperlink without predefined file extension.\n";
            std::cout << "exit – Switches Status mode to 0 and instigates program termination.\n";
            std::cout << "h5a – HTML5 Audio, Opus or Vorbis stored in a webm container.\n";
            std::cout << "h5g – HTML5 Animation Image (AKA HTML5 GIF) preset.\n";
            std::cout << "help – Displays help.\n";
            std::cout << "lhelp – Displays Verbose help\n";
            std::cout << "webp – Preset for webp image only allows for \".webp\" extension.\n";
            std::cout << "webm – Preset for html 5 video.\n";
            std::cout << "xml – Enter XML mode.\n";
        }
        else if (strcmp(element,"xml")==0){
            status[0]=1;
            while (status[0] == 1) {
                std::cout << "What do you want the element to be please type help to check options.\n";
                std::cin >> extraatr;
                if (strcmp(extraatr,"help")==0) {
                    std::cout << "exit – Exit XML mode.\n";
                    std::cout << "help – Displays this help.\n";
                    std::cout << "Any other option added will be treated as an element.\n";
                }
                else if (strcmp(extraatr,"exit")==0) {
                    status[0]=0;
                }
                else {
                    std::cout << "What is the atribute?:\n";
                    std::cout << "(Note this is the name of atribute the actual value will be the recursion)\n";
                    std::cin >> type;
                    std::cout << "What number do you want recursion to start at: \n";
                    std::cin >> start;
                    std::cout << "What number do you want to be the final value: \n";
                    std::cin >> finish;
                    count = start;
                    while (count <= finish) {
                        std::cout << "<" << extraatr << " " << type << "=\"" << count << "\"></" << extraatr << ">\n";
                        count++;
                    }
                }
                while (status[0] != 0) {
                    std::cout << "Do you want to exit xml mode y, or n:\n";
                    std::cin >> fin;
                    if (strcmp(fin,"y")==0) {
                        status[0] = 0;
                    }
                    else if  (strcmp(fin,"n")==0){
                        std::cout << "Please continue\n";
                    }
                    else {
                        status[0]=0;
                        status[1]=0;
                    }
            }
            
            }
        }
        else if (strcmp(element,"h5a")==0) {
            std::cout << "What number do you want recursion to start at: \n";
            std::cin >> start;
            std::cout << "What number do you want to be the final value: \n";
            std::cin >> finish;
            count=start;
            while (count <=finish) {
                std::cout << "<audio type=\"audio/webm\" src=\"" << count << ".webm\"></audio>\n";
                count++;
            }
        }
        else if (strcmp(element,"webp")==0) {
            std::cout << "What number do you want recursion to start at: \n";
            std::cin >> start;
            std::cout << "What number do you want to be the final value: \n";
            std::cin >> finish;
            count = start;
            while (count <= finish) {
                std::cout << "<img type=\"image/webp\" src=\"" << count <<".webp\"></img>\n";
                count++;
            }
        }
        else if (strcmp(element,"h5g")==0) {
            std::cout << "What number do you want recursion to start at: \n";
            std::cin >> start;
            std::cout << "What number do you want to be the final value: \n";
            std::cin >> finish;
            count = start;
            while (count <=finish) {
                std::cout << "<video type=\"video/webm\" src=\"" << count << ".webm\" autoplay loop></video>\n";
                count++;
            }
        }
        else if (strcmp(element,"webm")==0) {
            std::cout << "What number do you want recursion to start at: \n";
            std::cin >> start;
            std::cout << "What number do you want to be the final value: \n";
            std::cin >> finish;
            count = start;
            while (count <= finish) {
                std::cout << "<video type=\"video/webm\" src=\"video"<<count<<".webm\"></video>\n";
                count++;
            }
        }
        else {
            std::cout <<"This option is depreciated!\n Shutting down or go back to begining y or n?\n";
            std::cin >> extraatr;
            if (strcmp(extraatr,"y")==0) {
                status[1]=0;
            }
            else if (strcmp(extraatr,"n")==0) {
                
            }
            else {
                status[1] = 0;
            }
        }
        if (status[1] != 0) {
            std::cout << "Do you want to do anything else y (1), or n (0)?\n";
            std::cin >> fin;
            if (strcmp(fin,"n")==0) {
                status[1] = 0;
            }
            else if (strcmp(fin,"0")==0){
                status[1]=0;
            }
            else if (strcmp(fin,"y")==0){
                std::cout << "Please continue. \n";
            }
            else if (strcmp(fin,"1")==0){
                std::cout << "Please continue. \n";
            }
            else {
                status[1] = 0;
            }
        }
    }
    std::cout << "Shutting Down!\n";
    }
    return 0;
}