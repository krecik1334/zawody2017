TEX  = $(wildcard [a-z]*.tex)
PDF  = $(patsubst %.tex,%.pdf,$(TEX))

all: pdf

pdf: $(PDF)

%.pdf: %.dvi
	dvipdf $*.dvi

%.dvi: %.tex
	latex $*.tex
	latex $*.tex	

clean:
	rm -f *.log
	rm -f *.aux
	rm -f *.err
	rm -f *.inf
	rm -f *.dvi

clean-all: clean
	rm -f *.pdf
