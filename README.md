# ZoukWare


## Build the .exe
```batch
i686-w64-mingw32-gcc zouk.c -o zouk -lwinmm
```
## zouk.mp3 ----> zouk.wav (header)
```batch
ffmpeg -i zouk.mp3 -c copy -f wav zoukW.wav
```

## Transform zoukW.wav in hex array
```batch
xxd -i zoukW.wav > jmr.c 
```
### Add something for the test