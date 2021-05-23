/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKFollowPath : SKAction

{
    struct SKCFollowPath *_mycaction;
    struct CGPath *_cgPath;
}

+ (_Bool)supportsSecureCoding;
+ (id)followPath:(struct CGPath *)arg1 duration:(double)arg2;
+ (id)followPath:(struct CGPath *)arg1 asOffset:(_Bool)arg2 orientToPath:(_Bool)arg3 duration:(double)arg4;
+ (id)followPath:(struct CGPath *)arg1 speed:(double)arg2;
+ (id)followPath:(struct CGPath *)arg1 asOffset:(_Bool)arg2 orientToPath:(_Bool)arg3 speed:(double)arg4;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
