/*
 * match targets defined in the assembler's targ-env.h with an output vector.
 * XXX i386-*-dragonfly and amd64-*-dragonfly are obsolete, but not quite
 * removed from the binutils build yet.
 *
 * $DragonFly: src/gnu/usr.bin/binutils214/libbfd/Attic/dfly_targmatch.h,v 1.1 2004/02/01 08:53:04 dillon Exp $
 */
{ "elf32-i386-dragonfly*", &bfd_elf32_i386_vec },
{ "elf64-amd64-dragonfly*", &bfd_elf64_x86_64_vec },
{ "i386-*-dragonfly*", &bfd_elf32_i386_vec },
{ "amd64-*-dragonfly*", &bfd_elf64_x86_64_vec },
