#include <iostream>
#include <cstring>
using std::cout;

#define SKIP1 std::string(biggest+2,' ')
#define SKIP2 std::string(biggest-size,' ')
#define SKIP3 std::string(biggest+2,'_')

int getSize(char array[]){
return strlen(array);
}

/*
        ____________
|\_/|  |            |
|.w.| <  hell yeah! |
|   |  |            |
|   |   ¯¯¯¯¯¯¯¯¯¯¯¯
         The goal         */

int main(const int argc, char *argv[]){

if(argc>1){

int biggest = 0;
int size;
std::string stripped;

for(int i=1;i<argc;i++){//get biggest
size=getSize(argv[i]);
if(size>biggest)biggest=size;}

cout<<"        "<<SKIP3<<'\n';

for(int i=1;i<argc+2;i++){
if(i<argc+1){
size=getSize(argv[i-1]);

stripped = argv[i-1];
for(int i=0;i<size;i++){
if(stripped[i]=='\n'){
stripped[i]=' ';
}}

}

switch(i){

case 1:
cout<<"|\\_/|  |"<<SKIP1<<"|\n";
break;

case 2:
cout<<"|.w.| <  "<<stripped<<SKIP2<<" |\n";
break;

default:

if(i==argc+1){

cout<<"|   |  |"<<SKIP1<<"|\n";
break;}

if(i==argc+2){

cout<<"|   |\n";
break;}

cout<<"|   |  | "<<stripped<<SKIP2<<" |\n";
break;

}}
cout<<"|   |   ";
for(int i=0;i<biggest+2;i++)cout<<"¯";
cout<<std::endl;

}

return 0;

}
