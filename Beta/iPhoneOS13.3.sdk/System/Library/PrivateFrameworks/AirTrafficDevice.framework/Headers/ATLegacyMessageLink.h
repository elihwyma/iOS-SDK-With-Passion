/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <AirTrafficDevice/ATLockdownMessageLink.h>

@class NSMutableData, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ATLegacyMessageLink : ATLockdownMessageLink

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableData *_incomingData;
    long long _expectedBytesRemaining;
    NSMutableDictionary *_requestHandlerTable;
    double _idleTimeoutInterval;
    _Bool _hostSupportsLocalCloudDownloads;
}

@property (nonatomic) _Bool hostSupportsLocalCloudDownloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)open;
- (void)close;
- (_Bool)idleTimeoutEnabled;
- (id)initWithSocket:(id)arg1;
- (void)socket:(id)arg1 hasDataAvailable:(const char *)arg2 length:(long long)arg3;
- (void)socketDidClose:(id)arg1;
- (void)setHandlerForMessage:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeHandlerForMessage:(id)arg1;
- (void)_handlePingMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handlePongMessage:(id)arg1 fromLink:(id)arg2;
- (_Bool)_sendData:(const char *)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3 error:(id *)arg4;
- (double)_idleTimeoutInterval;
- (void)_sendPingMessage;
- (void)_checkMessageTimeouts;

@end
