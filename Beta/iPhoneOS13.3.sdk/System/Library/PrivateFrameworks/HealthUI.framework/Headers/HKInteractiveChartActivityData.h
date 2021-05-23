/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKActivitySummary, NSString;

@interface HKInteractiveChartActivityData : NSObject

{
    HKActivitySummary *_activitySummaryData;
    long long _activityValue;
}

@property (retain, nonatomic) HKActivitySummary *activitySummaryData;
@property (nonatomic) long long activityValue;
@property (nonatomic, readonly) _Bool hasActivityGoal;
@property (nonatomic, readonly) _Bool activityValueGoalMet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
