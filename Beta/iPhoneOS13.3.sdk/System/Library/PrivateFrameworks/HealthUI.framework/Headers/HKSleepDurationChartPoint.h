/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKSleepChartPointUserInfo, NSDate, NSNumber, NSString;

@interface HKSleepDurationChartPoint : NSObject

{
    _Bool _highlighted;
    double _inBedValue;
    double _asleepValue;
    NSDate *_xValue;
    NSNumber *_goalValue;
    HKSleepChartPointUserInfo *_userInfo;
}

@property (nonatomic) double inBedValue;
@property (nonatomic) double asleepValue;
@property (copy, nonatomic) NSDate *xValue;
@property (copy, nonatomic) NSNumber *goalValue;
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
