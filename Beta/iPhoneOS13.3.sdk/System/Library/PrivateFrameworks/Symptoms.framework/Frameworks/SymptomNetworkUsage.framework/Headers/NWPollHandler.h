/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NWUsageManager, NWUsageTargetSelector;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NWPollHandler : NSObject

{
    NSMutableArray *_batchedSnapshots[10];
    _Atomic unsigned long long _batchesOutstanding;
    unsigned int _producerSeqno;
    unsigned int _consumerSeqno;
    _Bool _active;
    _Bool _paused;
    NWUsageTargetSelector *_flowSelector;
    CDUnknownBlockType _deliveryBlock;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned long long _ntstatContext;
    NWUsageManager *_manager;
}

@property (retain) NWUsageTargetSelector *flowSelector;
@property (copy) CDUnknownBlockType deliveryBlock;
@property (copy) CDUnknownBlockType completionBlock;
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) unsigned long long ntstatContext;
@property (nonatomic) _Bool paused;
@property (nonatomic, readonly) _Bool completed;
@property (nonatomic, readonly) _Bool shouldRestartPoll;
@property (retain) NWUsageManager *manager;

- (id)init;
- (id)description;
- (void)shutdown;
- (id)nextDelivery;
- (void)decrementBatchCount;
- (void)_dispatchNextBatch;
- (void)pushCurrentSnapshots:(_Bool)arg1;
- (void)handleSnapshot:(id)arg1;

@end
