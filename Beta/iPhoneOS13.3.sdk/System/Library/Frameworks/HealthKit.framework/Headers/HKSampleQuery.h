/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class NSArray, NSMutableArray, NSString;

@interface HKSampleQuery : HKQuery

{
    unsigned long long _limit;
    _Bool _includeAutomaticTimeZones;
    NSArray *_sortDescriptors;
    NSMutableArray *_samplesPendingDelivery;
    CDUnknownBlockType _resultHandler;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType resultHandler;
@property (nonatomic) _Bool includeAutomaticTimeZones;
@property (readonly) unsigned long long limit;
@property (copy, readonly) NSArray *sortDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (void)queue_populateConfiguration:(id)arg1;
- (_Bool)_prepareSamplesForDelivery:(id)arg1 error:(id *)arg2;
- (void)client_deliverSamples:(id)arg1 clearPendingSamples:(_Bool)arg2 isFinalBatch:(_Bool)arg3 queryUUID:(id)arg4;

@end
