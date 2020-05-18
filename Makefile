CXXFLAGS=-Ofast -g -Wall `root-config --cflags` -fPIC -Iinclude
LDFLAGS=`root-config --glibs` -Llib

CC=g++ $(CXXFLAGS) $(LDFLAGS)

all : directories MyUtilities Test

directories:
	mkdir -p bin lib

MyUtilities: src/MyUtilities.cxx
	$(CC) -shared -o lib/libMyUtilities.so src/MyUtilities.cxx

Test:	src/Test.cxx
	$(CC) -lMyUtilities -o bin/test src/Test.cxx

clean :
	rm -rf lib/libMyUtilities.so bin/test
