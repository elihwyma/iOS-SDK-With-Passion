/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class HFNumberRange, NSNumber, NSString;

@interface HFNumberValueConstraints : NSObject <Swift>

{
    NSNumber *_minValue;
    NSNumber *_maxValue;
    NSNumber *_stepValue;
}

@property (copy, nonatomic, readonly) NSNumber *minValue;
@property (copy, nonatomic, readonly) NSNumber *maxValue;
@property (copy, nonatomic, readonly) HFNumberRange *validRange;
@property (copy, nonatomic, readonly) NSNumber *stepValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)normalizedValueForValue:(id)arg1;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2 stepValue:(id)arg3;
- (id)roundedValueForValue:(id)arg1;
- (id)boundedValueForValue:(id)arg1;
- (id)percentageConstraintsWithinRange:(id)arg1;
- (id)_normalizeRangeValue:(id)arg1 withinRange:(id)arg2;
- (id)_normalizeStepValue:(id)arg1 withinRange:(id)arg2;
- (id)initWithValidRange:(id)arg1 stepValue:(id)arg2;
- (id)normalizedRangeForRange:(id)arg1;
- (id)percentageConstraints;

@end
