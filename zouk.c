#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#include "jmr.c"

int main() {

    FILE *fp = fopen("zoukW.wav", "rb");

    if (!fp) {
        fprintf(stderr, "Error opening file 'zoukW.wav'\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    const int fsize = ftell(fp);

    printf("%d", fsize);

    fclose(fp);

    //PlaySound((LPCSTR) "C:\\Users\\dim orcus\\Music\\zoukW.wav", NULL, SND_FILENAME | SND_SYNC | SND_LOOP);

    return 0;
}