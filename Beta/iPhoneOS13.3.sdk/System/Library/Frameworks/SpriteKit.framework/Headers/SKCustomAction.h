/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKCustomAction : SKAction

{
    struct SKCCustomAction *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)customActionWithDuration:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
