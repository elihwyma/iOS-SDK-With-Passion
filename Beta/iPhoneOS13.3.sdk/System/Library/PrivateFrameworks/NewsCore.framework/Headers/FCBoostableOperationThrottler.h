/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@protocol FCBoostableOperationThrottlerDelegate, OS_dispatch_queue;

@interface FCBoostableOperationThrottler : NSObject

{
    _Bool _workPending;
    struct os_unfair_lock_s _workPendingLock;
    unsigned long long _mergedData;
    id <FCBoostableOperationThrottlerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialWorkQueue;
    long long _workPendingQualityOfService;
    unsigned long long _workPendingMergedData;
}

@property (weak, nonatomic) id <FCBoostableOperationThrottlerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue;
@property (nonatomic) _Bool workPending;
@property (nonatomic) long long workPendingQualityOfService;
@property (nonatomic) unsigned long long workPendingMergedData;
@property (nonatomic) struct os_unfair_lock_s workPendingLock;
@property (nonatomic) unsigned long long mergedData;
@property _Bool suspended;

- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)tickle;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;
- (void)tickleWithQualityOfService:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tickleWithQualityOfService:(long long)arg1;
- (void)tickleWithQualityOfService:(long long)arg1 data:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
