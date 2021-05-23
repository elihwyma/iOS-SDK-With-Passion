/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

typedef void (^CDUnknownBlockType)(void);

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct ccec_cp;

struct ccec_full_ctx {
    struct ccec_cp *_field1;
    unsigned char _field2[8];
    struct ccec_projective_point _field3[0];
};

struct ccec_projective_point {
    unsigned long long _field1[1];
};
