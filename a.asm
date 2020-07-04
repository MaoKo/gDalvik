
include "gdalvik.inc"

virtual at $00
_test::
    ;db "The quick brown fox jumps over the lazy cog"
    db "ABAA"
    _test._len = $
end virtual

repeat $1
_ sha1 _test
end repeat

emit $14 : _
