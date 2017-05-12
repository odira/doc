NAME=Межведомственные\ документы
GRAPHNAME=${NAME}.graph

all: png pdf 

edit: 
	vi ${GRAPHNAME}

png: ${GRAPHNAME}
	dot -Tpng ${GRAPHNAME} > ${NAME}.png

pdf: ${GRAPHNAME}
	dot -Tpdf ${GRAPHNAME} > ${NAME}.pdf

backup:
	cp ${GRAPHNAME} _BACKUP/${NAME}.`date +%Y%m%d_%H%M`.graph

clean:
	@rm *.png *.pdf
