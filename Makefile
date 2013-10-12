
helloworld: hello_world/main.c 
	gcc -Wall -W -Werror hello_world/main.c -o build/helloworld

factorize: factorize/main.c
	gcc -Wall -W -Werror factorize/main.c -o build/factorize -lm
