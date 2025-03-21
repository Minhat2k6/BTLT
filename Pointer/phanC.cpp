#include<iostream>

using namespace std;
int strlen(const char *s){
	int len=0;
	while(*s!='\0'){
		len++;
		++s;
	}
	return len;
}
void swap(char &a,char &b){
	char c=a;
	a=b;
	b=c;
}
void reverse(char a[]){
	int len=strlen(a);
	char* sta=a; char *end=a+len-1;
	while(sta<end){
		swap(*sta,*end);
		++sta;
		--end;
	}
}
void delete_char(char a[], char c){
	char * cx =a;
	char* ms=a;
	while(*cx){
		if(*cx!=c){
			*ms=*cx;
			ms++;
		}
		cx++;
	}
		*ms='\0';
	}
void pad_right(char a[], int n){
	int len=strlen(a);
	if (len >= n) return;
    char *p = a + len;
    while (len < n) {
        *p++ = ' ';
        len++;
    }
    *p = '\0';
}
void pad_left(char a[], int n){
	int len = strlen(a);
    if (len >= n) return;
    int dd=n-len;
    char* xx=a+len;
    *(xx+dd)='\0';
    for(int i=0;i<len;i++){
    	*(xx+dd)=*xx;
    	xx--;
	}
	for(int i=0;i<dd;i++){
		a[i]=' ';
	}
}
void truncate(char a[], int n) {
    if (strlen(a) > n) a[n] = '\0';
}
bool is_palindrome(char a[]) {
    char *sta = a, *end = a + strlen(a) - 1;
    while (sta < end) {
        if (*sta != *end) return false;
        sta++, end--;
    }
    return true;
}
void trim_left(char a[]) {
    char *p = a;
    while (*p == ' ') {
	p++;}
    char *dest = a;
    while (*p) *dest++ = *p++;
    *dest = '\0';
}
void trim_right(char a[]) {
    char *p = a + strlen(a) - 1;
    while (p >= a && *p == ' ') *p-- = '\0';
}

int main(){
	char A[]="hellome";
	char B[]="hellome";
	reverse(A);cout<<A<<endl;
	delete_char(B,'o');cout<<B<<endl;
	pad_left(A,10);cout<<A<<endl;
	trim_left(A);cout<<A<<endl;
	
	return 0;
}
