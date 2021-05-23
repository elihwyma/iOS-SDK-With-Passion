/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKAnimate : SKAction

{
    struct SKCAnimate *_mycaction;
    NSArray *_textures;
}

@property (nonatomic) double timePerFrame;

+ (_Bool)supportsSecureCoding;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(_Bool)arg3 restore:(_Bool)arg4;
+ (id)animateWithNormalTextures:(id)arg1 timePerFrame:(double)arg2 resize:(_Bool)arg3 restore:(_Bool)arg4;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDuration:(double)arg1;
- (id)reversedAction;

@end
