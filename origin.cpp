#include<cstdio>
#include<iostream>
#include<string.h>
#include<unistd.h>
#include<windows.h>
int main(){
FILE *fp=fopen("xer.txt","r");
int arr2[20],i=0;
unsigned long long int location;
char arr[20],ch[100];
std::string chas;
float arr3[20];
if(fp==NULL){}
else{
while(arr3[i]==-9999){
    fscanf(fp,"%d",&arr3[i]);
    i=i+1;
}
arr[i]=0;
int siz=i;
fclose(fp);
}
fp=fopen("x.asmn","r");
fscanf(fp,"%s",ch);
if(ch=="GOLANG78")
{
    fclose(fp);
    fp=fopen("x.asmn","r");
}
else{
     fclose(fp);
    fp=fopen("x.asmn","r");
}
chas="hello";
while(1){
fscanf(fp,"%c",&ch[i]);
if(ch[i]=='<'){
        fscanf(fp,"%c",&ch[i]);
    if(ch[i]=='O'){
            location=ftell(fp);
            fscanf(fp,"%c",&ch[i]);
        if(ch[i]=='D'){}
        else{
        if(ch[i]=='P'){
            location=ftell(fp);
        }
        else{fseek(fp,-1,SEEK_CUR);}
        goto ok;
        }
    }
}
}
if(chas=="<O"){
        ok:
            fscanf(fp,"%s",ch);
            chas=ch;
if(chas=="delete_file"){
fscanf(fp,"%s",ch);
remove(ch);
}
else if(chas=="View"){
        fclose(fp);
        printf("here");
        remove("comand.asmn");
    system("newer_module.exe");
    return 0;
}
else if(chas=="file_write"){
        char name[100];
        fscanf(fp,"%s",name);
        FILE *fps=fopen(name,"w");
    while(ch[i]!=';'){
    fscanf(fp,"%c",&ch[i]);
    if(ch[i]=='@'){
        std::cout<<"---COMPILE ERROR---\nMISSING ; AT THE END OF <O";
    }
    if(ch[i]!=';'){
        fprintf(fps,"%c",ch[i]);
    }
    }
}
else if(chas=="display_file"){
char name[100];
        fscanf(fp,"%s",name);
        FILE *fps=fopen(name,"r");
    while(ch[i]!=';'){
    fscanf(fps,"%c",&ch[i]);
    if(ch[i]=='@'){
        std::cout<<"---COMPILE ERROR---\nMISSING ; AT THE END OF <O";
    }
    if(ch[i]!=';')
        printf("%c",ch[i]);
    }
}
else if(chas=="append_file"){
    char name[100];
        fscanf(fp,"%s",name);
        FILE *fps=fopen(name,"a");
        ch[i]='0';
    while(ch[i]!=';'){
    fscanf(fp,"%c",&ch[i]);
    if(ch[i]=='@'){
        std::cout<<"\n---RUNTIME ERROR---\nMISSING ; AT THE END OF <O";
    }
    if(ch[i]!=';'){
        fprintf(fps,"%c",ch[i]);
    }
    }
}
else if(chas=="restart"){
    system("shutdown -r -t 0");
}
else if(chas=="fork"){//Under development
FILE *file=fopen("new.asmn","w");
fprintf(file,"ON");
fclose(file);
}
else if(chas=="Start"){
 char name[100];
        fscanf(fp,"%s",name);
        system(name);
        name[5]='0';
        fscanf(fp,"%c",&name[5]);
        fscanf(fp,"%c",&name[5]);
        if(name[5]!=';'){
            std::cout<<"\n---RUNTIME ERROR---\nMISSING ; AT THE END OF <O FOR Start.\n";
            exit(1);
        }
}
else if(chas=="fsize"){
    FILE *open,*open2;
    fscanf(fp,"%s",ch);
    open2=fopen(ch,"r");
    if(open2==NULL){return 0;}
    else{
    open=fopen("og.asmn","w");
    fseek(open2,0,SEEK_END);
    unsigned long long int size_of_file=ftell(open2);
    if(size_of_file>1024)
     size_of_file=size_of_file/1024;
    fprintf(open,"%d",(int)size_of_file);
    fclose(open);
    }
}
else if(chas=="sleep"){
        FILE *open;
open=fopen("og.asmn","r");
float vlu;
fscanf(open,"%f",vlu);
printf("\nenter=%d",(int)vlu);
if(open!=NULL){
int vtu=(int)vlu;
        int inter=vtu;
Sleep(1000*inter);
fclose(open);
}
}
else if(chas=="sum"){
FILE *data;
int data2[1000],i=0,sum=0,*da;
data=fopen("data.asmn","r");
fscanf(data,"%p\n",(void **)&da);
while(data2[i]!=63032){
    fscanf(data,"%d\n",&data2[i]);
    if(data2[i]==63032)
        break;
    sum=sum+data2[i];
 i=i+1;
}
fclose(data);
remove("data.asmn");
return sum;
}
else if(chas=="product"){
FILE *data;
data=fopen("data.asmn","r");
int data2[1000],i=0,sum=1,*da;
fscanf(data,"%p\n",(void **)&da);
while(data2[i]!=63032){
    fscanf(data,"%d\n",&data2[i]);
    if(data2[i]==63032)
        break;
    sum=sum*data2[i];
 i=i+1;
}
fclose(data);
remove("data.asmn");
return sum;
}
else if(chas=="mean"){
FILE *data;
data=fopen("data.asmn","r");
int data2[1000],i=0,sum=1;
char da[25];
fscanf(data,"%s\n",da);
data2[0]=0;
while(data2[i]!=63032){
    fscanf(data,"%d\n",&data2[i]);
    if(data2[i]==63032)
        break;
    sum=sum+data2[i];
 i=i+1;
}
i=i-1;
sum=sum/i;
fclose(data);
remove("data.asmn");
return sum;
}
else if(chas=="max"){
FILE *data;
data=fopen("data.asmn","r");
int data2[1000],i=0,sum=1,maxv;
char da[50];
fscanf(data,"%s\n",da);
fscanf(data,"%d\n",&maxv);
data2[1]=0;
data2[0]=maxv;
i=i+1;
while(data2[i]!=63032){
    fscanf(data,"%d\n",&data2[i]);
    if(data2[i]==63032)
        break;
    if(maxv<data2[i]&&maxv!=63032)
        maxv=data2[i];
 i=i+1;
}
sum=maxv;
fclose(data);
remove("data.asmn");
return sum;
}
else if(chas=="min"){
FILE *data;
data=fopen("data.asmn","r");
int data2[1000],i=0,sum=1,maxv;
char da[22];
fscanf(data,"%s\n",da);
fscanf(data,"%d\n",&maxv);
data2[1]=0;
data2[0]=maxv;
i=i+1;
while(data2[i]!=63032){
    fscanf(data,"%d\n",&data2[i]);
    if(data2[i]==63032)
        break;
    if(maxv>data2[i]&&maxv!=63032)
        maxv=data2[i];
 i=i+1;
}
sum=maxv;
fclose(data);
remove("data.asmn");
return sum;
}
else if(chas=="prime_sum"){
FILE *data;
data=fopen("data.asmn","r");
int data2[1000],i=0,sum=1,maxv;
char da[22];
fscanf(data,"%s\n",da);
fscanf(data,"%d\n",&maxv);
data2[1]=0;
data2[0]=maxv;
i=i+1;
while(data2[i]!=63032){
    fscanf(data,"%d\n",&data2[i]);
 i=i+1;
}
int j=0;
while(i>j){
    for(int k=0;k<data2[j]/2;k++){
        if(!(data2[j]%k))
            sum=sum+data2[j];
    }
    ++j;
}
sum=sum-1;
fclose(data);
remove("data.asmn");
return sum;
}
else if(chas=="smallest_prime"){
FILE *data;
data=fopen("data.asmn","r");
int data2[1000],i=0,sum=1,maxv,first=1;
char da[22];
fscanf(data,"%s\n",da);
fscanf(data,"%d\n",&maxv);
data2[1]=0;
data2[0]=maxv;
i=i+1;
while(data2[i]!=63032){
    fscanf(data,"%d\n",&data2[i]);
 i=i+1;
}
int j=0;
while(i>j){
    for(int k=0;k<data2[j]/2;k++){
        if(!(data2[j]%k)){
                if(first){
                    maxv=data2[j];
                    first=0;
                }
                if(maxv>data2[j]){
                    maxv=data2[j];
                }
        }
    }
    ++j;
}
fclose(data);
remove("data.asmn");
return maxv;
}
else if(chas=="greatest_non_prime"){
FILE *data;
data=fopen("data.asmn","r");
int data2[1000],i=0,sum=1,maxv,first=1;
char da[22];
fscanf(data,"%s\n",da);
fscanf(data,"%d\n",&maxv);
data2[1]=0;
data2[0]=maxv;
i=i+1;
while(data2[i]!=63032){
    fscanf(data,"%d\n",&data2[i]);
 i=i+1;
}
int j=0;
while(i>j){
    for(int k=0;k<data2[j]/2;k++){
        if(!(data2[j]%k)){}
        else{
                if(first){
                    maxv=data2[j];
                    first=0;
                }
                if(maxv<data2[j]){
                    maxv=data2[j];
                }
        }
    }
    ++j;
}
fclose(data);
remove("data.asmn");
return maxv;
}
else if(chas=="smallest_non_prime"){
FILE *data;
data=fopen("data.asmn","r");
int data2[1000],i=0,sum=1,maxv,first=1;
char da[22];
fscanf(data,"%s\n",da);
fscanf(data,"%d\n",&maxv);
data2[0]=maxv;
i=i+1;
while(data2[i]!=63032){
    fscanf(data,"%d\n",&data2[i]);
 i=i+1;
}
int j=0;
while(i>j){
    for(int k=0;k<data2[j]/2;k++){
        if(!(data2[j]%k)){}
        else{
                if(first){
                    maxv=data2[j];
                    first=0;
                }
                if(maxv>data2[j]){
                    maxv=data2[j];
                }
        }
    }
    ++j;
}
fclose(data);
remove("data.asmn");
return maxv;
}
else if(chas=="greatest_prime"){
FILE *data;
data=fopen("data.asmn","r");
int data2[1000],i=0,sum=1,maxv,first=1;
char da[22];
fscanf(data,"%s\n",da);
fscanf(data,"%d\n",&maxv);
data2[1]=0;
data2[0]=maxv;
i=i+1;
while(data2[i]!=63032){
    fscanf(data,"%d\n",&data2[i]);
 i=i+1;
}
int j=0;
while(i>j){
    for(int k=0;k<data2[j]/2;k++){
        if(!(data2[j]%k)){
                if(first){
                    maxv=data2[j];
                    first=0;
                }
                if(maxv<data2[j]){
                    maxv=data2[j];
                }
        }
    }
    ++j;
}
fclose(data);
remove("data.asmn");
return maxv;
}
else if(chas=="prime_prod"){
FILE *data;
data=fopen("data.asmn","r");
int data2[1000],i=0,sum=1,maxv;
char da[22];
fscanf(data,"%s\n",da);
fscanf(data,"%d\n",&maxv);
data2[1]=0;
data2[0]=maxv;
i=i+1;
while(data2[i]!=63032){
    fscanf(data,"%d\n",&data2[i]);
 i=i+1;
}
int j=0;
while(i>j){
    for(int k=0;k<data2[j]/2;k++){
        if(!(data2[j]%k))
            sum=sum*data2[j];
    }
    ++j;
}
fclose(data);
remove("data.asmn");
return sum;
}
else if(chas=="velocity"||chas=="speed"){
FILE *data;
data=fopen("data.asmn","r");
int data2[1000],i=0,sum=0,maxv;
char da[22];
fscanf(data,"%s\n",da);
fscanf(data,"%d\n",&maxv);
data2[1]=0;
data2[0]=maxv;
i=i+1;
while(data2[i]!=63032){
    fscanf(data,"%d\n",&data2[i]);
    if(data2[i]==63032)
        break;
    sum=sum+data2[i];
 i=i+1;
}
sum=((sum-data2[i-1])/data2[i-1]);
fclose(data);
remove("data.asmn");
return sum;
}
else if(chas=="forceF"||chas=="forceM"||chas=="forceA"){
FILE *data;
data=fopen("data.asmn","r");
int data2[1000],i=0,sum=0,maxv;
char da[22];
fscanf(data,"%s\n",da);
fscanf(data,"%d\n",&maxv);
data2[1]=1;
data2[0]=maxv;
fscanf(data,"%d\n",&maxv);
data2[1]=maxv;
int mert=1;
data2[999]=1;
if(chas=="forceF"){
    sum=data2[1]*data2[0];
}
else{
sum=data2[0]/data2[1];
}
fclose(data);
remove("data.asmn");
return sum;
}
else if(chas=="mid"){
FILE *data;
data=fopen("data.asmn","r");
int data2[1000],i=0,sum=1,maxv;
char da[22];
fscanf(data,"%s\n",da);
fscanf(data,"%d\n",&maxv);
data2[1]=0;
data2[0]=maxv;
i=i+1;
while(data2[i]!=63032){
    fscanf(data,"%d\n",&data2[i]);
 i=i+1;
}
int j=0;
while(j<i){
    for(int k=j;k<i;k++){
          if(data2[j]>data2[k]){
            int temp=data2[k];
            data2[k]=data2[j];
            data2[j]=temp;
          }
    }
    j=j+1;
}
maxv=data2[i/2];
sum=maxv;
fclose(data);
remove("data.asmn");
return sum;
}
else{
    std::cout<<"\n---RUNTIME ERROR---\nMISSING IR FILE CAUSE:DIDNT ENTER A VALID VALUE\n";
    exit(1);
}
}
else{
    std::cout<<"error.....detected...please-check";
}
remove("data.asmn");
fp=fopen("x.asmn","a");
fseek(fp,location,SEEK_SET);
fprintf(fp,"D");
fclose("x.asmn");
fclose("data.asmn");
return 0;
}
