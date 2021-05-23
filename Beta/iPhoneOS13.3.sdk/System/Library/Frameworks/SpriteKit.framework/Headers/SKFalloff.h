/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKFalloff : SKAction

{
    struct SKCFalloff *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)falloffTo:(double)arg1 duration:(double)arg2;
+ (id)falloffBy:(double)arg1 duration:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
