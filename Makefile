all: vehicle sample fileSize arrayValue

vehicle:
    gcc -o vehicle vehicle.c

sample:
    gcc -o sample sample.c

fileSize:
    gcc -o fileSize fileSize.c

arrayValue:
    gcc -o arrayValue arrayValue.c
