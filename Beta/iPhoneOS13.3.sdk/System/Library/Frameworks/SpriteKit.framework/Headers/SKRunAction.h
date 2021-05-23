/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKRunAction : SKAction

{
    SKAction *_action;
    NSString *_subSpriteKey;
    NSString *_actionKey;
    _Bool _waitForKeyedAction;
    _Bool _runOnSubSprite;
    _Bool _fired;
}

+ (_Bool)supportsSecureCoding;
+ (id)runAction:(id)arg1 onFirstChildWithName:(id)arg2;
+ (id)runAction:(id)arg1 afterActionWithKey:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;

@end
