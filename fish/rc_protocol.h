/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _RC_PROTOCOL_H_RPCGEN
#define _RC_PROTOCOL_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


typedef char *guestfish_str;

struct guestfish_hello {
	char *vers;
};
typedef struct guestfish_hello guestfish_hello;

struct guestfish_call {
	char *cmd;
	struct {
		u_int args_len;
		guestfish_str *args_val;
	} args;
	bool_t exit_on_error;
};
typedef struct guestfish_call guestfish_call;

struct guestfish_reply {
	int r;
};
typedef struct guestfish_reply guestfish_reply;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_guestfish_str (XDR *, guestfish_str*);
extern  bool_t xdr_guestfish_hello (XDR *, guestfish_hello*);
extern  bool_t xdr_guestfish_call (XDR *, guestfish_call*);
extern  bool_t xdr_guestfish_reply (XDR *, guestfish_reply*);

#else /* K&R C */
extern bool_t xdr_guestfish_str ();
extern bool_t xdr_guestfish_hello ();
extern bool_t xdr_guestfish_call ();
extern bool_t xdr_guestfish_reply ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_RC_PROTOCOL_H_RPCGEN */
