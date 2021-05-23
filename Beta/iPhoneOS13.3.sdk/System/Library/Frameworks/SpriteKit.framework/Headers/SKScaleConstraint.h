/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKConstraint.h>

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKScaleConstraint : SKConstraint

{
    SKRange *_xRange;
    SKRange *_yRange;
}

@property (copy) SKRange *xRange;
@property (copy) SKRange *yRange;

+ (_Bool)supportsSecureCoding;
+ (id)constraintWithXRange:(id)arg1;
+ (id)constraintWithYRange:(id)arg1;
+ (id)constraintWithXRange:(id)arg1 YRange:(id)arg2;
+ (id)constraintWithScaleRange:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToScaleConstraint:(id)arg1;
- (id)initWithXRange:(id)arg1 YRange:(id)arg2;

@end
