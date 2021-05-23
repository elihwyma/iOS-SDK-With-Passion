/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class NSMutableArray, NSString;

@interface HKActivitySummaryQuery : HKQuery

{
    _Bool _initialHandlerCalled;
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_pendingActivitySummaries;
    _Bool _shouldIncludeActivitySummaryPrivateProperties;
    _Bool _shouldIncludeActivitySummaryStatistics;
    _Bool _orderByDateAscending;
    CDUnknownBlockType _updateHandler;
    unsigned long long _limit;
}

@property (nonatomic) _Bool shouldIncludeActivitySummaryPrivateProperties;
@property (nonatomic) _Bool shouldIncludeActivitySummaryStatistics;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool orderByDateAscending;
@property (nonatomic) unsigned long long limit;
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
- (id)initWithPredicate:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;
- (void)client_deliverActivitySummaries:(id)arg1 isFinalBatch:(_Bool)arg2 clearPendingBatches:(_Bool)arg3 queryUUID:(id)arg4;
- (void)setShouldIncludePrivateActivitySummaryProperties:(_Bool)arg1;

@end
