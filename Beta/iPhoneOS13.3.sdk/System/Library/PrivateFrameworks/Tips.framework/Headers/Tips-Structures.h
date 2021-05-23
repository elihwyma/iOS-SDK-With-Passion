/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

typedef void (^CDUnknownBlockType)(void);

struct TPSURLSessionDelegateResponds {
    _Bool willCacheResponse;
    _Bool downloadTaskDidFinishDownloadingToURL;
    _Bool didReceiveResponse;
    _Bool didCompleteWithError;
    _Bool taskDidReceiveChallenge;
};

struct in_addr {
    unsigned int _field1;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};
