/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKInspectableValue, HKInspectableValueCollection, NSDate, NSString;

@interface HKInspectableValueInRange : NSObject

{
    HKInspectableValue *_lowValue;
    HKInspectableValue *_highValue;
    HKInspectableValueCollection *_currentValue;
    NSString *_unitString;
    NSDate *_date;
}

@property (nonatomic, readonly) HKInspectableValue *lowValue;
@property (nonatomic, readonly) HKInspectableValue *highValue;
@property (nonatomic, readonly) HKInspectableValueCollection *currentValue;
@property (copy, nonatomic, readonly) NSString *unitString;
@property (nonatomic, readonly) double lowValueDoubleRepresentation;
@property (nonatomic, readonly) double highValueDoubleRepresentation;
@property (nonatomic, readonly) long long currentValueRelation;
@property (nonatomic, readonly) _Bool hasRenderableContent;
@property (retain, nonatomic) NSDate *date;

+ (_Bool)supportsSecureCoding;
+ (id)valueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_assertValidRange;
- (id)_initValueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4;
- (double)_doubleForValue:(id)arg1;
- (double)_doubleForValueCollection:(id)arg1;
- (void)_setUnitString:(id)arg1;

@end
