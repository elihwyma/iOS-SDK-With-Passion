/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSMonotonicReferenceTime, NSMutableArray, NSOperationQueue, SBBootDefaults;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface SBSynchronizeCloudCriticalDataOperation : NSObject

{
    _Bool _needsSync;
    SBBootDefaults *_queue_bootDefaults;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_queue_operationGroup;
    unsigned long long _queue_operationCount;
    _Bool _queue_isComplete;
    BSMonotonicReferenceTime *_queue_cloudSyncStartReferenceTime;
    NSMutableArray *_testOperations;
}

@property (nonatomic, readonly, getter=isComplete) _Bool complete;

- (id)init;
- (unsigned long long)_pendingOperationCount;
- (void)startSynchronize;
- (_Bool)waitForSynchronizeToCompleteWithTimeout:(double)arg1;
- (id)initWithDefaults:(id)arg1 userManager:(id)arg2;
- (_Bool)_queue_isComplete;
- (void)_queue_startFetchingCloudCriticalData;
- (id)_queue_fetchCloudAccountOperation;
- (id)_queue_fetchCloudDefaultsOperation;
- (id)_queue_fetchMDMProfilesOperation;
- (id)_queue_migrateSoundPreferencesOperation;
- (void)_queue_addOperation:(id)arg1;
- (void)_fetchDomains:(id)arg1 fromIndex:(long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_addTestOperation:(id)arg1;

@end
