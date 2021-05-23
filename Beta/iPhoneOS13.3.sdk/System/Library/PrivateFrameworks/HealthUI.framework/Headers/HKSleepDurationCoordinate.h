/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKMinMaxCoordinate.h>

@class NSArray, NSNumber;

@interface HKSleepDurationCoordinate : HKMinMaxCoordinate

{
    _Bool _highlighted;
    NSArray *_stackPoints;
    NSNumber *_goalLineYValue;
}

@property (copy, nonatomic) NSArray *stackPoints;
@property (copy, nonatomic) NSNumber *goalLineYValue;
@property (nonatomic, readonly) _Bool highlighted;

- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithStackPoints:(id)arg1 goalLineYValue:(id)arg2 highlighted:(_Bool)arg3 userInfo:(id)arg4;

@end
