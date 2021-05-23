/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class NSDateComponents;

@interface HKCurrentActivityCacheQuery : HKQuery

{
    NSDateComponents *_statisticsIntervalComponents;
    CDUnknownBlockType _updateHandler;
}

@property (copy, nonatomic) CDUnknownBlockType updateHandler;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)client_deliverQueryResult:(id)arg1 queryUUID:(id)arg2;
- (void)queue_populateConfiguration:(id)arg1;
- (id)initWithStatisticsIntervalComponents:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;

@end
