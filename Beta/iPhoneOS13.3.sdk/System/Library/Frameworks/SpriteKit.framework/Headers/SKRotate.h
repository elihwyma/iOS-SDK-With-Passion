/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKRotate : SKAction

{
    struct SKCRotate *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateByAngle:(double)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(double)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(double)arg1 duration:(double)arg2 shortestUnitArc:(_Bool)arg3;
+ (id)rotateByX:(double)arg1 duration:(double)arg2;
+ (id)rotateToX:(double)arg1 duration:(double)arg2;
+ (id)rotateByY:(double)arg1 duration:(double)arg2;
+ (id)rotateToY:(double)arg1 duration:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
