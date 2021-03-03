

all: testcases.rom testcases.yo


testcases.rom: testcases.yo
	awk -f ys2raw.awk testcases.yo > testcases.rom

testcases.yo: testcases.ys
	./yas testcases.ys

clean:
	rm testcases.yo testcases.rom
