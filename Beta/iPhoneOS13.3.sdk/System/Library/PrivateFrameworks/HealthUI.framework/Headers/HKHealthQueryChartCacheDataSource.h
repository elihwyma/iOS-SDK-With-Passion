/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKDisplayType, HKHealthStore, NSString;

@interface HKHealthQueryChartCacheDataSource : NSObject

{
    HKHealthStore *_healthStore;
    HKDisplayType *_displayType;
}

@property (nonatomic, readonly) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2;
- (id)statisticsIntervalForTimeScope:(long long)arg1 displayType:(id)arg2;
- (id)operationForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)mappingFunctionForContext:(id)arg1;

@end
