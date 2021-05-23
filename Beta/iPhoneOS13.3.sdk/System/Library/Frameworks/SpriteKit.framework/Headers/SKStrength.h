/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKStrength : SKAction

{
    struct SKCStrength *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)strengthTo:(double)arg1 duration:(double)arg2;
+ (id)strengthBy:(double)arg1 duration:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
