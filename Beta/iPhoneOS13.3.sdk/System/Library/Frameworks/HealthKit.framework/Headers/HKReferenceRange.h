/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKInspectableValueCollection, NSString;

@interface HKReferenceRange : NSObject <Swift>

{
    NSString *_referenceRangeIdentifier;
    HKInspectableValueCollection *_valueRange;
}

@property (nonatomic, readonly) NSString *referenceRangeIdentifier;
@property (nonatomic, readonly) HKInspectableValueCollection *valueRange;

+ (_Bool)supportsSecureCoding;
+ (id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3;
+ (id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 maxValue:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 inspectableValueRange:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
