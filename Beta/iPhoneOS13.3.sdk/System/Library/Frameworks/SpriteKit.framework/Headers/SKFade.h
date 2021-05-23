/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKFade : SKAction

{
    struct SKCFade *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOutWithDuration:(double)arg1;
+ (id)fadeAlphaBy:(double)arg1 duration:(double)arg2;
+ (id)fadeAlphaTo:(double)arg1 duration:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
