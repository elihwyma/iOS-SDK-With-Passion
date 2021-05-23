/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSValue.h>

@interface NSValue (HKGraphSeriesDataBlockPath)

+ (id)valueWithHKGraphSeriesDataBlockPath:(CDStruct_6ca94699)arg1;
+ (id)valueWithHKLinearTransform:(struct HKLinearTransform)arg1;

- (CDStruct_6ca94699)HKGraphSeriesDataBlockPathValue;
- (struct HKLinearTransform)HKLinearTransformValue;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;
- (_Bool)hk_animatable;
- (_Bool)_hk_isCGPoint;
- (_Bool)_hk_isHKLinearTransform;
- (id)_hk_CGPointMidPointToValue:(id)arg1 percentage:(double)arg2;
- (id)_hk_HKLinearTransformMidPointToValue:(id)arg1 percentage:(double)arg2;

@end
