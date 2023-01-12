build:
	g++ -std=c++11 -Werror main.cpp data_struct.cpp queue.cpp stack.cpp -o data_structures
run:
	./data_structures
clean:
	rm data_structures