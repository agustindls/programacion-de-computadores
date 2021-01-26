all:
  g++ -c gato.cpp
  g++ -c main.cpp
  g++ -o ejecutable gato.o main.o
  ./ejecutable