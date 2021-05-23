/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class NSDateInterval, NSString;

@interface HKStatisticsQuery : HKQuery

{
    _Bool _requireQuantityType;
    CDUnknownBlockType _completionHandler;
    unsigned long long _options;
    unsigned long long _mergeStrategy;
    NSDateInterval *_dateInterval;
}

@property (nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic) unsigned long long mergeStrategy;
@property (retain, nonatomic, getter=_dateInterval, setter=_setDateInterval:) NSDateInterval *dateInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (id)_filter;
- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_filterForDateInterval:(id)arg1;
- (void)client_deliverStatistics:(id)arg1 forQuery:(id)arg2;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
