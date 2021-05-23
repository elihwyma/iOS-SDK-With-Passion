/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

typedef void (^CDUnknownBlockType)(void);

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PR_BUF_IO {
    char *_field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned short _field6;
    unsigned short _field7;
    struct _PR_LIMITS *_field8;
    struct _PR_PARA_INFO *_field9;
    struct _PR_ERROR *_field10;
    struct _PR_PARSE_INFO **_field11;
    unsigned char _field12;
    short _field13;
    char _field14;
    char _field15;
    struct _PR_STATUS _field16;
};

struct _PR_DBINIT {
    struct _PR_FILE *_field1[1];
    struct _PR_FILE *_field2;
    struct _PR_FILE *_field3;
    struct _PR_FILE *_field4;
    struct _PR_FILE *_field5;
};

struct _PR_DB_IO {
    unsigned char _field1;
    unsigned char _field2;
    struct _PR_DOC_FORMAT _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned int *_field6;
    unsigned char _field7;
    short _field8;
    short _field9;
    short _field10;
    short _field11;
    unsigned short _field12;
    struct _PR_DBINIT _field13;
    struct _RULEFILE *_field14[1];
    struct _PR_STATUS _field15;
};

struct _PR_DOC_FORMAT {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned short _field7;
    unsigned short _field8;
};

struct _PR_ERROR;

struct _PR_FILE;

struct _PR_LIMITS;

struct _PR_PARA_INFO;

struct _PR_PARSE_INFO;

struct _PR_STATUS {
    unsigned int _field1;
    int _field2;
    unsigned short _field3;
};

struct _RULEFILE;

typedef struct {
    unsigned long long _field1;
    int _field2;
} CDStruct_b54abf8e;
