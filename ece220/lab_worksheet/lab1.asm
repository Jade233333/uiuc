        .ORIG x3000
; init
        AND R2, R2, #0
        AND R3, R3, #0
        ADD R3, R3, #4 ; set counter to 4
LOOP
        ADD R2, R2, R2 ; left shift R2
        AND R1, R1, R1 ; check first bit
        BRzp SKIP
        ADD R2, R2, #1 ; if 1 add 1 to R2; otherwise skip
SKIP
        ADD R1, R1, R1 ; left sfhit R1
        ADD R3, R3, #-1 ; decrement counter
        BRp LOOP
END
        HALT
        .END
