/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress, NSString;

@protocol _UIDataTransferMonitorDelegate;

@interface _UIDataTransferMonitor : NSObject <Swift>

{
    NSMutableDictionary *_transferQueue_requestsBySourceItemUUID;
    NSMutableSet *_transferQueue_requestsInProgress;
    _Bool _transferQueue_suppressEventsUntilRequested;
    _Bool _transferQueue_shouldSendBeganCallback;
    _Bool _transferQueue_hasSentBeganCallback;
    _Bool _transferQueue_hasSentFinishedCallback;
    _Bool _transferQueue_shouldSendFinishedCallback;
    NSProgress *_transferQueue_masterProgress;
    NSMutableArray *_transferQueue_childProgresses;
    NSMutableSet *_transferQueue_allEncounteredItemUUIDs;
    id <_UIDataTransferMonitorDelegate> _delegate;
    NSArray *_outstandingRequests;
    unsigned long long _outstandingItemsCount;
}

@property (weak, nonatomic) id <_UIDataTransferMonitorDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *outstandingRequests;
@property (nonatomic, readonly) unsigned long long outstandingItemsCount;
@property (nonatomic, readonly) unsigned long long totalItemsCount;
@property (nonatomic) _Bool suppressEventsUntilRequested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)itemProvider:(id)arg1 finishedDataTransferTransactionUUID:(id)arg2;
- (void)itemProvider:(id)arg1 beganDataTransferTransactionUUID:(id)arg2 progress:(id)arg3;
- (void)sendDelegateEventsIfNeeded;
- (void)cancelOutstandingRequests;
- (void)_transferQueue_sendBeganCallback;
- (void)_transferQueue_scheduleBeganCallback;
- (void)_transferQueue_sendFinishedCallback;
- (void)_transferQueue_recomputeMasterProgress;
- (void)_transferQueue_scheduleFinishedCallback;

@end
