
macro calminstruction?.error? random?*, string?*, jump?:jno
        execasm     unique random
        asmcmd      invoke, =jump random
        execasm     execasm err string
        asmcmd      invoke, random:
end macro
