/*
 Image: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, PRPeer, PRRangingDevice;

@protocol OS_dispatch_queue, OS_os_log, PRRangingSessionDelegate;

@interface PRRangingSession : NSObject

{
    NSObject<OS_os_log> *_logger;
    PRPeer *_localPeer;
    PRRangingDevice *_rangingDevice;
    _Bool _isReady;
    _Bool _valid;
    id <PRRangingSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_sessionParticipants;
    PRPeer *_rangedPeer;
}

@property (retain) NSMutableSet *sessionParticipants;
@property _Bool isReady;
@property (getter=isValid) _Bool valid;
@property (retain) PRPeer *rangedPeer;
@property (weak) id <PRRangingSessionDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (copy, readonly) PRPeer *localPeer;

- (id)init;
- (void)invalidate;
- (void)startRangingWithPeer:(id)arg1;
- (void)stopRangingWithPeer:(id)arg1;
- (void)pushCollaborationData:(id)arg1;
- (void)invokeDelegateBlock:(CDUnknownBlockType)arg1;
- (void)requestInitialCollaborationDataWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
