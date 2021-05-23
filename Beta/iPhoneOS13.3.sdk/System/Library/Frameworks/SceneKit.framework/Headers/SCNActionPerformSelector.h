/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionPerformSelector : SCNAction

{
    SEL _selector;
    id _target;
}

+ (_Bool)supportsSecureCoding;
+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isCustom;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;

@end
