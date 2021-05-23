/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKResize : SKAction

{
    struct SKCResize *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)resizeByWidth:(double)arg1 height:(double)arg2 duration:(double)arg3;
+ (id)resizeToWidth:(double)arg1 height:(double)arg2 duration:(double)arg3;
+ (id)resizeToWidth:(double)arg1 duration:(double)arg2;
+ (id)resizeToHeight:(double)arg1 duration:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
