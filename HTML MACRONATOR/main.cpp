/* 
 * HTML MACRONATOR
 *
 * HTML Macronator by Haley Euphemia Eleanor Ashley Lisa Praesent (Codeawayhaley) is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 *
 */

#include <iostream>
#include <cstring>

int main(int argc, const char * argv[]) {
    char element[20];
    char type[20];
    char extraatr[50];
    char imgext[20];
    char fin[3];
    int start, finish, count, status;
    status = 1;
    //if (strcmp(argv[1])==0) {
    while (status == 1) {
        std::cout << "Please enter element you want to generate or enter \"exit\": \n";
        std::cin >> element;
        if (strcmp(element,"exit") == 0 ) {
            status = 0;
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
            std::cout << "h5g – HTML5 Animation Image (AKA HTML5 GIF) preset.\n";
            std::cout << "help – Displays help.\n";
            std::cout << "lhelp – Displays Verbose help\n";
            std::cout << "webp – Preset for webp image only allows for \".webp\" extension.\n";
            std::cout << "webm – Preset for html 5 video.\n";
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
                status=0;
            }
            else if (strcmp(extraatr,"n")==0) {
                
            }
            else {
                std::cout << "Fatal Error 101: \n No Such Option.\n";
                status = 0;
            }
        }
        if (status != 0) {
            std::cout << "Do you want to do anything else?\n";
            std::cin >> fin;
            if (strcmp(fin,"no")==0) {
                status = 0;
            }
            else if (strcmp(fin,"0")==0){
                status=0;
            }
            else if (strcmp(fin,"yes")==0){
                std::cout << "Please continue. \n";
            }
            else if (strcmp(fin,"1")==0){
                std::cout << "Please continue. \n";
            }
            else {
                std::cout << "Fatal Error 101: \n No Such Option.\n";
                status = 0;
            }
        }
    std::cout << "Shutting Down!\n";
    return 0;
    }
}