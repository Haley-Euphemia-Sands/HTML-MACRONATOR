//
//  h.h
//  HTML MACRONATOR
//
//  Created by Haley Euphemia Praesent on 22/02/2016.
//  Copyright (c) 2016 Praesent. All rights reserved.
//

#ifndef HTML_MACRONATOR_h_h
#define HTML_MACRONATOR_h_h


//Help.
int help(){
    std::cout <<"-v – Verbose Mode\n-h – Help\n-x – XML Mode\n-webm – Webm Preset\n";
    return 0;
}

//XML Mode.
int xmlm(){
    char extraatr[20],type[20],fin[1];
    int status[2],start,finish,count;
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
        return 0;
}

#endif
