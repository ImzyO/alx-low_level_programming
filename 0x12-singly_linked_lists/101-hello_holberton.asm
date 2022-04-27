	global	main
	extern	printf
main:
	mov	edi,	format
	xor	eax,	eax
	call	printf
	mov	eas,	0
	ret
format: db 'Hello, Holeberton\n', 0
