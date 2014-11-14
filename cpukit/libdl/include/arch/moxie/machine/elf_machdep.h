#define ELF32_MACHDEP_ENDIANNESS		ELFDATA2MSB

#define ELF32_MACHDEP_ID_CASES \
	case EM_MOXIE: \
		break;

#define ELF32_MACHDEP_ID	EM_MOXIE

#define ARCH_ELFSIZE	32

#define R_MOXIE_NONE 0
#define R_MOXIE_32 1
#define R_MOXIE_PCREL10 2

#define R_TYPE(name)		__CONCAT(R_MOXIE_,name)