
include "gdalvik.inc"

virtual at $00
_test::
    ;db "The quick brown fox jumps over the lazy cog"
    db "A"
    _test._len = $
end virtual

_ sha1 _test
dd _
