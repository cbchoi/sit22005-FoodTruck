all: fsms

%: %.cpp
	g++ -std=c++11 $< -o $@

clean: 
	rm -f fsms