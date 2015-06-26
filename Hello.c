#include <stdio.h>
#include <stdlib.h>
/*

原本には引数と戻り値が無いが、コンパイルできないので追加
return EXIT_SUCCESS;
は
return 0;
でもいいけどコードが分かりやすくなるのでstdlibでもって使用


printf自体に改行文字は含まれないので、
printf("Hello World\n");
は
printf("Hello");
printf( World\n);
でも同じ結果が出てくる。

*/

int main(int argc,char* argv[]){

	printf("Hello World\n");
	
	return EXIT_SUCCESS;
}
