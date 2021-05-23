/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface HKOutstandingFetchOperationManager : NSObject

{
    _Bool _needsRebalanceFetchOperations;
    NSMutableArray *_pendingFetchOperations;
    NSMutableArray *_activeFetchOperations;
    long long _maxConcurrentFetchOperations;
}

@property (nonatomic) long long maxConcurrentFetchOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedOperationManager;
+ (void)setSharedOperationManager:(id)arg1;

- (void)addFetchOperation:(id)arg1;
- (id)initWithMaxConcurrentFetchOperations:(long long)arg1;
- (void)_setNeedsRebalanceFetchOperations;
- (void)removeFetchOperation:(id)arg1;
- (_Bool)_removeFetchOperationFromPendingOperations:(id)arg1;
- (_Bool)_removeFetchOperationFromActiveOperations:(id)arg1;
- (void)_rebalanceFetchOperations;
- (void)_sortPendingFetchOperations;
- (void)_fillActiveFetchOperations;
- (void)_executeFetchOperation:(id)arg1;
- (void)fetchOperationDidUpdatePriority:(id)arg1;
- (void)addFetchOperations:(id)arg1;
- (void)removeFetchOperations:(id)arg1;

@end
