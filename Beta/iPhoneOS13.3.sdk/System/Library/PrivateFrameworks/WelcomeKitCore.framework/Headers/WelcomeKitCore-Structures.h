/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

typedef void (^CDUnknownBlockType)(void);

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs;

struct cstr_st;

struct hostent {
    char *_field1;
    char **_field2;
    int _field3;
    int _field4;
    char **_field5;
};

struct srp_meth_st;

struct srp_server_lu_st;

struct srp_st {
    int _field1;
    int _field2;
    struct cstr_st *_field3;
    void *_field4;
    void *_field5;
    struct cstr_st *_field6;
    void *_field7;
    void *_field8;
    void *_field9;
    void *_field10;
    void *_field11;
    void *_field12;
    struct cstr_st *_field13;
    struct srp_meth_st *_field14;
    void *_field15;
    void *_field16;
    void *_field17;
    CDUnknownFunctionPointerType _field18;
    struct srp_server_lu_st *_field19;
};
