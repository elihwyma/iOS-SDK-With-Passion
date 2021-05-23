/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKSleepChartPointUserInfo, NSArray, NSDate, NSNumber, NSString;

@interface HKSleepPeriodChartPoint : NSObject

{
    _Bool _highlighted;
    NSArray *_asleepOffsets;
    NSArray *_inBedOffsets;
    NSDate *_xValue;
    NSNumber *_upperGoal;
    NSNumber *_lowerGoal;
    HKSleepChartPointUserInfo *_userInfo;
}

@property (retain, nonatomic) NSArray *asleepOffsets;
@property (retain, nonatomic) NSArray *inBedOffsets;
@property (copy, nonatomic) NSDate *xValue;
@property (copy, nonatomic) NSNumber *upperGoal;
@property (copy, nonatomic) NSNumber *lowerGoal;
@property (nonatomic) _Bool highlighted;
@property (retain, nonatomic) HKSleepChartPointUserInfo *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)minYValue;
- (id)maxYValue;
- (id)yValue;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)arg1;
- (id)allYValues;

@end
