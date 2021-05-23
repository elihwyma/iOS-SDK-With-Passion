/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface HKValueRange : NSObject

{
    id _minValue;
    id _maxValue;
}

@property (copy, nonatomic) id minValue;
@property (copy, nonatomic) id maxValue;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

+ (id)valueRangeWithMinValue:(id)arg1 maxValue:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)containsValue:(id)arg1;
- (void)unionRange:(id)arg1;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;
- (_Bool)hk_animatable;
- (void)unionMinValueWithRange:(id)arg1;
- (void)unionMaxValueWithRange:(id)arg1;

@end
