all: ./codewars/light_saber

%: %.cc
	g++ -std=c++11 $< -o $@

%: %.c
	gcc $< -o $@
