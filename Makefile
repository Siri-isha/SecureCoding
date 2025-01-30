all: arrayValue fileSize getIndex sample vehicle

arrayValue:
    gcc -o arrayValue arrayValue.c

fileSize:
    gcc -o fileSize fileSize.c

getIndex:
    gcc -o getIndex getIndex.c

sample:
    gcc -o sample sample.c

vehicle:
    gcc -o vehicle vehicle.c

clean:
    rm -f arrayValue fileSize getIndex sample vehicle
