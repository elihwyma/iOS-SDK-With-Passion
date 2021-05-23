/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface MPAVRouteConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _invalidated;
    NSMutableArray *_pendingConnectionHandlers;
    CDUnknownBlockType _receivedCustomDataHandler;
    CDUnknownBlockType _invalidationHandler;
    void *_externalDevice;
}

@property (nonatomic, readonly) void *externalDevice;
@property (nonatomic, readonly, getter=isConnected) _Bool connected;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;
@property (copy, nonatomic) CDUnknownBlockType receivedCustomDataHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;

- (void)dealloc;
- (void)reset;
- (id)initWithExternalDevice:(void *)arg1;
- (void)connectWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendCustomData:(id)arg1;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)becomeActiveOriginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resignActiveOriginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_connectionDidReceiveCustomData:(id)arg1;
- (void)_connectionStateDidChange:(unsigned int)arg1 error:(id)arg2;

@end
