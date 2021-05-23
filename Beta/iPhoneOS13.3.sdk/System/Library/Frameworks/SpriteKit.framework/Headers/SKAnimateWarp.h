/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKAnimateWarp : SKAction

{
    struct SKCAnimateMesh *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)warpTo:(id)arg1 duration:(double)arg2;
+ (id)animateWithWarps:(id)arg1 times:(id)arg2 restore:(_Bool)arg3;
+ (id)animateWithWarps:(id)arg1 times:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
