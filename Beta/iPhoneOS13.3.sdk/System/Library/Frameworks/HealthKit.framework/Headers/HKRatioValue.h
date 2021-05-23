/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKCodedQuantity;

@interface HKRatioValue : NSObject <Swift>

{
    HKCodedQuantity *_numerator;
    HKCodedQuantity *_denominator;
}

@property (copy, nonatomic, readonly) HKCodedQuantity *numerator;
@property (copy, nonatomic, readonly) HKCodedQuantity *denominator;

+ (_Bool)supportsSecureCoding;
+ (id)ratioValueWithNumerator:(id)arg1 andDenominator:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithNumerator:(id)arg1 denominator:(id)arg2;

@end
