
TOKEN? := $00
DIGIT? := $01
IDENT? := $02

redefine __identifier?
struc identifier? target?*&
	. =: TOKEN?
	redefine __identifier?.target.
	match,__identifier?.target
		. =: DIGIT?
		namespace __identifier?
			rawmatch _, target
				match,_
					. =: IDENT?
				end match
			end rawmatch
		end namespace
		restore __identifier?.target
	end match
end struc
