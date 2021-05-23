/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class HKCorrelationType, NSDictionary, NSMutableArray, NSString;

@interface HKCorrelationQuery : HKQuery

{
    NSDictionary *_samplePredicates;
    NSMutableArray *_correlationsPendingDelivery;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_filterDictionary;
}

@property (nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) NSDictionary *filterDictionary;
@property (copy, readonly) HKCorrelationType *correlationType;
@property (copy, readonly) NSDictionary *samplePredicates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;
+ (_Bool)shouldApplyAdditionalPredicateForObjectType:(id)arg1;

- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (id)_predicateFilterClasses;
- (void)client_deliverCorrelations:(id)arg1 clearPendingSamples:(_Bool)arg2 isFinalBatch:(_Bool)arg3 queryUUID:(id)arg4;
- (id)initWithType:(id)arg1 predicate:(id)arg2 samplePredicates:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
