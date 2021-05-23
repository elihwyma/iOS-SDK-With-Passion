/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKWait : SKAction

{
    struct SKCWait *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;
+ (id)waitForDuration:(double)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
