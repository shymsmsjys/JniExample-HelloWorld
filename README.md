# JniExample-HelloWorld
안드로이드의 모든 것 NDK 첫 예제

# JAVA_HOME variable 
. ~/.profile

# java compile
javac HelloWorld.java

# make java class
mkdir -p kr/or/aesop

# generate c header file
javac -h . HelloWorld.java

# compile c file
gcc -fPIC -c -I$JAVA_HOME/include -I$JAVA_HOME/include/darwin helloworld.c

# make so file
gcc -shared -WI,-soname,helloworld.so -o helloworld.so helloworld.o

cp helloworld.so /Users/csh/Library/
java kr.or.aesop.HelloWorld
