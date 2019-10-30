; Autor:
; Nume program:
; Descriere:
; Data:

 include \masm32\include64\masm64rt.inc

.data
	cifra db ?, 0

.code
  main proc
	mov eax, 6 ; incarcare numar de afisat
	call PutU64

	invoke ExitProcess, 0
	ret
  main endp

 PutU32 proc ; parametru: numar fara semn in EAX
	xor edx, edx ; EDX = 0
	mov ecx, 10 ; ECX = 10
	div ecx ; EDX:EAX / baza (EAX=cat, EDX = rest)
	test eax, eax ; EAX == 0 (conditia de iesire)
	jz @F ; daca EAX == 0 salt la @@ de mai jos
	
	push dx ; DX (rest) -> stiva
	call PutU32 ; apel recursiv
	pop dx ; DX <- stiva
@@:
	add dl, '0' ; conversie cifra din DL in caracter ASCII
	mov cifra, dl ; salvam in sirul "cifra", cifra din numar
	invoke StdOut, addr cifra
	
	ret
PutU32 EndP
PutH32 proc ; parametru: numar fara semn in EAX
	xor edx, edx ; EDX = 0
	mov ecx, 16 ; ECX = 10
	div ecx ; EDX:EAX / baza (EAX=cat, EDX = rest)
	test eax, eax ; EAX == 0 (conditia de iesire)
	jz @F ; daca EAX == 0 salt la @@ de mai jos
	
	push dx ; DX (rest) -> stiva
	call PutH32 ; apel recursiv
	pop dx ; DX <- stiva
@@:
	add dl, '0' ; conversie cifra din DL in caracter ASCII
	cmp dl,'9'
	jna @F
	add dl, 'A' - '9' -1
@@:
	mov cifra, dl ; salvam in sirul "cifra", cifra din numar
	invoke StdOut, addr cifra
	
	ret
PutH32 EndP
PutU64 proc ; parametru: numar fara semn in EAX
	xor rdx, rdx ; EDX = 0
	mov rcx, 10 ; ECX = 10
	div rcx ; EDX:EAX / baza (EAX=cat, EDX = rest)
	test rax, rax ; EAX == 0 (conditia de iesire)
	jz @F ; daca EAX == 0 salt la @@ de mai jos
	
	push dx ; DX (rest) -> stiva
	call PutU64 ; apel recursiv
	pop dx ; DX <- stiva
@@:
	add dl, '0' ; conversie cifra din DL in caracter ASCII
	mov cifra, dl ; salvam in sirul "cifra", cifra din numar
	invoke StdOut, addr cifra
	
	ret
PutU64 EndP
end