/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKMove : SKAction

{
    struct SKCMove *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)moveBy:(struct CGPoint)arg1 duration:(double)arg2;
+ (id)moveTo:(struct CGPoint)arg1 duration:(double)arg2;
+ (id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)moveToX:(double)arg1 duration:(double)arg2;
+ (id)moveToY:(double)arg1 duration:(double)arg2;
+ (id)moveToX:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)moveByX:(double)arg1 duration:(double)arg2;
+ (id)moveByY:(double)arg1 duration:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
