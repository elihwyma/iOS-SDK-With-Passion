/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCBoostableOperationThrottler, NFMutexLock, NSCountedSet, NSHashTable, NSMapTable, NSString;

@protocol FCFetchCoordinatorDelegate;

@interface FCFetchCoordinator : NSObject

{
    id <FCFetchCoordinatorDelegate> _delegate;
    unsigned long long _maxConcurrentFetchCount;
    NSHashTable *_fetchGroups;
    NSCountedSet *_allKeys;
    NSMapTable *_fetchOperationsByGroup;
    NFMutexLock *_accessLock;
    FCBoostableOperationThrottler *_fetchThrottler;
}

@property (retain, nonatomic) NSHashTable *fetchGroups;
@property (retain, nonatomic) NSCountedSet *allKeys;
@property (retain, nonatomic) NSMapTable *fetchOperationsByGroup;
@property (retain, nonatomic) NFMutexLock *accessLock;
@property (retain, nonatomic) FCBoostableOperationThrottler *fetchThrottler;
@property (weak, nonatomic) id <FCFetchCoordinatorDelegate> delegate;
@property unsigned long long maxConcurrentFetchCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (id)fetchKeys:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)fetchKeysUnconditionally:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)addFetchGroup:(id)arg1;
- (void)removeFetchGroup:(id)arg1;
- (void)cancelFetchesIfNeededWithLock;
- (void)beginFetchesIfNeededWithLock;
- (id)fetchKey:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
