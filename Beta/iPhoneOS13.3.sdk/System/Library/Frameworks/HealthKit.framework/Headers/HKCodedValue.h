/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKInspectableValue, NSArray;

@interface HKCodedValue : NSObject <Swift>

{
    NSArray *_codings;
    HKInspectableValue *_value;
    NSArray *_referenceRanges;
}

@property (copy, nonatomic, readonly) NSArray *codings;
@property (copy, nonatomic, readonly) HKInspectableValue *value;
@property (copy, nonatomic, readonly) NSArray *referenceRanges;

+ (_Bool)supportsSecureCoding;
+ (id)codedValueWithCodings:(id)arg1 value:(id)arg2 referenceRanges:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodings:(id)arg1 value:(id)arg2 referenceRanges:(id)arg3;
- (id)chartableCodedQuantityWithError:(id *)arg1;
- (id)chartableCodedQuantitySetWithDate:(id)arg1 error:(id *)arg2;

@end
