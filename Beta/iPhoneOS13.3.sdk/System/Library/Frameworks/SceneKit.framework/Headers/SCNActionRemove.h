/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionRemove : SCNAction

{
    _Bool _hasFired;
}

+ (_Bool)supportsSecureCoding;
+ (id)removeFromParentNode;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;

@end
