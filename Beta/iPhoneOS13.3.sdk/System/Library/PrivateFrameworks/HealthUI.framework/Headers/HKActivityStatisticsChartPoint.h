/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKActivityStatisticsChartPointSummary, HKUnit, NSArray, NSDate, NSNumber, NSString;

@interface HKActivityStatisticsChartPoint : NSObject

{
    NSDate *_date;
    HKUnit *_unit;
    NSArray *_nodes;
    HKActivityStatisticsChartPointSummary *_summary;
    NSNumber *_totalActiveEnergyBurned;
    NSNumber *_moveGoalValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)userInfo;
- (id)minYValue;
- (id)maxYValue;
- (id)yValue;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)arg1;
- (id)allYValues;
- (id)initWithNodes:(id)arg1 summary:(id)arg2 activityCache:(id)arg3 energyUnit:(id)arg4;
- (double)_nodesCaloriesPercentDifference;

@end
