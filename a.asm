
include "gdalvik.inc"

virtual 
abc::
    db "Wikipedia"
    len? := $
end virtual

_ adler32 abc, len
dd _
db $FF

