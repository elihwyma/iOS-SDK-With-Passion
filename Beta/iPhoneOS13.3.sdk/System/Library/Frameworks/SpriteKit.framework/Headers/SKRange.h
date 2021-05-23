/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@interface SKRange : NSObject

{
    double _lowerLimit;
    double _upperLimit;
}

@property double lowerLimit;
@property double upperLimit;

+ (_Bool)supportsSecureCoding;
+ (id)rangeWithLowerLimit:(double)arg1 upperLimit:(double)arg2;
+ (id)rangeWithNoLimits;
+ (id)rangeWithLowerLimit:(double)arg1;
+ (id)rangeWithUpperLimit:(double)arg1;
+ (id)rangeWithConstantValue:(double)arg1;
+ (id)rangeWithValue:(double)arg1 variance:(double)arg2;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLowerLimit:(double)arg1 upperLimit:(double)arg2;
- (_Bool)isEqualToRange:(id)arg1;

@end
