# $FreeBSD: src/secure/usr.bin/openssl/Makefile,v 1.11.2.6 2003/02/14 22:38:22 nectar Exp $

PROG=	openssl
WARNS?=	2

.include "${.CURDIR}/../../lib/librecrypto/Makefile.inc"

DPADD+=		${LIBSSL} ${LIBCRYPTO}
LDADD+=		-lprivate_ssl -lprivate_crypto
LDFLAGS+=	${PRIVATELIB_LDFLAGS}
CFLAGS+=	-I${.CURDIR}/../../crypto/libressl/include
CFLAGS+= 	-DMONOLITH -I${.CURDIR}

SRCS=	apps.c apps_posix.c asn1pars.c ca.c certhash.c ciphers.c cms.c crl.c \
	crl2p7.c dgst.c dh.c dhparam.c dsa.c dsaparam.c ec.c ecparam.c enc.c \
	errstr.c gendh.c gendsa.c genpkey.c genrsa.c nseq.c ocsp.c \
	openssl.c passwd.c pkcs12.c pkcs7.c pkcs8.c pkey.c pkeyparam.c \
	pkeyutl.c prime.c rand.c req.c rsa.c rsautl.c s_cb.c s_client.c \
	s_server.c s_socket.c s_time.c sess_id.c smime.c speed.c spkac.c ts.c \
	verify.c version.c x509.c

.include <bsd.prog.mk>

.PATH:	${LIBRESSL_SRC}/apps/openssl
