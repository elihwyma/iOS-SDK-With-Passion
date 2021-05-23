/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BaseBoard/BSBaseXPCClient.h>

@class NSObject;

@protocol BKSSystemApplicationClientDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface BKSSystemApplicationClient : BSBaseXPCClient

{
    NSObject<OS_dispatch_queue> *_callOutQueue;
    _Bool _pendingCheckIn;
    _Bool _sentConnect;
    _Bool _waitingForPing;
    NSObject<OS_dispatch_semaphore> *_checkinSemaphore;
    NSObject<OS_dispatch_semaphore> *_pingSemaphore;
    double _systemIdleSleepInterval;
    id <BKSSystemApplicationClientDelegate> _delegate;
}

@property (weak, nonatomic) id <BKSSystemApplicationClientDelegate> delegate;
@property (nonatomic) double systemIdleSleepInterval;

- (_Bool)ping;
- (void)queue_connectionWasResumed;
- (void)queue_connectionWasInterrupted;
- (void)queue_connectionWasInvalidated;
- (void)queue_handleMessage:(id)arg1;
- (void)connect;
- (void)sendActions:(id)arg1;
- (id)initWithCalloutQueue:(id)arg1;
- (void)_connect;
- (void)finishBooting;
- (void)checkInAndWaitForDataMigration:(_Bool)arg1;
- (void)_queue_handleWatchdogPing:(id)arg1;
- (void)_sendMessageOfType:(long long)arg1 packer:(CDUnknownBlockType)arg2;
- (void)_sendMessageOfType:(long long)arg1 packer:(CDUnknownBlockType)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)_sendMessageOfType:(long long)arg1 packer:(CDUnknownBlockType)arg2 replyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4 waitDuration:(unsigned long long)arg5;

@end
