/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKScale : SKAction

{
    struct SKCScale *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)scaleBy:(double)arg1 duration:(double)arg2;
+ (id)scaleTo:(double)arg1 duration:(double)arg2;
+ (id)scaleXBy:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)scaleXTo:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)scaleXTo:(double)arg1 duration:(double)arg2;
+ (id)scaleYTo:(double)arg1 duration:(double)arg2;
+ (id)scaleToSize:(struct CGSize)arg1 duration:(double)arg2;
+ (id)scaleXBy:(double)arg1 duration:(double)arg2;
+ (id)scaleYBy:(double)arg1 duration:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
