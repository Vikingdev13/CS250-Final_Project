repl-build.out: Final_project.c
	gcc -o $@ $^

.PHONY: run
run: repl-build.out
	./$^

.PHONY: clean

clean:
	rm -f repl-build.out