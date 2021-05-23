/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

typedef void (^CDUnknownBlockType)(void);

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGSize {
    double width;
    double height;
};

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
