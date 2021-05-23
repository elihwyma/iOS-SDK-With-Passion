/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface WLSocketHandler : NSObject

{
    NSObject<OS_dispatch_queue> *_readQueue;
    NSMutableArray *_dataCache;
    NSObject<OS_dispatch_source> *_dataCacheReadSource;
    NSObject<OS_dispatch_semaphore> *_dataCacheSema;
}

+ (int)connectToHost:(id)arg1 address:(struct hostent *)arg2 port:(unsigned short)arg3;
+ (void)performDNSLookupForHost:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_commandStringWithData:(id)arg1;
+ (void)lookupAndConnectToHost:(id)arg1 port:(unsigned short)arg2 completion:(CDUnknownBlockType)arg3;

- (id)init;
- (void)dealloc;
- (void)endReadingIntoCache;
- (void)_readIntoCacheFromSocket:(int)arg1;
- (id)observeSocket:(int)arg1 forSourceEventType:(struct dispatch_source_type_s *)arg2 handler:(CDUnknownBlockType)arg3;
- (char *)readBytesFromSocket:(int)arg1 maximumSize:(unsigned long long)arg2 bytesRead:(long long *)arg3;
- (id)waitForDataFromReadCacheReturningError:(id *)arg1;
- (void)_writeBytes:(const void *)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 toSocket:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)writeBytes:(const void *)arg1 length:(unsigned long long)arg2 toSocket:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginReadingIntoCacheFromSocket:(int)arg1;
- (id)waitForBlobDataFromReadCacheReturningError:(id *)arg1;
- (_Bool)waitForCommand:(id)arg1 fromReadCacheReturningError:(id *)arg2;
- (void)sendCommand:(id)arg1 toSocket:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendData:(id)arg1 toSocket:(int)arg2 completion:(CDUnknownBlockType)arg3;

@end
