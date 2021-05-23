/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCNActionRunAction : SCNAction

{
    SCNAction *_action;
    NSString *_subSpriteKey;
    NSString *_actionKey;
    _Bool _waitForKeyedAction;
    _Bool _runOnSubSprite;
    _Bool _fired;
}

+ (id)runAction:(id)arg1 onFirstChildWithName:(id)arg2;
+ (id)runAction:(id)arg1 afterActionWithKey:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCustom;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;

@end
