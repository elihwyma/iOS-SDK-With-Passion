/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

typedef void (^CDUnknownBlockType)(void);

struct CC_SHA1state_st {
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CC_SHA256state_st {
    unsigned int count[2];
    unsigned int hash[8];
    unsigned int wbuf[16];
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};
