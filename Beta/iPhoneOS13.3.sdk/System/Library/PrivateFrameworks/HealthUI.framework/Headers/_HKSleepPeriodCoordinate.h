/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKSleepPeriodCoordinate : NSObject

{
    _Bool _highlighted;
    NSArray *_asleepYValues;
    NSArray *_inBedYValues;
    NSArray *_yValues;
    NSNumber *_upperGoalYValue;
    NSNumber *_lowerGoalYValue;
    double _xValue;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (nonatomic, readonly) NSArray *asleepYValues;
@property (nonatomic, readonly) NSArray *inBedYValues;
@property (nonatomic, readonly) NSArray *yValues;
@property (nonatomic, readonly) NSNumber *upperGoalYValue;
@property (nonatomic, readonly) NSNumber *lowerGoalYValue;
@property (nonatomic, readonly) double xValue;
@property (nonatomic, readonly) _Bool highlighted;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) double endXValue;

- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithXValue:(double)arg1 asleepYValues:(id)arg2 inBedYValues:(id)arg3 yValues:(id)arg4 upperGoalYValue:(id)arg5 lowerGoalYValue:(id)arg6 highlighted:(_Bool)arg7 userInfo:(id)arg8;

@end
