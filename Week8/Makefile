bin = .
src = $(wildcard *.c)
dst = $(addprefix $(bin)/, $(basename $(src)))

create:
	cp ../example_comments.c ./$(n)

build: $(bin) $(dst)
	@true

$(bin)/%: %.c
	gcc -o $@ $<

$(bin):
	mkdir -vp $(bin)

.PHONY: build create