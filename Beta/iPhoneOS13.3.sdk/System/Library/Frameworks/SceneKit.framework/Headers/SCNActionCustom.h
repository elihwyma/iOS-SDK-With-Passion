/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionCustom : SCNAction

+ (_Bool)supportsSecureCoding;
+ (id)customActionWithDuration:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isCustom;
- (id)reversedAction;

@end
