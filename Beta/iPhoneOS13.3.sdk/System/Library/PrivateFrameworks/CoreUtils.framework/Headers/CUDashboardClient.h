/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString;

@interface CUDashboardClient : NSObject

{
    CDUnion_fab80606 _destAddr;
    unsigned int _destLen;
    unsigned char _key[32];
    char _model[32];
    char _osBuild[32];
    int _sock;
    unsigned char _udid[20];
    NSString *_server;
}

@property (copy, nonatomic) NSString *server;

- (id)init;
- (void)dealloc;
- (int)_activate;
- (void)invalidate;
- (int)activate;
- (int)logJSON:(id)arg1;
- (int)logf:(const char *)arg1;
- (int)logv:(const char *)arg1 args:(char *)arg2;
- (int)_logCStr:(const char *)arg1 length:(unsigned long long)arg2;
- (int)_setupSocket;

@end
