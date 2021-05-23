/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_source;

@interface CUDashboardServer : NSObject

{
    unsigned char _key[32];
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_logFile;
    int _sockV4;
    NSObject<OS_dispatch_source> *_sockV4Source;
    int _sockV6;
    NSObject<OS_dispatch_source> *_sockV6Source;
    NSString *_logFilePath;
}

@property (copy, nonatomic) NSString *logFilePath;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (int)activate;
- (void)_readHandler:(int)arg1;

@end
