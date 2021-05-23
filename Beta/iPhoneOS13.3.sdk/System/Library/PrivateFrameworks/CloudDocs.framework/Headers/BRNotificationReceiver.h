/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class BRNotificationQueue, NSMutableDictionary, NSString;

@protocol BRItemNotificationSending, BRNotificationReceiverDelegate, NSObject, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRNotificationReceiver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_ipcQueue;
    BRNotificationQueue *_notifs;
    id <BRItemNotificationSending> _sender;
    _Atomic int _gatherDones;
    id <BRNotificationReceiverDelegate> _delegate;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _receivedChanges;
    unsigned long long _batchingChanges;
    double _batchingDelay;
    unsigned long long _lastBatchTime;
    NSMutableDictionary *_progressObserverByID;
    NSMutableDictionary *_itemInTransferByID;
    _Atomic int _suspendCount;
    int _networkReachabilityToken;
    _Bool _isNetworkReachable;
    _Bool _isInvalidated;
    id <NSObject> _accountTokenDidChangeNotificationObserver;
}

@property (nonatomic, readonly) unsigned long long pendingCount;
@property (nonatomic) unsigned long long batchingChanges;
@property (nonatomic) double batchingDelay;
@property (retain, nonatomic) id <BRNotificationReceiverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (oneway void)invalidate;
- (void)resume;
- (void)suspend;
- (void)flush;
- (void)_signalSourceIfNeeded;
- (void)invalidateAndNotify:(_Bool)arg1;
- (void)dequeue:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)_obtainNotificationSenderFromDaemon;
- (void)networkDidChangeReachabilityStatusTo:(_Bool)arg1;
- (void)_watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;
- (void)_invalidateAndNotify:(_Bool)arg1;
- (void)_receiveUpdates:(id)arg1;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)receiveProgressUpdates:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;
- (oneway void)invalidateAndDontNotifyDelegate;
- (void)receiveStitchingUpdates:(id)arg1;
- (void)disableUpdatesFromIPCBeforeStitching;
- (void)enableUpdatesFromIPCAfterStitching;

@end
