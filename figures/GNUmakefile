TARGET := dvcs_feynman

default: pdf

pdf: 
	pdflatex -shell-escape $(TARGET).tex

dvi:
	latex 

png:
	./to_png

.PHONY: all clean

clean: 
	rm -f *.aux
	rm -f *.auxlock
	rm -f *.log
	rm -f *.spl
	rm -f *.blg
	rm -f *.bbl
	rm -f *.dpth
	rm -f $(TARGET)*.pdf


