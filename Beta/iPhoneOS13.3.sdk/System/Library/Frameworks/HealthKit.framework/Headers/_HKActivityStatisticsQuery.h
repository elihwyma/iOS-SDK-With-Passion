/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class NSDate, NSDateComponents, NSString;

@interface _HKActivityStatisticsQuery : HKQuery

{
    _Bool _deliveredInitial;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateComponents *_moveIntervalComponents;
    NSDateComponents *_exerciseIntervalComponents;
    CDUnknownBlockType _queryUpdateHandler;
    CDUnknownBlockType _initialQueryResultsHandler;
    double _updateInterval;
}

@property (copy, nonatomic) CDUnknownBlockType initialQueryResultsHandler;
@property (nonatomic, getter=_updateInterval, setter=_setUpdateInterval:) double updateInterval;
@property (copy, nonatomic) CDUnknownBlockType queryUpdateHandler;
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
- (void)client_deliverResult:(id)arg1 query:(id)arg2;
- (void)_validateIntervalComponents:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 moveIntervalComponents:(id)arg3 exerciseIntervalComponents:(id)arg4 initialQueryResultsHandler:(CDUnknownBlockType)arg5;

@end
