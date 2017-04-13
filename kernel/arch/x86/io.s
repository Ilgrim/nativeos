; This file is part of NativeOS.
; Copyright (C) 2015 Dani Rodríguez
;
; arch/x86/io.s - This unit provides functions for port input and output

global IO_OutP
global IO_InP

IO_OutP:
	mov al, [esp + 8]
	mov dx, [esp + 4]
	out dx, al ; Send
	ret ; Done

IO_InP:
	mov dx, [esp + 4]
	in al, dx
	ret
