all: 

getIndex:
    gcc -o getIndex getIndex.c

clean:
    rm -f getIndex
