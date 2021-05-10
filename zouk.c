#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#include "jmr.c"

int main() {

    unsigned char *b = malloc(zoukW_wav_len);
    if (b == NULL) {
        fprintf(stderr, "Fatal: failed to allocate %zu bytes.\n", zoukW_wav_len);
        abort();
    }

    memcpy(b, zoukW_wav, zoukW_wav_len);

    int i;
    for (i=0; i<10; i++) {
        printf("%x", b[i]);
    }

    BYTE* pb = (BYTE *)b;

    PlaySound((LPCSTR) pb, NULL, SND_MEMORY | SND_SYNC);

    printf("\n");

    free(b);


    //PlaySound((LPCSTR) "C:\\Users\\dim orcus\\Music\\zoukW.wav", NULL, SND_FILENAME | SND_SYNC | SND_LOOP);

    return 0;
}