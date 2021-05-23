/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class HKQuantity, NSDate, NSDateComponents, NSString;

@interface _HKQuantityDistributionQuery : HKQuery

{
    NSDate *_startDate;
    NSDate *_endDate;
    long long _contextStyle;
    NSDate *_anchorDate;
    NSDateComponents *_intervalComponents;
    HKQuantity *_histogramAnchor;
    HKQuantity *_histogramBucketSize;
    unsigned long long _options;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) long long contextStyle;
@property (nonatomic, readonly) NSDate *anchorDate;
@property (nonatomic, readonly) NSDateComponents *intervalComponents;
@property (nonatomic, readonly) HKQuantity *histogramAnchor;
@property (nonatomic, readonly) HKQuantity *histogramBucketSize;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverDistributionCollection:(id)arg1 forQuery:(id)arg2;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contextStyle:(long long)arg4 predicate:(id)arg5 anchorDate:(id)arg6 intervalComponents:(id)arg7 histogramAnchor:(id)arg8 histogramBucketSize:(id)arg9 options:(unsigned long long)arg10 completionHandler:(CDUnknownBlockType)arg11;

@end
