#include <stdio.h>
//Functions List
int x;
void a();
void aa();
void ab();
void aaa();
void aab();
//Main Function
int main(void){
a();
}
//a: Start Story (Branch A)
void a(){
printf("\a\nText\n");
scanf("%d",&x);
if(x==1){
    aa();
}
else {
    ab();
}
return;
}
//aa: Branch AA
void aa(){
printf("\a\nText\n");
scanf("%d",&x);
if(x==1){
    aa();
}
else {
    ab();
}
return;
}
//ab: Branch AB
void ab(){
printf("\a\nText\n");
scanf("%d",&x);
if(x==1){
    aa();
}
else {
    ab();
}
return;
}
//aaa: Branch AAA
void aaa(){
printf("\a\nText\n");
scanf("%d",&x);
if(x==1){
    aa();
}
else {
    ab();
}
return;
}
//aab: Branch AAB
void aab(){
printf("\a\nText\n");
scanf("%d",&x);
if(x==1){
    aa();
}
else {
    ab();
}
return;
}