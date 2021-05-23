/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKColorize : SKAction

{
    struct SKCColorize *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)colorizeWithColor:(id)arg1 colorBlendFactor:(double)arg2 duration:(double)arg3;
+ (id)colorizeWithColorBlendFactor:(double)arg1 duration:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
