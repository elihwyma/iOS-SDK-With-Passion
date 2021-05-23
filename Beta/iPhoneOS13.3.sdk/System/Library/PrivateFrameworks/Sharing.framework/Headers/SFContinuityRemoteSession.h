/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, SFDevice, SFSession;

@protocol OS_dispatch_queue;

@interface SFContinuityRemoteSession : NSObject

{
    _Bool _activateCalled;
    CDUnknownBlockType _activateHandler;
    _Bool _invalidateCalled;
    NSMutableArray *_messageQueue;
    _Bool _pairVerifyDone;
    _Bool _pairVerifyRunning;
    SFSession *_sfSession;
    _Bool _sfSessionActivated;
    _Bool _started;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    SFDevice *_peerDevice;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (retain, nonatomic) SFDevice *peerDevice;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)_run;
- (void)_sfSessionStart;
- (void)_sendQueuedMesssages;
- (void)_sendCommand:(int)arg1 options:(id)arg2;
- (void)sendCommand:(int)arg1;
- (void)sendCommand:(int)arg1 options:(id)arg2;

@end
