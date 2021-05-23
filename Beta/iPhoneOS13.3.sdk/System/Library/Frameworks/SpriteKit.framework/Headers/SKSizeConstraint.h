/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKConstraint.h>

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKSizeConstraint : SKConstraint

{
    SKRange *_widthRange;
    SKRange *_heightRange;
}

@property (copy) SKRange *widthRange;
@property (copy) SKRange *heightRange;

+ (_Bool)supportsSecureCoding;
+ (id)constraintWithWidthRange:(id)arg1;
+ (id)constraintWithHeightRange:(id)arg1;
+ (id)constraintWithWidthRange:(id)arg1 heightRange:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToSizeConstraint:(id)arg1;
- (id)initWithWidthRange:(id)arg1 heightRange:(id)arg2;

@end
