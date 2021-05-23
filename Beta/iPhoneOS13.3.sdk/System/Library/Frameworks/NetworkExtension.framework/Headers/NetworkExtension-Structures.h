/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct CC_SHA1state_st {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8[16];
    int _field9;
};

struct EAPClientPluginData_s {
    void *private;
    _Bool log_enabled;
    unsigned int log_level;
    unsigned int mtu;
    unsigned int generation;
    void *unique_id;
    unsigned int unique_id_length;
    char *username;
    unsigned int username_length;
    struct __CFData *encryptedEAPIdentity;
    char *password;
    unsigned int password_length;
    struct __CFDictionary *properties;
    _Bool system_mode;
    struct __SecIdentity *sec_identity;
    void *reserved[6];
};

struct NSMutableData {
    Class _field1;
};

struct __SecKey {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct __SecKeyDescriptor *_field2;
    void *_field3;
};

struct ccdigest_info;

struct ccec_cp;

struct ccec_full_ctx {
    struct ccec_cp *cp;
    unsigned char pad[8];
    struct ccec_projective_point point[0];
};

struct ccec_projective_point {
    unsigned long long xyz[1];
};

struct cfil_crypto_state {
    struct ccdigest_info *_field1;
    unsigned char _field2[32];
};

struct interpose_frame {
    unsigned char ring_id;
    char *buffer;
    unsigned int bufferLength;
    unsigned long long packet;
    struct __user_buflet *buflet;
};

struct nw_frame;

struct nw_frame_array_s {
    struct nw_frame *tqh_first;
    struct nw_frame **tqh_last;
};

struct nw_protocol {
    unsigned char flow_id[16];
    struct nw_protocol_identifier *identifier;
    struct nw_protocol_callbacks *callbacks;
    struct nw_protocol *output_handler;
    void *handle;
    struct nw_protocol *default_input_handler;
    void *output_handler_context;
};

struct nw_protocol_callbacks;

struct nw_protocol_identifier;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_storage {
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1[6];
    long long __ss_align;
    char __ss_pad2[112];
};

struct timeval {
    long long _field1;
    int _field2;
};

typedef struct {
    int _field1;
    unsigned char _field2[12];
} CDStruct_c3d3b44c;

typedef union {
    union {
        struct ccec_full_ctx dhECPKey256[9];
        struct ccec_full_ctx dhECPKey384[13];
        struct ccec_full_ctx dhECPKey521[19];
    } dhECPKey;
    union {
        unsigned char dhCurveKey25519[32];
    } dhCurveKey;
} CDUnion_07c5b791;
