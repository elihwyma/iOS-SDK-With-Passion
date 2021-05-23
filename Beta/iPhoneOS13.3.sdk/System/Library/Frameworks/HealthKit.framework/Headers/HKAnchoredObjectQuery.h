/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class HKQueryAnchor, NSMutableArray, NSString;

@interface HKAnchoredObjectQuery : HKQuery

{
    _Bool _initialHandlerCalled;
    NSMutableArray *_samplesPendingDelivery;
    NSMutableArray *_deletedObjectsPendingDelivery;
    _Atomic _Bool _includeDeletedObjects;
    _Bool _includeAutomaticTimeZones;
    CDUnknownBlockType _updateHandler;
    HKQueryAnchor *_anchor;
    unsigned long long _limit;
    double _collectionInterval;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) HKQueryAnchor *anchor;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) double collectionInterval;
@property (nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool includeAutomaticTimeZones;
@property (nonatomic) _Bool ignoreDeletedObjects;
@property (copy, nonatomic) CDUnknownBlockType updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(id)arg3 limit:(unsigned long long)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (void)client_deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 anchor:(id)arg3 clearPendingSamples:(_Bool)arg4 deliverResults:(_Bool)arg5 query:(id)arg6;
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned long long)arg3 limit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
