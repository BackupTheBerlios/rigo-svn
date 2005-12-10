#include <stdio.h>
#include <stdlib.h>

#include <pdflib.h>

int main(void){

	PDF *p;
	int font;
	
	p = PDF_new();
	
	if(PDF_open_file(p, "hello_c.pdf") == -1){
		fprintf(stderr, "Error: couldn't open PDF file\n");
		exit(2);
	}
	
	PDF_set_info(p, "Creator", "Hello.c");
	PDF_set_info(p, "Author", "Siafu86");
	PDF_set_info(p, "Title", "Hello, World (C)!");
	
	PDF_begin_page(p, a4_width, a4_height); //new page
	
	font = PDF_findfont(p, "Helvetica-Bold", "host", 0);
	PDF_setfont(p, font, 24);
	PDF_set_text_pos(p, 50, 700);
	PDF_show(p, "Hello World!");
	PDF_continue_text(p, "says C");
	PDF_end_page(p);
	
	PDF_close(p);
	PDF_delete(p);
	
	return 0;
}
