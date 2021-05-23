/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class HKQuantitySample, NSData, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface HKQuantitySeriesSampleQuery : HKQuery

{
    CDUnknownBlockType _seriesHandler;
    HKQuantitySample *_sample;
    long long _anchor;
    double _startTime;
    CDUnknownBlockType _enumerationHandler;
    NSMutableDictionary *_receivedSamplesByUUID;
    _Bool _hasMaximumReceivedStartTime;
    double _maximumReceivedStartTime;
    NSData *_latestReceivedUUIDData;
    NSDate *_latestSampleStartDate;
    _Bool _includeSample;
    _Bool _orderByQuantitySampleStartDate;
}

@property (nonatomic, readonly) NSDictionary *unitTest_cachedQuantitySamplesByUUID;
@property (nonatomic, readonly) CDUnknownBlockType quantityHandlerWithoutSample;
@property (nonatomic, readonly) CDUnknownBlockType quantityHandlerWithSample;
@property (nonatomic) _Bool includeSample;
@property (nonatomic) _Bool orderByQuantitySampleStartDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;

- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (id)_quantitySampleForEnumerationResult:(id)arg1 UUID:(id)arg2;
- (void)client_deliverQuantitySeries:(id)arg1 seriesAnchor:(long long)arg2 isFinal:(_Bool)arg3 query:(id)arg4;
- (void)client_deliverEnumerationResults:(id)arg1 isFinal:(_Bool)arg2 query:(id)arg3;
- (id)initWithSample:(id)arg1 quantityHandler:(CDUnknownBlockType)arg2;
- (id)initWithQuantityType:(id)arg1 predicate:(id)arg2 quantityHandler:(CDUnknownBlockType)arg3;

@end
