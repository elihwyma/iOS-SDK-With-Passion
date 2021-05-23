/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <ATSocket.h>

@class NSObject;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATLockdownSocket : ATSocket

{
    void *_lockdownInfo;
    struct _lockdown_connection *_connection;
    NSObject<OS_dispatch_source> *_recvSource;
    NSObject<OS_dispatch_queue> *_socketRWQueue;
    char _readBuffer[65536];
}

@property (nonatomic, readonly) _Bool isWifi;

- (_Bool)open;
- (void)close;
- (_Bool)isOpen;
- (void)writeData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithLockdownInfo:(void *)arg1;
- (void)_readLength:(unsigned long long)arg1;
- (int)send:(const char *)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3 error:(id *)arg4;
- (int)recv:(char *)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3 error:(id *)arg4;

@end
